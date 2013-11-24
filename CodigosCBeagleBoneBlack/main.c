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
  double r=Read_latGPS();
  HTML_LatLongWrite(lat,lon);
  updateGoogleMaps();
  return 0;
}



