/* Write a C program that takes the user's name as input and
displays a personalized greeting message */


#include <stdio.h>
int main()

{
	char name[50];

	printf("Please enter a name: ");
	scanf("%s", name);

	printf("Hello Mr. %s! \nPeace be upon you!", name);

	return 0;
}
