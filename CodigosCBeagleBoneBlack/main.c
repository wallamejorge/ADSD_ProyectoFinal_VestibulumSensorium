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
  char lat[200] = "35.789506";
  char lon[200] = "137.6917";
  double analog=0.0;
  double i=0.0;
  int port=0;
  int Stop=0;
  Stop=PIN_VALUE(44);
  while(Stop==0){
  analog=readADC(port);
  escribirxy_txt(i,(analog));
  Stop=PIN_VALUE(44);
  i=i+1;
  sleep(1);
  }
  plot();
  //HTML_LatLongWrite(lat,lon);
  //updateGoogleMaps();
  return 0;
}



