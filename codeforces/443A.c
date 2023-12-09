#include <stdio.h>

int main(){
  char line[1001];
  int alf[27];
  /* initialize all count of letters to 0 */
  int i;
  for(i = 0; i < 26; ++i){
    alf[i] = 0;
  }
  scanf("%[^\n]s", line);
  int count = 0;
  for(i = 0; line[i] != '\0'; ++i){
    if(line[i] - 'a' >= 0 && 
        line[i] - 'a' < 26 && 
        alf[line[i] - 'a'] == 0){
      alf[line[i] - 'a'] = 1;
      ++count;
    }
  }
  printf("%d\n", count);
  return 0;
}
