

char *my_upcase(char *param_1) {

  size_t len = strlen(param_1);
  size_t i;

  for (i = 0; i < len; i++) {
    if (param_1[i] >= 'a' && param_1[i] <= 'z') 
    {
      param_1[i] = param_1[i] - 'a' + 'A'; 
      
    }
  }
  return param_1; 
}