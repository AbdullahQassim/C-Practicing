                                                                     //pyramid pattern.

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=(i+1) ; j<lines ; j++ )
        {
            printf(" ");
        }
        for ( j=0 ; j<=i ; j++ )
        {
            printf("*");
        }
        for ( j=0 ; j<i ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}


                                                                  //inverse pyramid pattern.

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i,j;
    for( i=1 ; i<=lines ; i=i+1 )
    {
        for ( j=1 ; j<i ; j++ )
        {
            printf(" ");
        }

        for ( j=i ; j<=lines ; j++ )
        {
            printf("*");
        }

        for ( j=i ; j<lines ; j++ )
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
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}

                                                                   // right half pyramid

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=0 ; j<=i ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}


                                                              // inverted right half pyramid

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=i ; j<lines ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}


                                                                     // left half pyramid

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=(i+1) ; j<lines; j++ )
        {
            printf(" ");
        }
        for ( j=0 ; j<=i ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}

                                                                // inverted left half pyramid

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=0 ; j<i ; j++ )
        {
            printf(" ");
        }
        for ( j=i ; j<lines ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}

                                                                     // Rhombus Pattern 

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=(i+1) ; j<lines ; j++ )
        {
            printf(" ");
        }
        for ( j=0 ; j<lines ; j++ )
        {
            printf("*");
        }

        printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}

                                                                     // Diamond Pattern 

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<(lines-1) ; i++ )
    {
        for ( j=(i+1) ; j<lines ; j++ )
        {
            printf(" ");
        }
        for ( j=0 ; j<=i ; j++ )
        {
            printf("*");
        }
        for ( j=0 ; j<i ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

void rev_pattern (int lines)
{
    int i,j;
    for( i=1 ; i<=lines ; i=i+1 )
    {
        for ( j=1 ; j<i ; j++ )
        {
            printf(" ");
        }

        for ( j=i ; j<=lines ; j++ )
        {
            printf("*");
        }

        for ( j=i ; j<lines ; j++ )
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
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
        rev_pattern(lines);
        printf ("\n");
    }
    return 0;
}

                                                                     // Hourglass Pattern 

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=1 ; i<lines ; i++ )
    {
        for ( j=(i+1) ; j<lines ; j++ )
        {
            printf(" ");
        }
        for ( j=0 ; j<=i ; j++ )
        {
            printf("*");
        }
        for ( j=0 ; j<i ; j++ )
        {
            printf("*");
        }
        printf ("\n");
    }
}

void rev_pattern (int lines)
{
    int i,j;
    for( i=1 ; i<=lines ; i=i+1 )
    {
        for ( j=1 ; j<i ; j++ )
        {
            printf(" ");
        }

        for ( j=i ; j<=lines ; j++ )
        {
            printf("*");
        }

        for ( j=i ; j<lines ; j++ )
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
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        rev_pattern(lines);
        pattern(lines);
        printf ("\n");
    }
    return 0;
}

                                                                     // Hollow Square Pattern

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=0 ; j<lines ; j++ )
        {
            if(i>0 && i<(lines-1) && j<(lines-1) && j>0)
                printf (" ");
            else
                printf ("*");
        }
                printf ("\n");
    }
}


int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);

    }
    return 0;
}

                                                                     // Hollow Full Pyramid Pattern

#include <stdio.h>
#include <stdlib.h>

void pattern (int lines)
{
    int i, j;
    for ( i=0 ; i<lines ; i++ )
    {
        for ( j=i ; j<lines ; j++ )
        {
            printf (" ");
        }
        for ( j=0 ; j<2*i+1 ; j++ )
        {
            if(i==(lines-1) || j==0 || j==2*i )
                printf ("*");
            else
                printf (" ");
        }
    printf ("\n");
    }
}

int main()
{
    while(1)
    {
        unsigned int lines;
        printf("Enter number of lines: ");
        scanf("%d",&lines);
        pattern(lines);
    }
    return 0;
}
