#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "Estudiantes.h"
#include "Informes.h"

int informes_ListarporNombre(eEstudiante arrayEst[], int tamEst, eCurso arrayCurso[], int tamCurso, char* criterio, eMateria arrayMateria[], int tamMateria)
{
    int retorno = -1;
    int i;
    int j;
    int encontrado;
    char descripcion[30];
    if(arrayEst!=NULL && tamEst>0 && arrayCurso!=NULL && tamCurso>0 && criterio!=NULL)
    {
        for(i=0;i<tamEst;i++)
        {
            if(arrayEst[i].isEmpty==1)
            {
                continue;
            }
            if(strcmp(arrayEst[i].nombre,criterio)==0)
            {
                for(j=0;j<tamCurso;j++)
                {
                    encontrado=-1;
                    encontrado = estudiante_buscarIDCurso(arrayCurso,tamCurso,arrayEst[i].idEstudiante,j);
                    if(encontrado==0)
                    {
                        if(estudiante_buscarDescrpMateria(arrayMateria, tamMateria,arrayCurso[j].idMateria,&descripcion )==0)
                        {
                             printf("\nListado ID Estudiante: %d - ID Materia: %d - Materia: %s - Nota: %d\n", arrayEst[i].idEstudiante,arrayCurso[j].idMateria,descripcion,arrayCurso[j].nota);
                        }


                    }
                }
            }
        }
        retorno = 0;
    }
    return retorno;
}
