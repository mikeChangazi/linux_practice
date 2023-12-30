#include<stdio.h>

int main(){
 int i=0;
 char cards[]= "JQK";
 char a_card = cards[2];
 cards[2] = cards[1];
 printf("[%i] = %s\n", cards[i], cards);

 cards[1] = cards[0];
 printf("[%i] = %s\n", cards[i], cards);

 cards[0] = cards[2];
 printf("[%i] = %s\n", cards[i], cards);

 cards[2] = cards[1];
 printf("[%i] = %s\n", cards[i], cards);

 cards[1] = a_card;
 puts(cards);

 return 0;

}
