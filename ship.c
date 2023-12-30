#include<stdio.h>
#include<string.h>

char direction[5];

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

void move_north_east(int *lat, int *lon){
    *lat = *lat-1;
    *lon = *lon +1;
}

void move_north(int *lat, int *lon){
    *lat = *lat+1;
    *lon = *lon+0;
}

int main(){
   
   int latitude = 32;
   int longitude = -64;
 
   
   printf("Enter direction: ");
   scanf("%c", direction);

   if(direction =='W'|| direction =='w'){
	  move_north(&latitude, &longitude);
	  printf("now at position [%i, %i]", latitude, longitude);

   }else if(direction == 'D'|| direction == 'd'){

	  move_north_east(&latitude, &longitude);
      printf("now at position[%i, %i]", latitude, longitude);
	}

   return 0;
}
