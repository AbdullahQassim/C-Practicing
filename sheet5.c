/************* sheet5 q1 ***********/

int FindMissedNum (int*arr) //o(n+k)
{
    int freq[101]={0};
    int i,num;

    for(i=0; i<100 ;i++)
    {
        freq[arr[i]]++;
    }

    for(i=0; i<101 ;i++)
    {
        if(freq[i]==0)
        {
            num=i;
            break;
        }
    }
    return num;
}

int FindMissedNum(int* arr) //o(n)
{
    int TotalSum = 100*((100+1)/2); // Sum of all numbers from 1 to 100 OR can sum all element with for loop.
    int sum = 0;
    int num;

    for (int i = 0; i < 100; i++)
    {
        sum = sum + arr[i];
    }

    num = TotalSum - sum;
    return num;
}

/*********************************************************************/
/************* sheet5 q2 ***********/

int FindRepNum (int*arr) //o(n)
{
    int freq[101]={0};
    int i,num=-1;

    for(i=0; i<101 ;i++)
    {
        freq[arr[i]]++;
        if (freq[arr[i]]==2)
        {
            num=arr[i];
            break;
        }
    }
    return num;
}

/*********************************************************************/
/************* sheet5 q3 ***********/

int findSingleNum (int*arr, int size) //o(n)
{
    int result = 0;
    int i;
    for (i = 0; i<size ; i++)
    {
        result = result ^ arr[i];
    }
    return result;
}

/*********************************************************************/
/************* sheet5 q4 ***********/

int findSingleNum_sorted (int*arr, int size) // o(log(n)) -->> binary search algorithm
{
    int middle , start=0 , end=size-1;

    while(start<end)
    {
        middle = (start+end) / 2;
        if (middle % 2 == 0)
        {
            if(arr[middle]==arr[middle+1])
                start=middle+2;
            else
                end=middle;
        }
        else
        {
            if(arr[middle]==arr[middle-1])
                start=middle+1;
            else
                end=middle;
        }
    }
    return arr[start];
}

/*********************************************************************/
/************* sheet5 q5 ***********/

int MRN_mononum (int*array, int size, int*number) //o(n+k)
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

int MRN_mononum2 (int*array, int size, int*number) //o(n)
{
    int fixed[10]={0};
    int i,max=0,num;

    for(i=0; i<size; i++)
    {
        fixed[array[i]]++;
        if(fixed[array[i]] > max)
        {
            max=fixed[array[i]];
            num=array[i];
        }
    }

    *number=num;
    return max;
}

/*********************************************************************/
/************* sheet5 q6 ***********/

char string_FRC(char*string) //o(n)
{
    int array[256]={0};
    int i,j=0;
    char ch=0;
    for(i=0; string[i] ; i++)
    {
        if(string[i]!=' ')
                array[string[i]]++;

        if (array[string[i]] == 2)
        {
            ch = string[i];
            break;
        }
    }
    return ch;
}

/*********************************************************************/
/************* sheet5 q7 ***********/

void string_copy(char*string,char*copy) //o(n)
{
    int array[256]={0};
    int i,j=0;
    for(i=0; string[i] ; i++)
    {
        if (array[string[i]] == 0)
        {
            copy[j++] = string[i];
            if(string[i]!=' ')
                array[string[i]] = 1;
        }
    }
    copy[j]=0;
}

/*********************************************************************/
/************* sheet5 q8 ***********/

int* arrayBeforeNum(int*arr, int size, int num) //o(2n) which can be o(n)
{
    int i,numIndex;
    for(i=0;i<size;i++) //o(n)
    {
        if(arr[i]==num)
        {
            numIndex=i;
            break;
        }
    }
    int*copy=(int*)malloc(numIndex*sizeof(int));

    if (copy == NULL)
    {
        // Memory allocation failed.
        return 0;
    }

    for(i=0; i<numIndex ;i++) //o(n) in worst case
    {
        copy[i] = arr[i];
    }
    arr_print(copy,numIndex);
    return copy; //don't forget to free in main
}

/*********************************************************************/
/************* sheet5 q9 ***********/

unsigned short swapshort(unsigned short n)
{
    return (n>>8)|(n<<8);
}

unsigned short swapshort2 (unsigned short n)
{
    unsigned char *p = (unsigned char *)&n;
    unsigned char temp = p[0];
    p[0] = p[1];
    p[1] = temp;
    return n;
}