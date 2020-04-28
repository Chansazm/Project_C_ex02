#include <stdio.h>

int my_strlen (char *a)
{
    
    int len;
    //loop until encounter the string terminator '\0'
    for(len=0;a[len]!='\0';len++);
    return len;
    return 0;
}

/*
int main()
{
    //Zambia --> 6
    printf("Zambia has %d characters\n",my_strlen("Zambia"));
    //printf("My is negative : %d  \n", my_is_negative(4));
    return 0;
}

*/