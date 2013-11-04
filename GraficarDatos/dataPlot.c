/*
Arquitectura y Diseño de Sistemas Digitales Uniandes
Nombre:Jorge Luis Mayorga
Codigo:20111082
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "BBBio.h"
int main(int argc, char **argv)
{
FILE *gplot = popen("gnuplot -persist","w");
  fprintf(gplot, "set term png\n");
  fprintf(gplot, "set output 'Plot_Data.png'\n");
  fprintf(gplot, "set multiplot layout 1,2 rowsfirst \n");
  
  fprintf(gplot, "set title 'x1(t)'\n");
  fprintf(gplot, "unset key\n");
  fprintf(gplot, "plot 'Data.txt' using 1:2\n");
  
  fprintf(gplot, "set title 'x2(t)'\n");
  fprintf(gplot, "unset key\n");
  fprintf(gplot, "plot 'Data.txt' using 1:3\n");


  close(gplot);
}

