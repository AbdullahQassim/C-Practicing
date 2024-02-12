/************* sheet1 q1 ***********/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int n1,n2,result,i,temp;
    for (;;)
    {
        result=0;
        printf("enter your two numbers\n");
        scanf("%d%d",&n1,&n2);
        if(n2>n1)
        {
            temp=n1;
            n1=n2;
            n2=temp;
        }
        for(i=n1-1 ; i>n2 ; i=i-1)
        {
            result=result+i;
        }

        printf("sum=%d\n",result);
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
    }
}
/********************************************************************************************************/
/************* sheet1 q2 ***********/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int total,i,n,max,min;
    for (;;)
    {
 printf("how many numbers you will enter?\n");
 scanf("%d",&total);
 max=0;
 min=0;
 for( i=0 ; i<total ; i=i+1 )
 {
     scanf("%d",&n);
     if(i==0)
     {
         min=n;
         max=n;
     }
     if(n>max)
     {
         max=n;
     }
     if (n<min)
     {
         min=n;
     }
 }
        printf("max number=%d     min number=%d\n",max,min);
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
    }
}
/********************************************************************************************************/
/************* sheet1 q3 ***********/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int total,i,n,sum;
    for (;;)
    {
 printf("how many numbers you will enter?\n");
 scanf("%d",&total);
 sum=0;
 for( i=0 ; i<total ; i=i+1 )
 {
     scanf("%d",&n);
     sum=sum+n;
 }
        printf("sum=%d\n",sum);
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
    }
}
/********************************************************************************************************/
/************* sheet1 q4 ***********/
#include <stdio.h>
#include <stdlib.h>

int main ()
{
int x1,x2,i,mul;
while (1)
{
 printf ("enter your 2 num: ");
 scanf("%d%d",&x1,&x2);
 mul=0;
 if((x2<0 && x1<0) || ((x2<0 && x1>0)))
 {
     x1=(x1*-1);
     x2=(x2*-1);
 }
 for( i=0 ; i<x2 ; i++ )
 {
    mul=mul+x1;
 }
 printf("%d\n",mul);
}
return 0;
}

/********************************************************************************************************/
/************* sheet1 q5 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1,n2,reminder;
    for(;;)
    {
        printf("Enter first number :");
        scanf("%d",&n1);
        printf("Enter second number :");
        scanf("%d",&n2);
        reminder=n1-(n1/n2)*n2;
        printf("Remainder = %d\n",reminder);
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    }
}
/********************************************************************************************************/
/************* sheet1 q6 ***********/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int i,base,power,result;
    for (;;)
    {
 printf("enter your two numbers\n");
 scanf("%d%d",&base,&power);
 result=1;
 for( i=0 ; i<power ; i=i+1 )
 {
     result=result*base;
 }
        printf("result=%d\n",result);
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
    }
}
/********************************************************************************************************/
/************* sheet1 q7 ***********/
int fact_r(int n)
{
    if(n<=1)
    {
        return 1;
    }
    printf("n=%d\n",n);
    return n*fact_r(n-1);
}

#include <stdio.h>
#include <stdlib.h>
int main()
{

    unsigned long long n1,factorial,i;
    for(;;)
    {
        factorial=1;
        printf("Enter the number :");
        scanf("%d",&n1);
        for( i=1 ; i<=n1 ; i=i+1)
        {
        factorial=factorial*i;
        }
        printf("Factorial of %d = %llu\n",n1,factorial);
        printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
    }
}
/********************************************************************************************************/
/************* sheet1 q8 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int n,i,x,flag;
    for(;;)
    {
        printf("Enter the number :\n");
        scanf("%d",&n);
        flag=0;
        if(n==0 || n==1)
        {
            printf("%d is not prime number\n",n);
        }
        else
        {
            for (i=2 ; i<=(n/2) && flag==0 ; i=i+1)
            {
                x=n%i;
                if(x==0)
                {
                    flag=1;
                }
            }
            if(flag==1)
            {
                printf("%d is not a prime number\n",n);
            }
            else
            {
                printf("%d is a prime number\n",n);
            }
        }
    }
}
/********************************************************************************************************/
/************* sheet1 q9 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int n,i;
    for(;;)
    {
        printf("Enter the number :\n");
        scanf("%d",&n);

        for (i=0 ; i<=n ; i=i+1)
        {
            if (n==i*i)
            {
                printf("%d is perfect square\n",n);
                break;
            }
        }

        if (n!=(i*i))
        {
            printf("%d is not perfect square\n",n);
        }
    }
}
/********************************************************************************************************/
/************* sheet1 q10 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i;
    for(;;)
    {
        printf("Enter the number :\n");
        scanf("%d",&n);
        i=n;
        if (i > 0)
        {
            for ( ; i%2 == 0 ; )
            {
                i = i / 2;
            }
            if (i == 1)
            {
                printf("%d is a base of 2\n",n);
                printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
            }
            else
            {
                printf("%d is not a base of 2\n",n);
                printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
            }
        }
        else
        {
            printf("Enter a valid positive number\n");
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=\n");
        }
    }
}
/********************************************************************************************************/
/************* sheet1 q11 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,sum,rem;
    for(;;)
    {
        printf("Enter the number :\n");
        scanf("%d",&n);
        sum=0;
        i=n;
        for( ; i!=0 ; i=i/10 )
        {
            rem=i%10;
            sum=sum+rem;
        }
        printf("Sum of digits of a number %d = %d\n",n,sum);
    }
}
/********************************************************************************************************/
/************* sheet1 q12 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,sum=0,close=0;
    for(;;)
    {
        printf("Enter one number\n");
        scanf("%d",&n);
        if (n%2==0)
        {
            sum=sum+n;
            printf("yor summation = %d\n",sum);
        }

        else
        {
            close=close+1;
        }

        if(close==2)
        {
            printf("buy\n");
            break;
        }
    }
    return 0;
}
/********************************************************************************************************/
/************* sheet1 q13 ***********/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,sum,rem,holes;
    for(;;)
    {
        printf("Enter the number :\n");
        scanf("%d",&n);
        i=n;
        sum=0;
        holes=0;
        if (i==0)
        {
            printf("Sum of holes in number 0 = 1\n");
        }
        else
        {
            printf("number %d ==>> ",n);

            for( ; i!=0 ; i=i/10 )
            {
                rem=i%10;

                if (rem==0)
                {
                    holes=1;
                    printf("0 has 1 hole, ");
                }
                else if (rem==1)
                {
                    holes=0;
                    printf("1 has 0 hole, ");
                }
                else if (rem==2)
                {
                    holes=0;
                    printf("2 has 0 hole, ");
                }
                else if (rem==3)
                {
                    holes=0;
                    printf("3 has 0 hole, ");
                }
                else if (rem==4)
                {
                    holes=1;
                    printf("4 has 1 hole, ");
                }
                else if (rem==5)
                {
                    holes=0;
                    printf("5 has 0 hole, ");
                }
                else if (rem==6)
                {
                    holes=1;
                    printf("6 has 1 hole, ");
                }
                else if (rem==7)
                {
                    holes=0;
                    printf("7 has 0 hole, ");
                }
                else if (rem==8)
                {
                    holes=2;
                    printf("8 has 2 holes, ");
                }
                else if (rem==9)
                {
                    holes=1;
                    printf("9 has 1 hole, ");
                }
                sum = holes + sum;
            }
            printf("Sum of of all holes in number = %d\n",sum);
            printf("=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*\n");
        }
    }
}