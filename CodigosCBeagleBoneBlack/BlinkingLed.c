/* 
 ___________________________________________________________________________________
|                                                                                   |
|Nombre:BlinkingLed.c                                                               |
|Compilador:ARM                                                                     |
|Entradas:ninguna                                                                   |
|Salidas:Mensaje de Bienvenida en bash y led P8_12 enciende                         |
|Autores : Jorge Luis Mayorga Taborda, Monica Tuta Fajardo, Juan Felipe Martinez    |
|___________________________________________________________________________________|

*/

//--------------------------------------------------//
//------------Declaraciones Librerias---------------//
//--------------------------------------------------//
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "BBBio.h"
//--------------------------------------------------//




//--------------------------------------------------//
//------------Declaraciones Funciones---------------//
//--------------------------------------------------//
void Welcome(void);
//---------------------------------------------------//




//--------------------------------------------------//
//----------------Funcion Principal-----------------//
//--------------------------------------------------//
int main(int argc, char **argv)
{
  int pinIn=44;
  int pinOut=60;
  int entrada=0;
  Welcome();
  while (1==1){
  entrada=PIN_VALUE(pinIn);
  printf("El valor del pin es :%d \n",entrada);
  if(entrada==0){PIN_OFF(pinOut);}
  else{PIN_ON(pinOut);}
} 
}
//---------------------------------------------------//


//--------------------------------------------------//
//------------------Funcion Welcome-----------------//
//--------------------------------------------------//
void Welcome(void)
{
  printf(" ______________________________ \n");
  printf("|..............................|\n");
  printf("|..............................|\n");
  printf("|BEAGLEBONE BLACK.....is alive!|\n");
  printf("|..............................|\n");
  printf("|....Welcome to BlinkingLed....|\n");
  printf("|..............................|\n");
  printf("|______________________________|\n");
}
//---------------------------------------------------//










