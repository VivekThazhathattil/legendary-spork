#include <stdio.h>
#include <stdlib.h>

int main(){
  int n, k;
  scanf("%d %d", &n, &k);
  int* turns_left = (int*) malloc(sizeof(int) * n);
  const int max_turns = 5;
  int i;
  for(i = 0; i < n; ++i){
    int num_turns_so_far;
    scanf("%d", &num_turns_so_far);
    turns_left[i] = max_turns - num_turns_so_far < 0 ? 0 : 5 - num_turns_so_far;
  }
  int count_valid_players = 0;
  for(i = 0; i < n; ++i){
    if(turns_left[i] >= k){
      ++count_valid_players;
    }
  }
  int num_teams_possible = count_valid_players / 3;
  printf("%d\n", num_teams_possible);
  free(turns_left);
  return 0;
}
