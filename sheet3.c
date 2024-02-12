/************* sheet3 q1 ***********/

int retlasti (int*arr , int size , int num)
{
    int i;
    for(i=(size-1) ; i>=0 ; i--)
    {
       if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}

/*********************************************************************/
/************* sheet3 q2 ***********/

void retmaxmin (int*arr, int size, int*pmax, int*pmin, int*pix, int*pin)
{
    int i,max,min,imax=0,imin=0;
    max = min = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > max)
        {
            max=arr[i];
            imax=i;
        }

        else if(arr[i] < min)
        {
            min=arr[i];
            imin=i;
        }
    }
    *pmax=max;
    *pmin=min;
    *pix=imax;
    *pin=imin;
}

/*********************************************************************/
/************* sheet3 q3 ***********/

char isPower_of_Three(int n)
{
    int ret;
    if (n > 0)
    {
        for ( ; n%3 == 0 ; )
        {
            n = n / 3;
        }

        if (n == 1)
            ret=0;

        else
            ret=1;
    }
    else
        ret=1;

    return ret;
}

/*********************************************************************/
/************* sheet3 q4 ***********/

int arraybet2num (int*array, int n1, int n2)
{
    int index=0;

    if (n1>n2)
    {
        for (int i = n1-1 ; i > n2 ; i--)
        {
        array[index] = i;
        index++;
        }
    }
    else if (n2>n1)
    {
        for (int i = (n1+1) ; i < n2 ; i++)
        {
        array[index] = i;
        index++;
        }
    }
    return index;
}

int main()
{
while (1)
{
    int n1,n2;
    printf("Enter your two numbers: ");
    scanf("%d%d", &n1,&n2);

    int array[200];

    int size = arraybet2num (array,n1,n2);

    printf("The entered array is: ");
    arr_print(array, size);
    printf("\n");
}
    return 0;
}

/*********************************************************************/
/************* sheet3 q5 ***********/

//corner case: this fun returns the 1st most repeated number.

int MRN (int*array, int size, int*times)
{
    int MRN,c,num,i,j;
    int maxc=0;

    for(i=0; i<size; i++)
    {
        num=array[i];
        c=1;
        for (j = i + 1 ; j < size ; j++)
        {
            if (array[j] == num)
                c++;
        }
        if (c > maxc)
        {
            maxc = c;
            MRN = num;
        }
    }
    *times=maxc;
    return MRN;
}

/*********************************************************************/
/************* sheet3 q6 ***********/

