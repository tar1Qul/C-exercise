#include <stdio.h>
 int main()

 {
  int score;

 printf("Enter the score (in range of 100): ");
 scanf("%d", &score);

 if (score>=0 && score<=100)
    {

 switch (score / 10)

 {
 case 10: printf("Grade: A"); break;
 case 9: printf("Grade: A"); break;
 case 8: printf("Grade: B"); break;
 case 7: printf("Grade: C"); break;
 case 6: printf("Grade: D"); break;
 default: printf("Grade: F");
}
}

else {
printf("Invalid score");
 }

 return 0;


 }


