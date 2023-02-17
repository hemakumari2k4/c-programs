//Write a c program to print nth multiplication table
#include<stdio.h>  
#include<conio.h>
void main()  
{  
    int num,i=1;  
    printf("Enter a number:");  
    scanf("%d",&num);  
    printf("\nTable of %d\n",num);  
    while(i<=10)  
    {  
        printf ("%dx%d=%d\n",num,i,(num*i));  
        i++;  
    }  
getch();  
}
