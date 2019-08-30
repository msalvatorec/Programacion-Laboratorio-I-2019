#include <stdio.h>
/*#include <stdio_ext.h>*/
#include <stdlib.h>
#include <string.h>
#include "utn.h"

int getInt(	int *resultado,
			char *mensaje,
			char *mensajeError,
			int minimo,
			int maximo,
			int reintentos)
{
	int retorno = EXIT_ERROR;
	int buffer;
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			/*__fpurge(stdin);*/
			fflush( stdin );
			if(scanf("%d",&buffer)==1)
			{
				if(buffer >= minimo && buffer <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}





int getFloat(	float *resultado,
				char *mensaje,
				char *mensajeError,
				float minimo,
				float maximo,
				int reintentos)
{
	int retorno = EXIT_ERROR;
	float buffer;
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			/*__fpurge(stdin);*/
			fflush( stdin );
			if(scanf("%f",&buffer)==1)
			{
				if(buffer >= minimo && buffer <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}

int getCharacter(	char *resultado,
					char *mensaje,
					char *mensajeError,
					char minimo,
					char maximo,
					int reintentos)
{
	int retorno = EXIT_ERROR;
	char buffer;
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		minimo < maximo &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			/*__fpurge(stdin);*/
			fflush( stdin );
			if(scanf("%c",&buffer)==1)
			{
				if(buffer >= minimo && buffer <= maximo)
				{
					retorno = EXIT_SUCCESS;
					*resultado = buffer;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}



int getCharacterChain(	char *resultado,
						char *mensaje,
						char *mensajeError,
						char *minimo,
						char *maximo,
						int reintentos)
{
	int retorno = EXIT_ERROR;
	char buffer[100];
	int esMenor;
	int esMayor;
	int validaLimitesMaxMin;
	validaLimitesMaxMin=strcmp(minimo,maximo);
	if(	resultado != NULL &&
		mensaje	!= NULL &&
		mensajeError != NULL &&
		validaLimitesMaxMin <= 0 &&
		reintentos >= 0)
	{
		do
		{
			printf("%s",mensaje);
			/*__fpurge(stdin);*/
			fflush( stdin );
			if(scanf("%s",buffer)==1)
			{
				esMenor=strcmp(minimo,buffer);
				esMayor=strcmp(buffer,maximo);
				// asi como esta verifico que la cadena ingresada este acotada entre la cadena
				// estipulada como minima y la estipiulada como maxima (tipo alfabeticamente
				// es la cotejacion
				if( (esMenor>=0) && (esMayor<=0) )
				{
					strcpy(resultado,buffer);
					retorno = EXIT_SUCCESS;
					break;
				}
			}
			printf("%s",mensajeError);
			reintentos--;
		}while(reintentos >= 0);
	}
	return retorno;
}
