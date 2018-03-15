#include<stdio.h>
int main()
{
int i, prime,upper,lower, n;
printf(" enter the lower limit : ");
scanf("%d", &lower);
printf("\n enter the upper limit : ");
scanf("%d", &upper);
printf("\n the prime numbers are : ");

for(n=lower+1; n<upper; n++)
{
prime = 1;
for(i=2; i<n/2; i++)

if(n%i == 0)
{
prime = 0;
break;
}

if(prime)

printf("\t%d", n);

    
}
}
