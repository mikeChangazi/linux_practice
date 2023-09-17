#include<stdio.h>
#include<string.h>
#include <termios.h>
#include <unistd.h>

#define MAX_PASSWORD_LENGTH 50
// #include<conio.h>
#define ENTER 13
#define TAB 9
#define BCKSPC 8

struct user{
    char fullname[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];

};
//Take Imput
void takeinput(char ch[50]){
    fgets(ch,50, stdin);
    ch[strlen(ch)-1]=0;
}

// Generate Username
char generateUsername(char email[50], char username[50]){
    // if email is abcd2gmail.com.. user name will be what
    // is infront of @
    for(int i =0; i< strlen(email); i++)
     if(email[i]=='@')break;
    else username[i]= email[i];

}

// void takepassword(char pwd[50]){
//     int i;
//     char ch;
//     while(1){
//         // ch =getch();
//         // ch = getchar();
//         scanf("%c",&ch);
//         if(ch==ENTER || ch == TAB){
//            pwd[i]=='\0';
//             break; 
//         }else if (ch==BCKSPC){
//             if(i>1){
//                 i--;
//                 printf("\b \b"); //abc
//             }
//         }else {
//             pwd[i++]= ch;
//             printf("* \b");
//         }
//     }
// }

void hidePasswordInput(char *password, int maxLength) {
    struct termios oldTermios, newTermios;
    tcgetattr(STDIN_FILENO, &oldTermios);
    newTermios = oldTermios;
    newTermios.c_lflag &= ~(ECHO | ECHOE | ECHOK | ECHONL | ICANON);
    tcsetattr(STDIN_FILENO, TCSANOW, &newTermios);

    int i = 0;
    char ch;
    while (i < maxLength - 1) {
        ch = getchar();
        if (ch == '\n' || ch == '\r') {
            break;
        }
        if (ch == 127) {  // Backspace key
            if (i > 0) {
                putchar('\b'); // Move cursor back
                putchar(' ');  // Erase character
                putchar('\b'); // Move cursor back again
                i--;
            }
        } else {
            password[i++] = ch;
            putchar('*');
        }
    }
    password[i] = '\0';
    printf("\n");

    tcsetattr(STDIN_FILENO, TCSANOW, &oldTermios);
}


int main(){

    FILE *fp;
    int opt;

    struct user user;
    char password2[50];

    printf("\t\t\t------welcome to Aunthentication System------\t\t\t");
    printf("\n Select Options");
    printf("\n1. Signup");
    printf("\n2. Login");
    printf("\n2. Exit ");

    printf("\n\n Your Choice:\t");

    scanf("%d", &opt);
    fgetc(stdin);

    switch(opt){
        case 1:
          printf("Enter full name: ");
           takeinput(user.fullname);

          printf("Enter Email: ");
           takeinput(user.email);

          printf("Enter Phone: ");
           takeinput(user.phone);
        
        //   printf("Enter Password: ");
        //    takepassword(user.password);

         char password[MAX_PASSWORD_LENGTH];
               printf("Enter your password: ");
               hidePasswordInput(password, MAX_PASSWORD_LENGTH);
            //    printf("Password entered: %s\n", password);
               printf("Confirm your password");
               hidePasswordInput(password2, MAX_PASSWORD_LENGTH);

               if(!strcmp(password,password2)){
                printf("match!\n");
                generateUsername(user.email, user.username);
                fp =fopen("Users.dat", "a+");
                fwrite(&user, sizeof(struct user),1, fp);
                if(fwrite !=0) printf("Success");
               }else printf("Passwords do not match\n");

        case 2:
            char usernme[50], pword[50];
            struct user user;
                
    }



    return 0;
}