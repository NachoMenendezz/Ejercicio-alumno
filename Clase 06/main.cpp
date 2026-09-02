#include <iostream>
#include <cstring>
#include "clsAlumno.h"
#include "menus.h"
#include <cstdlib>
#include <ctime>

using namespace std;

/**
Crear una clase Alumno que almacene los siguientes datos:
-Legajo (int).
-Nombre y apellido (vector char).
-DNI.
-Dia, mes y año de nacimiento (3 int).
-Dia, mes y año de inscripcion (3 int)
-Domicilio (vector char).

El programa deberá solicitar la cantidad de alumnos que se van a cargar al momento de iniciarse la carga.

Extra: Crear además una clase Inscripcion que permita cargar las inscripciones del alumno a una materia que se
identifica con un número de materia del 1 al 20.
PIENSENLO COMO UN TOTAL DE INSCRIPCIONES, NO POR MATERIA.

-ID de inscripcion.
-Numero de materia.
-Legajo del alumno.

Crear una clase Materia para almacenar los datos de las materias. Las materias se identifican con:
-Numero de materia.
-Nombre de materia.
-Cuatrimestre al que pertenece.
*/

/**
Agregar una opcion al menu que me pida una posicion y me muestre al alumno que ocupa esa posicion en el vector.

EXTRA: Agregar una funcion que me pida un legajo y me devuelva la posicion del alumno que tiene ese legajo en el vector. Si no existe el legajo, devuelve -1.
*/

/**
Utilizando el mecanismo de la composicion, agregar a la clase alumno una propiedad para la fecha de inscripcion y crear
una clase Domicilio para almacenar la informacion del domicilio del alumno (calle, altura, localidad, provincia, codigo postal).

Hacer una funcion me pida un legajo y me muestre al alumno con ese legajo.

Validar que no se permitan legajos repetidos en mi vector.

Agregar al menu la opcion para listar un alumno por legajo.
*/

/**
Con los extras del punto 1, modificar el menu principal para que tenga como opciones los siguientes submenues:
1 - ALUMNOS.
2 - MATERIAS.
3 - INSCRIPCIONES.
4 - DOCENTES.

Cada submenu debe tener un cargar y un mostrar.

Los docentes tienen la siguiente información:
-Legajo docente.
-Nombre y apellido.
-DNI.
-Fecha de nacimiento.
-Fecha de contratacion.
-Domicilio.
-Email.

*/

//void submenuAlumno(Alumno *, int);


int main()
{
    srand(time(NULL));
    menuPrincipal();
    return 0;
}

