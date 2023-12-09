#include <stdio.h>
#include <stdlib.h>

int main(){
 int n;
 scanf("%d", &n);
 int *arr = (int*) malloc(sizeof(int) * n);

 for(int i = 0; i < n; ++i){
    scanf("%d", &arr[i]);
 }

 int s_pts = 0, d_pts = 0;
 int s_turn = 1;
 int l_idx = 0, r_idx = n - 1;

 while(l_idx < n && r_idx >= 0 && l_idx <= r_idx){
   if(s_turn){
     s_turn = 0;
     s_pts += arr[l_idx] > arr[r_idx] ? arr[l_idx] : arr[r_idx];
     if(arr[l_idx] > arr[r_idx]){
       ++l_idx;
     }
     else{
       --r_idx;
     }
   }
   else{
     s_turn = 1;
     d_pts += arr[l_idx] > arr[r_idx] ? arr[l_idx] : arr[r_idx];
     if(arr[l_idx] > arr[r_idx]){
       ++l_idx;
     }
     else{
       --r_idx;
     }
   }
 }
 free(arr);
 printf("%d %d\n", s_pts, d_pts);
 return 0;
}
