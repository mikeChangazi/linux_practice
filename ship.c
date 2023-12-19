#include<stdio.h>

void go_south_east(int *lat, int *lon){
   *lat = *lat-1; //decrease the latitude
   *lon = *lon+1; // increase the logitude
}

int main(){
   int latitude = 32;
   int longitude = -64;

   go_south_east(&latitude, &longitude);

   printf("now at position [%i, %i]", latitude,    longitude);


   return 0;
}
