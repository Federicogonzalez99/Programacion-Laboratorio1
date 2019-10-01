#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "Estudiantes.h"
#include "Informes.h"

int informes_ListarporNombre(eEstudiante arrayEst[], int tamEst, eCurso arrayCurso[], int tamCurso, char* criterio)
{
    int retorno = -1;
    int i;
    int j;
    int encontrado;
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
                        printf("\nListado ID Estudiante: %d  ID Materia: %d ", arrayEst[i].idEstudiante,arrayCurso[j].idMateria);
                    }
                }
            }
        }
    }
}
