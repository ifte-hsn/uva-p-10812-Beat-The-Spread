/* @JUDGE_ID:  841985  10812  C  "Beat The Spread!" */
#include<stdio.h>
#include<stdlib.h>
int main() {
	long long sum, diff, x, y;
	int tc, i;

	while(scanf("%d",&tc) == 1) {
		for(i=0; i<tc; i++){
			scanf("%lld %lld", &sum, &diff);
			if(sum<diff || (sum+diff)%2 != 0) {
				printf("impossible\n");
			}else{
				x = (sum+diff)/2;
				y = sum - x;

				printf("%lld %lld\n",x,y );
			}
		}
	}

	return 0;
}
