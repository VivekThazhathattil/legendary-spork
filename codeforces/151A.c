#include <stdio.h>

int minimum(int n1, int n2){
  if(n1 < n2){
    return n1;
  }
  return n2;
}

int main(){
  int num_friends, num_bottles, 
      millilitres, num_limes, num_slices, salt_in_grams;

  int req_millilitres_per_friend, req_num_slice_per_friend, req_gram_salt_per_friend;

    req_num_slice_per_friend = 1;

  scanf("%d %d %d %d %d %d %d %d", &num_friends, &num_bottles, 
      &millilitres, &num_limes, &num_slices, 
      &salt_in_grams, &req_millilitres_per_friend, 
      &req_gram_salt_per_friend);

  int total_millilitres = num_bottles * millilitres;
  int constraint1 = total_millilitres/(req_millilitres_per_friend * num_friends);
  int constraint2 = (num_limes * num_slices) / (num_friends * req_num_slice_per_friend);
  int constraint3 = (salt_in_grams) / (num_friends * req_gram_salt_per_friend);
  //printf("%d,%d,%d\n", constraint1, constraint2, constraint3);
  printf("%d\n", minimum(
        minimum(constraint1, constraint2),
        constraint3));
  return 0;
}
