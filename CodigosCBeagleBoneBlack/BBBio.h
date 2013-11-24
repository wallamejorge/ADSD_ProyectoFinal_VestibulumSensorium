#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int PIN_VALUE(int n);
void intToChar(int j,char indice[]);
void PIN_ON(int n);
void PIN_OFF(int n);
void PIN_BLINKING(int pin);
void HTML_LatLongWrite(char lat[] , char lon[]);
void updateGoogleMaps(void);
double Read_latGPS(void);

void PIN_ON(int n)
{
  char command[100]="echo high > /sys/class/gpio/gpio";
  char no_pin[2]="";
  char comman_end[11]="/direction";
  int j=n;
  intToChar(j,no_pin);
  strcat(command,no_pin);
  strcat(command,comman_end);
FILE *TestConsole= popen(command,"w");
fclose(TestConsole);
}



void PIN_OFF(int n)
{
  char command[100]="echo low > /sys/class/gpio/gpio";
  char no_pin[3]="";
  char comman_end[11]="/direction";
  int j=n;
  intToChar(j,no_pin);
  strcat(command,no_pin);
  strcat(command,comman_end);
FILE *TestConsole= popen(command,"w");
fclose(TestConsole);
}

void PIN_BLINKING(int pin)
{
  while(1==1){
  PIN_OFF(pin);
  sleep(1);
  PIN_ON(pin);
  sleep(1);
}
}

int PIN_VALUE(int n)
{
  FILE *in;
  char command[100]="/sys/class/gpio/gpio";
  char no_pin[2]="";
  int valuePin=0;
  char comman_end[11]="/value";
  int j=n;
  intToChar(j,no_pin);
  strcat(command,no_pin);
  strcat(command,comman_end);
  char caracteres[3];
  in = fopen(command,"r");
  fgets(caracteres,2,in);
  fclose(in);
  if(caracteres[0]=='1'){valuePin=1;}
  else {valuePin=0;}
   return valuePin;
}

int ANALOG_READ(int n)
{
  FILE *in;
  char command[100]="/sys/bus/iio/devices/iio:device0/in_voltage";
  char no_pin[2]="";
  int valuePin=0;
  int salida=10;
  char comman_end[5]="_raw";
  int j=n;
  intToChar(j,no_pin);
  strcat(command,no_pin);
  strcat(command,comman_end);
  char caracteres[10];
  in = fopen(command,"r");
  fgets(caracteres,10,in);
  salida= atoi (caracteres);
   fclose(in);
  return salida;
}

void HTML_LatLongWrite(char lat[] , char lon[])
{
FILE *in;
in = fopen("main_html.html","r+");
int fin=feof(in);
int i=0;
char caracteres[100];
char cadena1[200] = "center: new google.maps.LatLng( ";
char cadena3[200] = ",";
char cadena5[200] = "), \n";

strcat(cadena1,lat);
strcat(cadena1,cadena3);
strcat(cadena1,lon);
strcat(cadena1,cadena5);

while (feof(in) == 0){
    fgets(caracteres,100,in);
    i=i+1;
	if(i==11){fputs( cadena1, in );break;}
  }
}

void updateGoogleMaps(void){
char command[100]="firefox main_html.html &";
FILE *TestConsole= popen(command,"r");
fclose(TestConsole);
}

double Read_latGPS(void){
FILE *in;
in = fopen("demo.txt","r");
int i=0;
char caracteres[1000];
while (feof(in) == 0){
    fgets(caracteres, i, in);
     //printf( "Linea leida es %s \n", caracteres );
	i=i+1;
  }
fclose(in);
return 0.0;
}

