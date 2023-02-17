#include<stdio.h>
#include<conio.h>
void main()
{
	int a=30,b=20,c=40;
	int big;
	big=(a>b&&a>c)?a:(b>c)?b:c;
	printf("%d is the big value",big);
getch();	
}
