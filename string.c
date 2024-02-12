void string_print(char*str)
{
	int i;
	if (str==0)
		return;
	for(i=0;str[i]!=0;i++)
	{
		printf("%c",str[i]);
	}
	printf("\n");
}

void string_floaring (char*str) //all upper case to lower case.
{
    int i;
	if (str==0)
		return;
    for(i=0;str[i]!=0;i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]+'a'-'A';
        }
    }
}

int string_length(char*str)
{
	int i;
	for(i=0;str[i];i++);
	return i;
}

void string_reverse(char*str)
{
	int length=string_length(str);
	int start=0 , end=length-1;
	char temp;
	while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int string_compare(char*str,char*str2) //case sensitive
{
    int i;
    for(i=0; str[i] || str2[i] ;i++)
    {
        if(str[i]!=str2[i])
            return 0;
    }
    return 1;
}

int string_compare(char*str,char*str2) //Not case sensitive
{
    int i;
    for(i=0; str[i] || str2[i] ;i++)
    {
        if((str[i]!=str2[i]) && ((str[i]-'a'+'A')!=str2[i]) && ((str[i]-'A'+'a')!=str2[i]))
            return 0;
    }
    return 1;
}

int string_compare(char*s1,char*s2) //Not case sensitive
{
    int i;
    char c1,c2;
    for(i=0; s1[i]||s2[i]; i++)
    {
        if(s1[i]>='A'&&s1[i]<='Z')
        {
            c1=s1[i]+'a'-'A';
        }
        else
        {
            c1=s1[i];
        }
        if(s2[i]>='A'&&s2[i]<='Z')
        {
            c2=s2[i]+'a'-'A';
        }
        else
        {
            c2=s2[i];
        }
        if(c1!=c2)
        {
            return 0;
        }
    }
    return 1;
}

int string_longestWord(char*str) //return number of char in longest word
{
    int i,c=0,maxc=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]!=' ')
        {
            c++;
            if(c>maxc)
                maxc=c;
        }
        else
            c=0;
    }
    return maxc;
}

void string_longestWord(char*str,char*word) //return the longest word itself
{
    int i,c=0,maxc=0,index;
    for(i=0; str[i]; i++)
    {
        if(str[i]!=' ')
        {
            c++;
            if(c>maxc)
            {
                maxc=c;
                index=i;
            }
        }
        else
            c=0;
    }
	
    index=index-maxc+1;
    for (i=0; i<maxc ;i++)
    {
        word[i]=str[index++];
    }
	word[i]=0;
}

void string_scan(char *str,int maxSize)
{
    int i=0;
    fflush(stdin);
    scanf("%c",&str[i]);
    while(str[i]!='\n' && i<maxSize-1)
    {
        i++;
        scanf("%c",&str[i]);
    }
    str[i]=0;
}

void intToString(int n,char*s)
{
    int i=0,flag=0;
    if(n==0)
    {
        s[0]='0';
        s[1]=0;
        return;
    }
    if(n<0)
    {
        n=n*-1;
        s[0]='-';
        i=1;
        flag=1;
    }
    while(n)
    {
        s[i]=n%10+'0';
        i++;
        n=n/10;
    }
    s[i]=0;
    if(flag==1)
        string_reverse(s+1);
    else
        string_reverse(s);
}

int StringToInt (char*str)
{
    int i=0;
    int n=0;
    char flag=0;

    if(str[0]=='-')
    {
        flag=1;
        i=1;
    }

    for(i;str[i];i++)
    {
        if(str[i]>='0' && str[i]<='9')
            n=n*10+(str[i]-'0');
    }

    if (flag==1)
        n=n*(-1);
    return n;
}

int StringToInt2(char*s,int*pnum)
{
    int i;
    int num=0;
    for(i=0; s[i]; i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            num=num*10+s[i]-'0';
        else
        {
            return 0;
        }
    }
    *pnum=num;
    return 1;
}

double StringToNum (char*str)
{
    int i=0;
    double n=0;
    char flag=0;
    char Cflag=0;
    int CIndex=0;

    if(str[0]=='-')
    {
        flag=1;
        i=1;
    }

    for(i;str[i];i++)
    {
        if(str[i]>='0' && str[i]<='9')
            n=n*10+(str[i]-'0');
        if(str[i]=='.' && Cflag==0)
        {
            CIndex=i;
            Cflag=1;
        }
    }

    if(Cflag==1)
    {
        int index=strlen(str)-CIndex-1;
        for(i=0;i<index;i++)
        {
            n=n/10;
        }
    }
	
    if (flag==1)
    {
        n=n*(-1);
    }
    return n;
}

void string_swap (char*str , char*str2)
{
    int temp,i=0;
    while(str[i] && str2[i])
    {
        temp = str[i];
        str[i] = str2[i];
        str2[i++] = temp;
    }
}

char string_FirstReapetedChar(char*str)
{
    char count[256]= {0};
    int i;
    for(i=0; str[i]; i++)
    {
        count[str[i]]++;
        if(count[str[i]]==2 && str[i]!=' ')
            return str[i];
    }
    return-1;
}

void string_copy(char*string,char*copy)
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

void string_copy2(char *string,char*copy)
{
    char array[32] = {0};

    int i, j = 0;
    int byte, bitPos;
    for (i=0 ; string[i] ; i++)
    {
            byte = string[i] / 8;
            bitPos = string[i] % 8;

            if (((array[byte] >> bitPos) & 1) == 0)
            {
                copy[j++] = string[i];
                if (string[i] != ' ')
                    array[byte] = array[byte] | (1 << bitPos);
            }
    }
    copy[j]=0;
}

void FloatToStr(float num, char *s)
{
    if (num < 0)
    {
        s[0] = '-';
        num = num*-1;
        s++;
    }

    int intPart = (int)num;
    intToString(intPart, s);

    while (*s != '\0')
    {
        s++;
    }

    *s++ = '.';

    int floatPart = (int)((num - intPart) * 1000000);
    intToString(floatPart, s);
}