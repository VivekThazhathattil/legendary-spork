#include <stdio.h>

int min(int num1, int num2){
    return num1 < num2 ? num1 : num2;
}

int max(int num1, int num2){
    return num1 > num2 ? num1 : num2;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n, dig, a, b, our_score = -1, opp_score = -1;
        scanf("%d", &n);
		while(n--){
			scanf("%d %d %d", &dig, &a, &b);
			if(dig == 1){
				printf("YES\n");
				our_score = a;
				opp_score = b;
			}
			else if(a == b){
				our_score = a;
				opp_score = b;
				printf("YES\n");
			}
			// dig == 2 cases:
			else{
				if(our_score < 0 || opp_score < 0)
					printf("NO\n");
                else{
                    int min_score = min(our_score, opp_score);
                    int max_score = max(our_score, opp_score);
                    if(min_score <= a && a < max_score){
                        if(our_score == min_score){
                            our_score = a;
                            opp_score = b;
                        }
                        else{
                            our_score = b;
                            opp_score = a;
                        }
                        printf("YES\n");
                    }
                    else if(min_score <= b && b < max_score){
                        if(our_score == min_score){
                            our_score = b;
                            opp_score = a;
                        }
                        else{
                            our_score = a;
                            opp_score = b;
                        }
                        printf("YES\n");
                    }
                    else{
                        our_score = -1;
                        opp_score = -1;
                        printf("NO\n");
                    }
                }
			}
		}
	}
	return 0;
}
