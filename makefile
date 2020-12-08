SRC_DIR = ./src
INC_DIR = ./inc
OBJ_DIR = ./build/obj
BIN_DIR = ./build
DOC_DIR = ./doc

#wildcard (comodin) This string, used anywhere in a makefile, is replaced by a space-separated list of names of existing files that match one of the given file name patterns
#patsubst Finds whitespace-separated words in text that match pattern and replaces them with replacement
#la primer linea lista todos los archivos c dentro de src y la segunda genera una cadena de los archivos *.o basado el la lista de archivos *.c
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(patsubst $(SRC_DIR)%.c,$(OBJ_DIR)%.o,$(SRC_FILES))

all: build_folders $(OBJ_FILES)
	@echo Building aplication
	@gcc $(OBJ_FILES) -o $(BIN_DIR)/app.out

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo Compiling source file $(notdir $(basename $<))
	@gcc -c $< -I$(INC_DIR) -o $@

docs: $(DOC_DIR)
	doxygen 
###############################################################################
# Creation of output folders
build_folders: $(BIN_DIR) $(LIB_DIR) $(OBJ_DIR) $(DOC_DIR) $(DPN_DIR) $(RST_DIR)

$(OUT_DIR):
	@echo Creating output root folder
	@mkdir $(OUT_DIR)

$(BIN_DIR): $(OUT_DIR)
	@echo Creating output binaries folder
	@mkdir $(BIN_DIR)

$(OBJ_DIR): $(OUT_DIR)
	@echo Creating output objects folder
	@mkdir $(OBJ_DIR)

$(DOC_DIR): 
	@echo Creating output objects folder
	@mkdir $(DOC_DIR)
