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
  char lat[200] = "8.7199644144551005";
  char lon[200] = "-50.7199644144551005";
  HTML_LatLongWrite(lat,lon);
  return 0;
}



