#include <stdio.h>
#include <stdlib.h>

typedef struct LAPTOP_s{
  int price, quality;
} laptop_t;

int comp(const void* n1, const void* n2){
  return (*(laptop_t*)n1).price - 
    (*(laptop_t*)n2).price;
}

int alex_criteria_matches(const laptop_t* m,
    const int n){
  int i;
  for(i = 0; i < n - 1; ++i){
    if((m[i].price < m[i + 1].price) &&
        (m[i].quality > m[i + 1].quality)){
      return 1;
    }
  }
  return 0;
}

int main(){
  int n, i;
  scanf("%d", &n);
  laptop_t* laptops = 
    (laptop_t*) malloc(sizeof(laptop_t) * n);

  for(i = 0; i < n; ++i){
    scanf("%d", &(laptops[i].price));
    scanf("%d", &(laptops[i].quality));
  }

  /* sort in increasing order */
  qsort(laptops, n, sizeof(laptop_t), comp);

  if(alex_criteria_matches(laptops, n)){
    printf("Happy Alex\n");
  }
  else{
    printf("Poor Alex\n");
  }

  free(laptops);
  return 0;
}
