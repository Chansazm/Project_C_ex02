#include <stdio.h>
#include <unistd.h>

void my_putstr(char* a) {
    int index;
    
    
    index = 0;
    while
    (a[index] != '\0')
    {
        write (1,&a[index],1);
         index += 1;
    }
    

  
}





/*

int main(){

//abc-->abc
//int a = 0;
//printf("The value of a is %d\n",a);
return 0;

}*/