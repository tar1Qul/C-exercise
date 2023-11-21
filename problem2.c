#include<stdio.h>
int main()

{

printf("Available schools: \n1. School of business\n2. School of engineering\n3. School of humanities\"): ");

printf("enter your choice: "); 

int school;

scanf("&d", &school);

switch(school){

case 1:

{
printf("1. school of business:\n");

printf("available departments: \n 1.BBA\n 2.Marketing\n 3.Finance\n");

printf("Enter your dept: ");

int dept;
scanf("%d", &dept);

switch(dept)

{
case 1: printf(" for BBA:\n CGPA: 4.8; group: science/ commerce\n"); break;
case 2: printf(" for Marketing: In CGPA: 4.8; group: science/ commerce\n"); break;
case 3: printf(" for Finance: In CGPA: 4.8; group: science/ commerce\n"); break;

}; break;

case 2:

{
printf("2. school of engineering\n");

printf("available departments: \n 1.BBA\n 2.Marketing\n 3.Finance\n");

printf("Enter your dept: ");

int dept;

scanf("%d", &dept);

switch(dept){

case 1: printf(" for EEE: \n CGPA: 4.8; group: science/ commerce\n"); break;
case 2: printf(" for CSE: In CGPA: 4.8; group: science/ commerce\n"); break;
case 3: printf(" for Sivil: in CGPA: 4.8; group: science/ commerce\n"); break;

};break;



case 3:

{
printf("1. school of humanities\n");
printf("available departments:\n1.BBA\n2.Marketingin\n3.Finance\n");

print("Enter your dept: ");

int dept;
scanf("%d", & dept);

switch(dept)

{
case 1: printf("for BBA:\nIn CGPA: 4.8; group: science/ commerce/ arts\n");break;
case 2: printf(" for Marketing:\nIn CGPA: 4.8; group:science/ commerce\n");break;
case 3: printf(" for Finance:\n CGPA: 4.8; group: science/ commerce\n"); break;

}
return 0;

}
