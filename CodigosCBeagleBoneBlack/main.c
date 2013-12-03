#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include "BBBio.h" 
int main(void)
{
  printf("BEAGLEBONE BLACK.....is alive!\n");
  printf("..............................\n");
  char lat[200] = "10.000111";
  char lon[200] = "10.000400";
  double analog=0.0;
  double i=0.0;
  int port=0;
  int Stop=0;
  printf("...Se inicializaron las variables...\n");
  initAnalogPort();
  printf("...Se inicializo los puertos analogos\n");
  initDigitalPort(44);
  printf("...Se inicializo el puerto digital 44:P8-12..\n");
  Stop=PIN_VALUE(44);
  printf("...Arrancamos el Ciclo While de lectura analoga....\n");
  while(Stop==0){
  analog=readADC(port);
  escribirxy_txt(i,(analog));
  printf("El valor de Gas de CO2 es %f ppm en el ambiente !\n",analog);
  Stop=PIN_VALUE(44);
  i=i+1;
  sleep(1);
  }
  printf("...Se cerro el ciclo...graficando...\n");
  plot();
  printf("...Termino la grafica....\n");
  printf("...Comenzando codigos de GPS...\n");
  Read_latGPS();
  //HTML_LatLongWrite(lat,lon);
  //printf("...Generando archivo de HTML con los Mapas....\n");
  //updateGoogleMaps();
  // printf("...Abriendo Firefox....\n");
  return 0;
}



