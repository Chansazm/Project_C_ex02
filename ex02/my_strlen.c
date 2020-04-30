#include <stdio.h>

int my_strlen (char *a){
    int len;
    
    for (len = 0 ; a[len] != '\0' ; len++)
        ;

    return len;
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