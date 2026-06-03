//week5-5b (SOIT108_Advance_012)
#include <stdio.h>
int main()
{
	int K;
	scanf("%d", &K);
	//1+2+...+K > K, tell K
	int total = 0;
	for (int i=1; i<=1000; i++){
		total += i;
		if (total > K){
			printf("%d", i);
			break;
		}
	}
}
