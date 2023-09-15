#include<stdio.h>
#define ENTER 13
#define TAB 9
#define BKSPC 8

struct user{
    char fullname[50];
    char email[50];
    char password[50];
    char username[50];
    char phone[50];

};
//Take Imput
void takeinput(char ch[50]){
    fgets(ch,sizeof(ch), stdin);
    ch[strlen(ch)-1]=0;
}

// Generate Username
void generateUsername(char email[50], char username[50]){
    // if email is abcd2gmail.com.. user name will be what
    // is infront of @
    for(int i =0; i< strlen(email); i++)
     if(email[i]=='@')break;
    else username[i]= email[i];

}

void takepassword(char pwd[50]){
    int i;
    char ch;
    while(1){
        ch =getch();
        if(ch==ENTER || ch == TAB){
           pwd[i]=="\0";
            break; 
        }
    }
}

int main(){
    int opt;

    struct user user;

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
        
          printf("Enter Password: ");
           takeinput(user.password);
    }



    return 0;
}