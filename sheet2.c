/************* sheet2 q1 ***********/
#include <stdio.h>
#include <stdlib.h>

void circle_data (int r)
{
    double a,c;
    a=(22.0/7)*r*r;
    c=(22.0/7)*2*r;
    printf("Area = %.3f    Circumference=%.3f\n",a,c);
    printf("/************************************/\n");
}

int main()
{
    while(1)
    {
        int r;
        scanf("%d",&r);
        circle_data(r);
    }
	return 0;
}
/********************************************************************************************************/
/************* sheet2 q2 ***********/
#include <stdio.h>
#include <stdlib.h>


void character (int x, char c)
{

    if ((x%2) == 0)
        printf("char is %c\n",c);

    else
    {
        if(c>='A' && c<='Z')
        {
            c = c + ('a'-'A');
            printf("char is  %c\n",c);
        }
        else if(c>='a' && c<='z')
        {
            c = c - ('a'-'A');
            printf("char is %c\n",c);
        }
        else
        {
            printf("enter right char\n");
        }
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int x;
        char c;
        printf("enter the number then the character: ");
        fflush(stdin);
        scanf("%d%c",&x,&c);
        character(x,c);
    }
    return 0;
}
/********************************************************************************************************/
/************* sheet2 q3 ***********/
#include <stdio.h>
#include <stdlib.h>

int reverse_d (int x)
{
    int reversed=0 , rem;

    while (x!=0)
    {
     rem=x%10;
     reversed = reversed*10 + rem;
     x=x/10;
    }
    return reversed;
}

int main()
{
    while(1)
    {
        int x;
        printf("enter your number: ");
        scanf("%d",&x);
        reverse_d(x);
        printf("reversed number of %d is %d \n",x,reverse_d(x));
        printf("\n");
    }
    return 0;
}
/********************************************************************************************************/
/************* sheet2 q4 ***********/
#include <stdio.h>
#include <stdlib.h>

int ones (unsigned int n)
{
    int c=0,i;
    for( i=31 ; i>=0 ; i=i-1 )
    {
        if((n>>i)&1)
            c=c+1;
    }
    return c;
}

int main()
{
    while(1)
    {
        unsigned int n;
        printf("Enter an +ve integer: ");
        scanf("%d",&n);
        ones(n);
        printf("ones = %d",ones(n));
        printf("\n");
    }
    return 0;
}
/********************************************************************************************************/
/************* sheet2 q5 ***********/
#include <stdio.h>
#include <stdlib.h>

void binary (int x)
{
    int i,flag=0;
    for ( i=(sizeof(x)*8)-1 ; i>=0 ; i-- )
    {
        if((x>>i)&1)
        {
            printf("1");
            flag=1;
        }
        else
        {
            if(flag==1)
            printf("0");
        }
    }
    printf("\n");
}

int main()
{
    while(1)
    {
        int x;
        printf("enter your decimal number: ");
        scanf("%d",&x);
        binary(x);
    }
    return 0;
}
/********************************************************************************************************/
/************* sheet2 q6 ***********/
#include <stdio.h>
#include <stdlib.h>

void binary (int x)
{
    int i,flag=0;
    for ( i=7 ; i>=0 ; i-- )
    {
        if((x>>i)&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");
}

unsigned int reverse8Bits(unsigned char x)
{
    unsigned int reversed = 0;
    int i;
    for (i=7; i>=0 ; i--)
    {
        if ((x>>i)&1)
            reversed = reversed | 1 << (7 - i);
    }
    return reversed;
}

int main()
{
    while(1)
    {
        unsigned int x;
        printf("enter your 8-bit decimal num: ");
        scanf("%d",&x);
        printf("%d binary representation is: ",x);
        binary(x);
        printf("reversed number is: %d\n", reverse8Bits(x));
        printf("%d binary representation is: ",reverse8Bits(x));
        binary(reverse8Bits(x));
        printf("\n");
    }
    return 0;
}
/********************************************************************************************************/
/************* sheet2 q7 ***********/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        //program to calculate the sum from 0 to n

        int n,sum=0;
        printf("enter limit you want: ");
        scanf("%d",&n);
        sum=n*(1+n)/2;
        printf("sum from 0 to %d is: %d \n",n,sum);
    }
	return 0;
}
/********************************************************************************************************/
/************* sheet2 q8 ***********/
#include <stdio.h>
#include <stdlib.h>

int setbit (int n, char bit)
{
    return (n|(1<<bit));
}

int clearbit (int n, char bit)
{
    return (n&(~(1<<bit)));
}

int togglebit (int n, char bit)
{
    return (n^(1<<bit));
}

char readbit (int n, char bit)
{
    return ((n>>bit)&1);
}


