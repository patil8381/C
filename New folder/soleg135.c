#include<stdio.h>
void to_lower_case(char *p)
{
if(*p>=97 && *p<=122)
{
*p=*p-32;
}
p++;
while(*p!='\0')
{
if(*p>=65 && *p<=90)
{
*p=*p+32;
}
p++;
}
}
int main()
{
char a[51];
printf("Enter a string : ");
scanf("%s",a);
printf("String in a is (%s)\n",a);
to_lower_case(a);
printf("After lower case, string in array a is (%s)\n",a);
return 0;
}