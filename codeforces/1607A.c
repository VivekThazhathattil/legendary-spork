#include <stdio.h>

int get_abs(int num){
  if(num < 0){
    return -num;
  }
  return num;
}

int main(){
  int n;
  scanf("%d", &n);
  while(n--){
    int i, aa[26], time_taken = 0;
    char a[27], word[52];
    scanf("%s", a);

    for(i = 0; i < 26; ++i){
      aa[i] = 0;
    }

    for(i = 0; a[i] != '\0'; ++i){
      aa[a[i] - 'a'] = i;
    }

    scanf("%s", word);
    for(i = 1; word[i] != '\0'; ++i){
      time_taken += get_abs(aa[word[i] - 'a'] - aa[word[i-1] - 'a']);
    }
    printf("%d\n", time_taken);
  }
  return 0;
}
