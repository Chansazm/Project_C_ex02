#include <string.h>

char* my_capitalize(char* param_1)  
{

  size_t len = strlen(param_1);
  size_t i;
//loop across the length of the word
  for (i = 0; i < len; i++) 
  {
    { 
  
            // If first character of a 
            // word is found 
            if (i == 0 ) 
            { 
  
                // If it is in lower-case 
                if (param_1[0] >= 'a' && param_1[i] <= 'z') 
                { 
  
                    // Convert into Upper-case 
                    param_1[i] = (param_1[0] - 'a' + 'A'); 
                } 
            } 
  
            // If apart from first character 
            // Any one is in Upper-case 
            else if (param_1[i] >= 'A' && param_1[i] <= 'Z')  
  
                // Convert into Lower-Case 
                param_1[i] = (param_1[i] + 'a' - 'A');          
        } 
  }
  return param_1; 
}
