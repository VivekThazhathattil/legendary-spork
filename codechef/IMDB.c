#include <stdio.h>

int main(void){
	int t;
	scanf("%d", &t);
	while(t--){
		long long int numMovies, diskSpace;
		scanf("%lld %lld", &numMovies, &diskSpace);
		int maxRating = -1;
		for(long long int i = 0; i < numMovies; ++i){
			long long int movieSize, movieRating;
			scanf("%lld %lld", &movieSize, &movieRating);
			if(movieSize <= diskSpace)
				if(movieRating > maxRating)
					maxRating = movieRating;
		}
		printf("%lld\n", maxRating);
	}
	return 0;
}