int main()
{
    while(1)
    {
        int n,bit,o;
        printf("your number is: ");
        scanf("%d",&n);
        printf("your bit is: ");
        scanf("%d",&bit);
        printf("your operation is: "); //1=setbit , 2=clerabit 3=togglebit 4=readbit
        scanf("%d",&o);
        if(o==1)
        printf("your number after bit %d is set is: %d \n",bit,setbit(n,bit));
        if(o==2)
        printf("your number after bit %d is cleared is: %d \n",bit,clearbit(n,bit));
        if(o==3)
        printf("your number after bit %d is toggled is: %d \n",bit,togglebit(n,bit));
        if(o==4)
        printf("bit %d is: %d \n",bit,readbit(n,bit));
        printf("=*/=/*=/*=/*=/*=/*=/*=/*\n");
    }
}

/********************************************************************************************************/
/************* sheet2 q9 ***********/

//pyramid pattern.

#include <stdio.h>
#include <stdlib.h>

void pyramid_pattern (int lines)
{
    int i,j;
    for( i=1 ; i<=lines ; i=i+1 )
    {
        for ( j=i ; j<lines ; j++ )
        {
            printf(" ");
        }

        for ( j=1 ; j<=i ; j++ )
        {
            printf("*");
        }

        for ( j=1 ; j<i ; j++ )
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    while(1)
    {
        int lines;
        printf("enter number of lines: ");
        scanf("%d",&lines);
        pyramid_pattern(lines);
    }
}

// right increase triangle pattern.

#include <stdio.h>
#include <stdlib.h>

void RIT_pattern (int lines)
{
    int i,j;
    for( i=1 ; i<=lines ; i=i+1 )
    {

        for ( j=1 ; j<=i ; j++ )
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    while(1)
    {
        int lines;
        printf("enter number of lines: ");
        scanf("%d",&lines);
        RIT_pattern(lines);
    }
}

// right decrease triangle pattern.

#include <stdio.h>
#include <stdlib.h>

void RDT_pattern (int lines)
{
    int i,j;
    for( i=1 ; i<=lines ; i=i+1 )
    {

        for ( j=i ; j<=lines ; j++ )
        {
            printf("*");
        }

        printf("\n");
    }
}

int main()
{
    while(1)
    {
        int lines;
        printf("enter number of lines: ");
        scanf("%d",&lines);
        RDT_pattern(lines);
    }
}

// X_pattern.

#include <stdio.h>
#include <stdlib.h>

void X_pattern (int lines)
{
int i,j;
for( i=1 ; i<=lines ; i=i+1 )
{
    for( j=1 ; j<=lines ; j=j+1 )
    {
        if( i==j || i+j == lines+1 )
            printf("*");
        else
            printf(" ");
    }
printf("\n");
}
}


int main()
{
    while(1)
    {
        int lines;
        printf("enter number of lines: ");
        scanf("%d",&lines);
        X_pattern (lines);
    }
}

/********************************************************************************************************/
/************* sheet2 q10 ***********/
#include <stdio.h>
#include <stdlib.h>
int main( )
{
    while (1)
    {
        int n,i;
        int count = 0;
        int flag = 0;
        int max = 0;
        printf("Enter a number: ");
        scanf("%d", &n);

        for( i=0 ; i < (sizeof(n)*8)-1 ; i++ )
        {
            if((n>>i)&1)
            {

                if(count > max)
                    max=count;

                count=0;
                flag=1;
            }

            else if (flag)
                count++;
        }
        printf("Max. number of zeros between two ones is %d\n", max);
        printf("\n");
    }
}

/********************************************************************************************************/
/************* sheet2 q11 ***********/
#include <stdio.h>
#include <stdlib.h>

int xor(int x1 , int x2)
{
    int i,r,max=0,j;
    for( i=x1 ; i<=x2 ; i++ )
    {
        for( j=i ; j<=x2 ; j++ )
        {
            r=i^j;
            printf ("%d ^ %d = %d\n",i,j,r);
            if (r>max)
            max=r;
        }
    }
return max;
}

int main()
{
    while(1)
    {
        int x1,x2;
        printf("enter your two numbers: ");
        scanf("%d%d",&x1,&x2);
        if ( x1>=1 && x1<=x2 && x2<=1000 )
        printf("The maximum value of X1 xor X2 is: %d \n",xor(x1,x2));
        else
            printf("enter numbers in interval\n");
        printf("\n");
    }
}

/********************************************************************************************************/
/************* sheet2 q11 in second way ***********/

#include <stdio.h>
#include <stdlib.h>

void xor(int x1 , int x2)
{
    int  num,msb=0;

    num=x1^x2; //xor calc

    while(num)
    {
        num=num>>1;
        msb=msb+1;
    }

printf("The maximum value of X1 xor X2 is: %d \n",((1<<msb)-1));
}


int main()
{
    while(1)
    {
        int x1,x2;
        printf("enter your two numbers: ");
        scanf("%d%d",&x1,&x2);
        if ( x1>=1 && x1<=x2 && x2<=1000 )
            xor(x1,x2);
        else
            printf("enter numbers in interval\n");
        printf("\n");
    }
}
