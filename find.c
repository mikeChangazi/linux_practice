#include<stdio.h>
#include<string.h>

char track[][80]={

"I left my heart in Harvard Med School",
"Newark, Newark - a wonderful town",
"Dancing with a Dork",
"From here to maternity",
"The girl from Iwo Jima"

};

void find_track(char search[]){
 for (int i=0;i<5;i++){
   if(strstr(track[i], search)){
     printf("Track %i : '%s' \n", i, track[i]);
        }
    }
}

int main(void){
 char search[80];
 printf("Enter track: ");
 fgets(search,80, stdin);

 size_t len = strlen(search);
 if (len>0 && search[len-1] =='\n'){
    search[len-1] ='\0';
 }
 find_track(search);

 return 0;
}








void print_reverse(char *s)
{
size_t len = strlen(s);
char *t = s+len - 1;
while ( t>= s) {
printf("%c", *t);
t = t-1;
}
puts("");
