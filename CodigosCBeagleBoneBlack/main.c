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
  char lat[200] = "35.689506";
  char lon[200] = "139.6917";
  HTML_LatLongWrite(lat,lon);
  updateGoogleMaps();
  return 0;
}



