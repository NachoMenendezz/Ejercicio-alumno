#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

#include "clsAlumno.h"
#include "materia.h"
#include "Inscripcion.h"
void menuPrincipal();
void menuAlumnos(Alumno *, int);
void cargarAlumnos(Alumno *, int);
void mostrarAlumnos(Alumno *, int);
void menuMateria (Materia []);
void cargarMateria(Materia []);
void mostrarMateria(Materia []);
void menuInscripcion(Inscripcion * );
void cargarInscripcion(Inscripcion *, int & );

#endif // MENUS_H_INCLUDED