void reverseArray(int*arr, int size)
{
    int start=0;
    int end=size-1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

/*********************************************************************/
/************* sheet3 q7 ***********/

void swaparrays(int*array, int s1, int*array2, int s2)
{
    int i, temp;
    for (i = 0 ; i<s1 && i<s2 ; i++)
    {
        temp = array[i];
        array[i] = array2[i];
        array2[i] = temp;
    }
}

/*********************************************************************/
/************* sheet3 q8 ***********/

int LCN (int*array, int size, int num)
{
    int c=0;
    int maxc=0;

    for(int i=0; i<size; i++)
    {
        if (array[i] == num)
        {
            c++;
            if (c > maxc)
                maxc = c;
        }
        else
            c=0;
    }
    return maxc;
}

/*********************************************************************/
/************* sheet3 q9 ***********/

//corner case: this fun returns the 1st LCNum.

void LCNum (int*array, int size, int*resultCounter, int*resultNumber)
{
    int num = array[0];
    int c = 1;
    int LCN = array[0];
    int maxc = -1;
    int i;

    for (i = 1 ; i < size ; i++)
    {
        if (array[i] == num)
        {
            c++;

            if (c > maxc)
            {
                maxc = c;
                LCN = num;
            }
        }
        else
        {
            num = array[i];
            c = 1;
        }
    }

    *resultNumber = LCN;
    *resultCounter = maxc;
}

/*********************************************************************/
/************* sheet3 q10 ***********/

//All corner cases were handled.

int array_merge(int*arr1,int s1,int*arr2,int s2,int*arr3)
{
    int i,k=0;
    if(s1>s2)
    {
        for(i=0 ;  i<s1 ; i++)
        {
            arr3[k++]=arr1[i];
            if(i<s2)
                arr3[k++]=arr2[i];
        }
    }
    else
    {
        for(i=0 ;  i<s2 ; i++)
        {
            arr3[k++]=arr2[i];
            if(i<s1)
                arr3[k++]=arr1[i];
        }
    }
    return k;
}

/*********************************************************************/
/************* sheet3 q11 ***********/

int remove_Sortedarr(int*arr , int size , int*arr2)
{
    int i,j=0;
    for (i=0 ; i<size-1 ; i++)
    {
        if(arr[i] != arr[i+1])
        {
            arr2[j++]=arr[i];
        }
    }
	arr2[j++]=arr[size-1];
    return j;
}

/*********************************************************************/
/************* sheet3 q12 ***********/

void swapafterzeros(int*arr)
{
    int FZI=-1,SZI=-1,i,temp;
    for(i=0 ; SZI==-1 ; i++)
    {
        if(arr[i]==0)
        {
            if(FZI==-1)
                FZI=i;
            else
                SZI=i;
        }
    }
    for(i=1 ; i<4 ; i++)
    {
        temp=arr[FZI+i];
        arr[FZI+i]=arr[SZI+i];
        arr[SZI+i]=temp;
    }
}

/*********************************************************************/
/************* sheet3 q13 ***********/

int big_deff(int*arr, int size, int*sn, int*bn)
{
    int i,result, min=-1, max=-1, ismall=-1;
    for(i=0 ; i<size ;i++)
    {
        if(i==0)
            min=arr[i];
        if(arr[i]<min && arr[i+1]>0 && ((i+1)!=size)) //{10,1,5,3,6,8,7,2,0,0}
        {
            min=arr[i];
            ismall=i;
        }
    }
    for(i=ismall+1; i<size ;i++)
    {
        if(arr[i]>max && arr[i]>min)
        {
            max=arr[i];
        }
    }
    result=max-min;
    *bn=max;
    *sn=min;
    return result;
}

/*********************************************************************/
/************* sheet3 q14 ***********/ 

int MRN_CharArr (int*array, int size, int*number)
{
    int counter[256]={0};
    int i,max=0,num;
    for(i=0; i<size; i++)
    {
        counter[array[i]]++;
    }
    for(i=0; i<256; i++)
    {
        if(counter[i] > max)
        {
            max=counter[i];
            num=i;
        }
    }
    *number=num;
    return max;
}

/*********************************************************************/
/************* sheet3 q15 ***********/

void swap_pointers (int**p1,int**p2)
{
    int*temp=*p1;
    *p1=*p2;
    *p2=temp;
}
int main()
{
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int*p1=&n1;
    int*p2=&n2;

    printf("Before swapping:\n");
    printf("address of ptr1: %d\n", p1);
    printf("Value at ptr1: %d\n", *p1);
    printf("address of ptr2: %d\n", p2);
    printf("Value at ptr2: %d\n", *p2);

    swap_pointers(&p1 , &p2);

    printf("\nAfter swapping:\n");
    printf("address of ptr1: %d\n", p1);
    printf("Value at ptr1: %d\n", *p1);
    printf("address of ptr2: %d\n", p2);
    printf("Value at ptr2: %d\n", *p2);

    return 0;
}

/*********************************************************************/
/************* sheet3 q16 ***********/

int fabo_r(int n)
{
    if(n<2)
    {
        return n;
    }
    return fabo_r(n-1)+fabo_r(n-2);
}

int set_fibonacci(int*arr , int size , int num)
{
    int i,result;
    arr[0]=0 , arr[1]=1;
    for(i=2 ; i<size ; i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    result=arr[num-1];
    return result;
}

int main()
{
while(1)
{
int array[100]={0};
int num;
printf("Enter your desired term\n");
scanf("%d",&num);
int result = set_fibonacci(array,20,num);
arr_print(array,20);
printf("the %d'th term is equal %d\n",num,result);
}
}
/*********************************************************************/
/************* sheet3 q17 ***********/

#include <stdio.h>
#include <stdlib.h>

int MRN(void)
{
    char c0=0, c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, c7=0, c8=0, c9=0, i;
    int num;
    char maxCount = 1;
    char MRNum=-1;

    for (i=0 ; i<10 ; i++)
    {
        scanf("%d", &num);

        if ((num<0) || (num>9))
            return -1;

        switch (num)
        {
            case 0: c0++; break;
            case 1: c1++; break;
            case 2: c2++; break;
            case 3: c3++; break;
            case 4: c4++; break;
            case 5: c5++; break;
            case 6: c6++; break;
            case 7: c7++; break;
            case 8: c8++; break;
            case 9: c9++; break;
        }
    }
	
    if (c0 > maxCount) { maxCount = c0; MRNum = 0; }
    if (c1 > maxCount) { maxCount = c1; MRNum = 1; }
    if (c2 > maxCount) { maxCount = c2; MRNum = 2; }
    if (c3 > maxCount) { maxCount = c3; MRNum = 3; }
    if (c4 > maxCount) { maxCount = c4; MRNum = 4; }
    if (c5 > maxCount) { maxCount = c5; MRNum = 5; }
    if (c6 > maxCount) { maxCount = c6; MRNum = 6; }
    if (c7 > maxCount) { maxCount = c7; MRNum = 7; }
    if (c8 > maxCount) { maxCount = c8; MRNum = 8; }
    if (c9 > maxCount) { maxCount = c9; MRNum = 9; }

    return MRNum;
}

int main()
{
    int num;
    num = MRN();

    if (num != -1)
    {
        printf("The most repeated number is: %d\n", num);
    }
    else
    {
        printf("Invalid input OR there are no repeated number\n");
    }

    return 0;
}