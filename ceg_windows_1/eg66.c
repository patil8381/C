#include<stdio.h>
int main()
{
char m;
printf("Enter a charater : ");
scanf("%c",&m);

switch(m)
{
case 'A' :
case 'a' :
case 'e' :
case 'E' :
case 'i' :
case 'I' :
case 'o' : 
case 'O' :
case 'u' :
case 'U' :
printf("%c is a vowel\n",m);
break;
default :
printf("%c is not a vowel\n",m);
}
return 0;
}