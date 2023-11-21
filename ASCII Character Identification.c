#include <stdio.h>
int main(){
    printf("Enter an ASCHI Code:");
    int code;
    scanf("%d",&code);

    switch(code){
        case 65 ... 90:printf("Alphabet");break;
        case 97 ... 122:printf("Alphabet");break;
        case 48 ... 57:printf("Digit");break;
        case 33 ... 47:printf("Special Characters");break;

        default:printf("unknown");
    }

   return 0;
}
