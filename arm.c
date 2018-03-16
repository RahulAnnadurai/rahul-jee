#include<stdio.h>
void main()
{
    int n1,a,d,sum=0;
    printf("\nEnter the number:");
    
    scanf("%d",&n1);
    d=a;
    while(a!=0)
    {
        n1=a%10;
        
        sum=sum+n1*n1*n1;
        a=a/10;
    }
   
    if(sum==d)
    {
      
        printf("\n Yes");
        
    }
    
    else
    {
        printf("\n No");
    }
}
