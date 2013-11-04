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
//--------------------------------------------------//




//--------------------------------------------------//
//------------Declaraciones Funciones---------------//
//--------------------------------------------------//
void Welcome(void);
void test_LEDS(void);
void test_DigitalOut(void);
void test_DigitalInput(void);
//---------------------------------------------------//




//--------------------------------------------------//
//----------------Funcion Principal-----------------//
//--------------------------------------------------//
int main(int argc, char **argv)
{
  Welcome();
  FILE *TestConsole= popen("echo high > /sys/class/gpio/gpio44/direction","w");
  fprintf(TestConsole, "echo low > /sys/class/gpio/gpio44/direction");
  fclose(TestConsole);
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
