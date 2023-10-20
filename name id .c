#include <stdio.h>
int main()

// program give input and prints name id//

{
    char name[100];
    int id;

    printf("Enter your name:\n");
    gets(name);

    printf("Enter your ID:\n");
    scanf("%d", &id);

    printf("Your name is: %s \n", name);
    printf("Your ID is: %d \n", id);

    return 0;
}
