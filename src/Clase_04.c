/*
 ============================================================================
 Name        : Clase_04.c
 Author      : yo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include <string.h>

#define EXIT_ERROR -1

int main(void)
{
/*	MAIN PARA TESTEAR CON CHAR
  	char resultado;
	if(getCharacter(&resultado,"Edad?\n","Error\n",'a','z',2)==0)
	{
		printf("El resultado es: %c",resultado);
	}
	return EXIT_SUCCESS;*/

	/*	MAIN PARA TESTEAR CON INT
  	int resultado;
	if(getInt(&resultado,"Edad?\n","Error\n",0,150,2)==0)
	{
		printf("El resultado es: %d",resultado);
	}
	return EXIT_SUCCESS;*/

  	char resultado[100];
	if(getCharacterChain(resultado,"Edad?\n","Error\n","aaaaaaaaaa\n","zzzzzzzzzz\n",2)==0)
	{
		printf("El resultado es: %s",resultado);
	}
	printf("MARCA");
	return EXIT_SUCCESS;
}



