#include<stdio.h>
void main()
{
       int n,j,sum=0;
       clrscr();
       printf("Enter the number : ");
       scanf("%d",&n);
       for(j=1;j<=n;j++)
           {
              printf("%d ",j);
              sum=sum+j;
           }
              printf("\nSum of  %d is : %d ",n,sum);
              getch();
}
