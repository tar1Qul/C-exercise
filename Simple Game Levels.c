#include <stdio.h>
int main()
{
    printf("Select Game Level(1/2/3):");
    int level;
    scanf("%d",&level);

    switch(level){

        case 1:printf("Welcome To Level 1");break;
        case 2:printf("Welcome To Level 2");break;
        case 3:printf("Welcome To Level 3");break;
        default:printf("Error404");
    }
   return 0;
}