void intToChar(int j,char indice[]){
if(j==0){strcat(indice,"0");}
if(j==1){strcat(indice,"1");}
if(j==2){strcat(indice,"2");}
if(j==3){strcat(indice,"3");}
if(j==4){strcat(indice,"4");}
if(j==5){strcat(indice,"5");}
if(j==6){strcat(indice,"6");}
if(j==7){strcat(indice,"7");}
if(j==8){strcat(indice,"8");}
if(j==9){strcat(indice,"9");}
if(j==10){strcat(indice,"10");}
if(j==11){strcat(indice,"11");}
if(j==12){strcat(indice,"12");}
if(j==13){strcat(indice,"13");}
if(j==14){strcat(indice,"14");}
if(j==15){strcat(indice,"15");}
if(j==16){strcat(indice,"16");}
if(j==17){strcat(indice,"17");}
if(j==18){strcat(indice,"18");}
if(j==19){strcat(indice,"19");}
if(j==20){strcat(indice,"20");}
if(j==21){strcat(indice,"21");}
if(j==22){strcat(indice,"22");}
if(j==23){strcat(indice,"23");}
if(j==24){strcat(indice,"24");}
if(j==25){strcat(indice,"25");}
if(j==26){strcat(indice,"26");}
if(j==27){strcat(indice,"27");}
if(j==28){strcat(indice,"28");}
if(j==29){strcat(indice,"29");}
if(j==30){strcat(indice,"30");}
if(j==31){strcat(indice,"31");}
if(j==32){strcat(indice,"32");}
if(j==33){strcat(indice,"33");}
if(j==34){strcat(indice,"34");}
if(j==35){strcat(indice,"35");}
if(j==36){strcat(indice,"36");}
if(j==37){strcat(indice,"37");}
if(j==38){strcat(indice,"38");}
if(j==39){strcat(indice,"39");}
if(j==40){strcat(indice,"40");}
if(j==41){strcat(indice,"41");}
if(j==42){strcat(indice,"42");}
if(j==43){strcat(indice,"43");}
if(j==44){strcat(indice,"44");}
if(j==45){strcat(indice,"45");}
if(j==46){strcat(indice,"46");}
if(j==47){strcat(indice,"47");}
if(j==48){strcat(indice,"48");}
if(j==49){strcat(indice,"49");}
if(j==50){strcat(indice,"50");}
if(j==51){strcat(indice,"51");}
if(j==52){strcat(indice,"52");}
if(j==53){strcat(indice,"53");}
if(j==54){strcat(indice,"54");}
if(j==55){strcat(indice,"55");}
if(j==56){strcat(indice,"56");}
if(j==57){strcat(indice,"57");}
if(j==58){strcat(indice,"58");}
if(j==59){strcat(indice,"59");}
if(j==60){strcat(indice,"60");}
if(j==61){strcat(indice,"61");}
if(j==62){strcat(indice,"62");}
if(j==63){strcat(indice,"63");}
if(j==64){strcat(indice,"64");}
if(j==65){strcat(indice,"65");}
if(j==66){strcat(indice,"66");}
if(j==67){strcat(indice,"67");}
if(j==68){strcat(indice,"68");}
if(j==69){strcat(indice,"69");}
if(j==70){strcat(indice,"70");}
if(j==71){strcat(indice,"71");}
if(j==72){strcat(indice,"72");}
if(j==73){strcat(indice,"73");}
if(j==74){strcat(indice,"74");}
if(j==75){strcat(indice,"75");}
if(j==76){strcat(indice,"76");}
if(j==77){strcat(indice,"77");}
if(j==78){strcat(indice,"78");}
if(j==79){strcat(indice,"79");}
if(j==80){strcat(indice,"80");}
if(j==81){strcat(indice,"81");}
if(j==82){strcat(indice,"82");}
if(j==83){strcat(indice,"83");}
if(j==84){strcat(indice,"84");}
if(j==85){strcat(indice,"85");}
if(j==86){strcat(indice,"86");}
if(j==87){strcat(indice,"87");}
if(j==88){strcat(indice,"88");}
if(j==89){strcat(indice,"89");}
if(j==90){strcat(indice,"90");}
if(j==91){strcat(indice,"91");}
if(j==92){strcat(indice,"92");}
if(j==93){strcat(indice,"93");}
if(j==94){strcat(indice,"94");}
if(j==95){strcat(indice,"95");}
if(j==96){strcat(indice,"96");}
if(j==97){strcat(indice,"97");}
if(j==98){strcat(indice,"98");}
if(j==99){strcat(indice,"99");}
if(j==100){strcat(indice,"100");}
}
