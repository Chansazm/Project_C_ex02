#include <stdio.h>

int my_string_index(char* param_1, char* param_2) 
{

    int param_1_index = 0;
  
    while (param_1[param_1_index] != '\0'){
    int param_2_index = 0;
  
  if (param_1[param_1_index] == param_2[param_2_index]){

  
    return param_1_index;

  }
    param_1_index += 1;
    }
    return -1;
}
/*
int main(){
   //my_string_index('hi','hello');

    return (0);
}
*/
