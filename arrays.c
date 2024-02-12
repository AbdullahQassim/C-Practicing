#include <stdio.h>
#include <stdlib.h>

int array_scan(int*arr,int maxSize)
{
    int i,total_num;
    printf("enter total numbers not more than %d\n",maxSize);
    scanf("%d",&total_num);
    if(total_num>maxSize)
	{
		total_num=maxSize;
	}
    for(i=0; i<total_num ; i++)
    {
        printf("Index %d: ", i);
		scanf("%d",&arr[i]);
    }

    return i;
}

void arr_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int arr_sum(int*arr,int size)
{
    int i,sum=0;;
    for(i=0; i<size; i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int arr_search(int*arr,int size,int num)
{
    int i;

    for(i=0; i<size; i++)
    {
        if(arr[i]==num)
        {
            return i;
        }
    }
    return -1;
}

int retlasti (int*arr, int size, int num)
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

void retmaxmin (int*arr, int size, int*pmax, int*pmin, int*pix, int*pin)
{
    int i;
    *pmax = *pmin = arr[0];
    for(i=1; i<size; i++)
    {
        if(arr[i] > *pmax)
        {
            *pmax=arr[i];
            *pix=i;
        }

        else if(arr[i] < *pmin)
        {
            *pmin=arr[i];
            *pin=i;
        }
    }
}



int main()
{

    int size,x;
    int max, min, imax, imin;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[10]={80,70,456,80,0,20,456,98};

    retmaxmin(arr , 10 , &max , &min , &imax , &imin);
    printf("MAX element in the array: %d \n", max);
    printf("Index of max element is: %d \n", imax);
    printf("MIN element in the array: %d \n", min);
    printf("Index of min element is: %d \n", imin);
    printf("\n");


    return 0;
}



#include <stdio.h>
#include <stdlib.h>

void arr_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int * arraybet2num (int n1, int n2)
{
    int index=0;
    int size = abs(n1 - n2)-1;

    int* array = (int*)malloc(size * sizeof(int));

    if (array == NULL)
    {
        // Memory allocation failed
        size = 0;
        return NULL;
    }

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
  return array;
}

int main()
{
while (1)
{
    int n1,n2,size;
    printf("Enter your two numbers: ");
    scanf("%d%d", &n1,&n2);
    size = abs(n1 - n2)-1;

    int*array = arraybet2num (n1,n2);


    printf("\n");

    if (array != NULL)
    {
    printf("The entered array is: ");
    arr_print(array, size);

    free(array);

    }
    else
    {
        printf("Memory allocation failed.\n");
    }
}
    return 0;
}


/***********************************************************************************************/



#include <stdio.h>
#include <stdlib.h>

int isPrime(int n)
{
    int i;
    if (n<2)
    {
        return 0;
    }

    for (i=2; i<n ; i=i+1)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int array_scan(int*arr,int maxSize)
{
    int i,total_num;
    printf("enter total numbers not more than %d\n",maxSize);
    scanf("%d",&total_num);
    for(i=0; i<total_num&&i<maxSize; i++)
    {
        printf("Index %d: ", i);
        scanf("%d",&arr[i]);
    }

    return i;
}

void arr_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

int arrayremovePrime (int*arr,int size)
{
    int i,j=0;

    for(i=0; i<size; i++)
    {
        if(!isPrime(arr[i]))
        {
            arr[j]=arr[i];
            j++;
        }
    }
    return j;
}


int main()
{
    int size,size2;
    int array[100];
    size=array_scan(array,100);
    printf("your array is: ");
    arr_print(array,size);
    printf("\n");
    size2=arrayremovePrime(array,size);
    printf("your new array is: ");
    arr_print(array,size2);
}





/*/////////////////////////////////////////////////////////////////*/

void sortArr(int*arr,int size)
{
    int i,j,temp;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if (arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;

            }
        }
    }
}
int removeRep_sameArr(int*arr,int size)
{
    int i,j=0;
    for(i=0;i<size-1;i++)
    {

            if(arr[i]==arr[i+1])
        {
;

        }
        else
        {

        arr[j]= arr[i];
        j++;
        }

        }

arr[j]=arr[size-1];


    return j;


}

/*/////////////////////////////////////////////////////////////////*/

int MRN_mononum (int*array, int size, int*number)
{
    int fixed[10]={0};
    int i,max=0,num;
		
    for(i=0; i<size; i++)
    {
        fixed[array[i]]++;
    }

    for(i=0; i<10 ;i++)
    {
        if(fixed[i] > max)
        {
            max=fixed[i];
            num=i;
        }
    }
    *number=num;
    return max;
}



int MRN_IntArr (int*array, int size, int*number)
{
    int i,max,min,freqsize,freqMax=0;
    max = min = array[0];
    for(i=1; i<size; i++)
    {
        if(array[i] > max)
        {
            max=array[i];
        }

        else if(array[i] < min)
        {
            min=array[i];
        }
    }
    freqsize=max-min+1;
    int*freq=(int*)calloc(freqsize,sizeof(int));
    for(i=0; i<size; i++)
    {
        freq[array[i]-min]++;
    }
    for(i=0; i<freqsize; i++)
    {
        if(freq[i] > freqMax)
        {
            freqMax=freq[i];
            *number=i+min;
        }
    }
	free(freq);
    return freqMax;
}

int MRN_CharArr (char*array, int size, char*number)
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


int MRN_General (int*array, int size, int*times)
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



int MRN_Sorted (int*arr, int size, int*number)
{
    int i,max,n,c=1,maxc=0;
    for(i=0; i<size-1 ; i++)
    {
        if(arr[i] == arr[i+1])
        {
            c++;
            if(c>maxc)
            {
                maxc=c;
                n=arr[i];
            }
        }
        else
            c=1;
    }
    *number=n;
    return maxc;
}

/*/////////////////////////////////////////////////////////////////*/

int array_RemoveNotSorted (int*array, int size)
{
    int i,max,min,freqsize,j=0;

    max = min = array[0]; // calculate max and min numbers for freq array.
    for(i=1; i<size; i++)
    {
        if(array[i] > max)
        {
            max=array[i];
        }

        else if(array[i] < min)
        {
            min=array[i];
        }
    }

    freqsize=max-min+1; // freq array reservation in memory.
    int*freq=(int*)calloc(freqsize,sizeof(int));

    if (freq == NULL) //check on freq position
    {
        // Memory allocation failed
        return;
    }

    for(i=0; i<size; i++) //fill a freq array with data
    {
        if(freq[array[i]]==0)
        {
            freq[array[i]]=1;
            array[j++]=array[i];
        }
    }
    free(freq);
    return j;
}

int array_binarysearch(int*arr,int size,int num) // *must be sorted*
{
    int i , start=0 , last=size-1 , middle;

    while(start<=last)
    {
    middle=(start+last)/2;
    if(arr[middle]==num)
    {
        return middle;
    }
    else if(arr[middle]>num)
    {
        last=middle-1;
    }
    else
    {
        start=middle+1;
    }
    }
    return -1;
}

int array_binarysearch_recursive(int* arr, int start, int last, int num)
{
    if (last >= start)
    {
        int middle = (start + last) / 2;

        if (arr[middle] == num)
        {
            return middle;
        }
        else if (arr[middle] > num)
        {
            return array_binarysearch_recursive(arr, start, middle - 1, num);
        }
        else
        {
            return array_binarysearch_recursive(arr, middle + 1, last, num);
        }
    }
    return -1;
}

void array_bubblesort(int*arr,int size) //from small to big, if i want the opposite case, change (>) in if to (<).
{
    int i,j,temp,SortedFlag=1;
    for (j=0 ; j<size ; j++)
    {
        SortedFlag=1;
        for (i=0 ; i<size-1-j ; i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
                SortedFlag=0;
            }
        }
        if (SortedFlag==1)
            return;
    }
}

