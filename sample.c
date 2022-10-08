#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
    int a,c,t,b;
    printf("Enter Amount:");
    scanf("%d",&a);
    printf("Number of Tickets:");
    scanf("%d",&t);
    c=t*5;
    printf("Total amount for Tickets=%d",c);
    if(a/5==0)
    {
    if(a>=c)
    {
    printf("Print the Ticket,");
    b=a-c;
    printf("Balance amount=%d",b);
    }
    else if(a<=c)
    {
    printf("Not Enough Amount.");
    }
    else
    {
    printf("Invalid Amount.");
    }
    }
    getch();
}