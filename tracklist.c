#include<stdio.h>
#include<string.h>
#include <stdbool.h>
char tracks[][80] = { "I left my heart in havard med school",
	"Newark, newark - a wonderful town",
	"Dancing with a Dork",
	"Fom here to maternity",
	"The girl from Iwo Jima"};

int main(void){

//char selection[80];
int selection =0;
while(1){
	printf("1. Track one.\n");
	printf("2. Track two.\n");
	printf("3. Track three.\n");
	printf("4. TRack four.\n");
	printf("5. Track five.\n");
printf("Enter Your Selection:\n");
scanf("%i", &selection);

switch(selection){
	case 1:
		printf("Now playing %s\n",tracks[0]);
		break;
	case 2:
		printf("Now playing %s\n", tracks[1]);
		break;
	case 3:
		printf("Now playing %s\n", tracks[2]);
		break;
	case 4:
		printf("Now playing %s\n", tracks[3]);
		break;
	case 5:
		printf("Now playing %s\n", tracks[4]);
		break;
	default:
		printf("Please enter valid option!!\n");
		break;
}

//fgets(selection, sizeof(selection,stdin);
//	if(strcmp(tracks, selection)){}
}


return 0;
}