void array_selectionsort(int*arr,int size) //from small to big, if i want the opposite case, change (>) in if to (<).
{
    int i,j,temp,maxindex,lastindex;
    lastindex=size-1;

    for (i=0 ; i<size ; i++)
    {
        maxindex=0;
        for (j=0 ; j<size-i ; j++)
        {
            if(arr[j]>arr[maxindex])
            {
                maxindex=j;
            }
        }
        temp = arr[maxindex];
        arr[maxindex] = arr[lastindex];
        arr[lastindex] = temp;
        lastindex--;
    }
}

void array_countingsort(int*arr,int size)//if you want the opposite case, change (j++) with to (j--) and j=size-1.
{
    int max,min,freqsize,i,j=0;
    max = arr[0];
    min = arr[0];
    for(i=1; i<size; i++) //get max and min of probability
    {
        if(arr[i] > max)
        {
            max=arr[i];
        }

        else if(arr[i] < min)
        {
            min=arr[i];
        }
    }

    freqsize=max-min+1; // freq array reservation in memory.
    int*freq=(int*)calloc(freqsize,sizeof(int));

    if (freq == NULL) //check on freq position
    {
        // Memory allocation failed
        return;
    }

    for(i=0; i<size; i++) //fill a freq array with data
    {
        freq[arr[i]-min]++;
    }

    for(i=0; i<freqsize; i++) //set my goal sorted array
    {
        while(freq[i])
        {
            arr[j++]=i+min;
            freq[i]--;
        }
    }
    free(freq);
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int*arr,int f,int l)
{
    int i,p=arr[l],j=f-1;
    for(i=f; i<=l; i++)
    {
        if(arr[i]<p)
        {
            j++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[j+1],&arr[l]);
    return j+1;

}

void array_QSort(int*arr,int f,int l)
{
    if(f<l)
    {
        int p=partition(arr,f,l);
        array_QSort(arr,f,p-1);
        array_QSort(arr,p+1,l);
    }

}