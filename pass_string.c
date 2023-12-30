#include<stdio.h>

void fortune_cookie(char msg[]);

int main(void){
  char qoute[] = "Hello, this is a cookie message";
  fortune_cookie(qoute);


  return 0;

}

void fortune_cookie(char msg[]){
 printf("Message reads: %s\n", msg);
 printf("Message occupies: %i bytes\n", sizeof(msg));


}
