#include<stdio.h>

char food[20];

int main(){
puts("Enter foods!\n");
  fgets(food, sizeof(food), stdin);
  printf("%s", food);

}
