#include<stdio.h>

int doses[]={1,3,2,1000};
void skip(char *msg);

int drinks[]={1,3,4,6};
int main(void){
    
	printf("issue doses %i\n", 3[doses]);


	printf("first round of drinks: %i\n", drinks[0]);
	printf("first round of drinks: %i\n", *drinks);
	printf("third round of drinks: %i\n", drinks[2]);
	printf("third round of drinks: %i\n", *(drinks+2));

	char *msg_from_jameela = "Don't call me";
	skip(msg_from_jameela);
    
	return 0;
}

void skip(char *msg){
 puts(msg+6);

}
