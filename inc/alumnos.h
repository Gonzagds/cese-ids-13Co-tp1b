/*=====[Module Name]===========================================================
 * Copyright 2019 Esteban Daniel VOLENTINI <evolentini@gmail.com>
 * All rights reserved.
 * License: BSD-3-Clause <https://opensource.org/licenses/BSD-3-Clause>)
 *
 * Version: 0.1.0
 * Creation Date: 2019/03/01
 */

/*=====[Avoid multiple inclusion - begin]====================================*/

#ifndef _ALUMNOS_H_
#define _ALUMNOS_H_

/*=====[Inclusions of public function dependencies]==========================*/

#include <stdbool.h>
#include <stddef.h>

/*=====[C++ - begin]=========================================================*/

#ifdef __cplusplus
extern "C" {
#endif

/*=====[Definition macros of public constants]===============================*/

/*=====[Public function-like macros]=========================================*/

/*=====[Definitions of public data types]====================================*/

typedef struct alumno_s {
    char apellidos[30];
    char nombres[30];
    char documento[11];
} const * alumno_t;

/*=====[Definitions of public global variables]==============================*/

/*=====[Prototypes (declarations) of public functions]=======================*/

/**
SerializarAlumno()
Toma los datos de un alumno y los imprime con un formato determinado para
ser mostrados en pantalla.
cadena: puntero al buffer de salida donde se imprimirán los datos.
espacio: máximo numero de caracters a imprimir en buffer
alumno: estructura que contiene los datos del alumno.

return: verdadero si se imprimió algun caracter o falso en caso contrario.
*/
bool SerializarAlumno(char * cadena, size_t espacio, const alumno_t alumno);

/**
@SerializarAlumnos()
Toma los datos de todos los alumnos y los imprime con un formato determinado para
ser mostrados en pantalla agregando una cabecera al comienzo.
cadena: puntero al buffer de salida donde se imprimirán los datos.
espacio: máximo numero de caracters a imprimir en buffer

return: verdadero si se imprimieron los datos de todos los alumnos  o falso en 
caso contrario.
*/
bool SerializarAlumnos(char * cadena, size_t espacio);

/*=====[Prototypes (declarations) of public interrupt functions]=============*/

/*=====[C++ - end]===========================================================*/

#ifdef __cplusplus
}
#endif

/*=====[Avoid multiple inclusion - end]======================================*/

#endif /* _ALUMNOS_H_ */
