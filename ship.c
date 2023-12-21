#include<stdio.h>

char direction[2];

void go_south_east(int *lat, int *lon){
   *lat = *lat-1; //decrease the latitude
   *lon = *lon+1; // increase the logitude
}

void move_east(int *lon){
   *lon = *lon +1;
}

void move_west(int *lon){
     *lon = *lon-1;
}

void move_north_east(int *lat int *lon){
    *lat = *lat-1;
    *lon = *lon +1;
}

void move_north(int *lat){
    *lat = *lat+1; }

int main(){
   
   
   printf("Enter direction: ");
   scanf("%s", direction);
   
   int latitude = 32;
   int longitude = -64;

   go_south_east(&latitude, &longitude);

   printf("now at position [%i, %i]", latitude,    longitude);


   return 0;
}
