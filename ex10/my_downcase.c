

char *my_downcase(char *param_1) {

  size_t len = strlen(param_1);
  size_t i;

  for (i = 0; i < len; i++) {
    if (param_1[i] >= 'A' && param_1[i] <= 'Z') 
    {
      param_1[i] = param_1[i] - 'A' + 'a'; 
      
    }
  }
  return param_1; 
}