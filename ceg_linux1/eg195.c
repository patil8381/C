#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
int main()
{
char a[7];
char m;
printf("Enter a String : ");
fgets(a,7,stdin);
a[strlen(a)-1]='\0';
__fpurge(stdin);
printf("Enter a character : ");
m=getchar();
__fpurge(stdin);
printf("\n\n");
printf("content of array (a) is (%s)\n",a);
printf("Number in char m is (%d)\n",m);
return 0;
}
