/************* sheet4 q1 ***********/

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

/*********************************************************************/
/************* sheet4 q2 ***********/

int string_mirror(char*str)
{
    int start=0,end=strlen(str)-1;
    while(start<end)
    {
        if(str[start]!=str[end])
            return 0;
        start++;
        end--;
    }
    return 1;
}

/*********************************************************************/
/************* sheet4 q3 ***********/

void string_switch (char*str)
{
    int start = 0;
    int end = strlen(str) - 1;
    char temp;
    while (start < end)
    {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    start = 0;
    int i = 0;
    for (i = 0; i <= strlen(str) ; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            while (start < end)
            {
                temp = str[start];
                str[start] = str[end];
                str[end] = temp;

                start++;
                end--;
            }
            start = i + 1;
        }
    }
}

/*********************************************************************/
/************* sheet4 q4 ***********/

const char* triangle_type(char* str)
{
    int l1 = 0, l2 = 0, l3 = 0;
    int start = 0, end = 0;
    int n = 0;
    int i = 0;

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            end = i - 1;
            while (start <= end)
            {
                n = n * 10 + (str[start] - '0');
                start++;
            }

            if (l1 == 0)
            {
                l1 = n;
            }
            else if (l2 == 0)
            {
                l2 = n;
            }
            else
            {
                l3 = n;
            }

            n = 0;
            start = i + 1;
        }
    }

    // Check triangle type

    if (l1+l2<l3 || l2+l3<l1 || l1+l3<l2)
    {
        return "NOT triangle";
    }
    else if (l1 != l2 && l2 != l3)
    {
        return "Scalene triangle";
    }
    else if (l1 == l2 && l2 == l3)
    {
        return "Equilateral triangle";
    }
    else
    {
        return "Isosceles triangle";
    }
}

int main(void)
{
    char str3[]="15 16 17";

    const char* result=triangle_type(str3);
    printf("Triangle type: %s\n", result);
}

/*********************************************************************/
/************* sheet4 q5 ***********/

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

/*********************************************************************/
/************* sheet4 q6 ***********/

char* Str_WordReplace(char* main, char* find, char* replace)
{
    static char copy[100];
    int i = 0, j = 0, k = 0;
    int correct = 0;
    int start, end;
    
    for (i = 0; main[i]; i++)
    {
        j = 0;
        start = i;
        while (find[j] && find[j] == main[i])
        {
            i++;
            j++;
        }
        if (!find[j])
        {
            correct = 1;
            end = i;
            break;
        }
    }

    if (correct)
    {
        for (i = 0; i < start; i++)
        {
            copy[k++] = main[i];
        }

        for (j = 0; replace[j]; j++)
        {
            copy[k++] = replace[j];
        }

        for (i = end; main[i]; i++)
        {
            copy[k++] = main[i];
        }
        copy[k] = '\0';
    }
    else
        strcpy(copy, main);
        
    return copy;
}



char* Str_WordReplace2(char* main, char* find, char* replace)
{
    static char copy[100];
    int i, j, k = 0;
    int start, end;
    int found = 0;

    for (i = 0; main[i]; i++)
    {
        j = 0;
        start = i;
        while (find[j] && main[i] == find[j])
        {
            i++;
            j++;
        }
        if (find[j] == '\0')
        {
            found = 1;
            end = i;
            for (j = 0; j < start; j++)
            {
                copy[k++] = main[j];
            }
            for (j = 0; replace[j]; j++)
            {
                copy[k++] = replace[j];
            }
            for (j = end; main[j]; j++)
            {
                copy[k++] = main[j];
            }
            copy[k] = '\0';
            break;
        }
    }

    if (found == 0)
    {
        strcpy(copy, main);
    }
    return copy;
}

/*********************************************************************/
/************* sheet4 q7 ***********/

void printWords(char *str)
{
    int n = 0;
    int wordIndex = 0;
    char word[50];
    int i=0,j,k;

    while(str[i])
    {
        if (str[i] != ',')
        {
            word[wordIndex++] = str[i];
        }
        else
        {
            word[wordIndex] = '\0';

            for (j = i + 1; str[j] != ',' && str[j] != '\0'; j++)
            {
                n = n * 10 + (str[j] - '0');
            }

            for (k = 0; k < n; k++)
            {
                printf("%s ", word);
            }

            printf("\n");
            //char word[50]="'\0'";
            wordIndex=0;
            n=0;
            i=j;
        }

        if (str[i] != '\0')
            i++;
    }
}