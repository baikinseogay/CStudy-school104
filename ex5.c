#include<stdio.h>
main(){
	
	int i = 1, n, sum = 0;
	scanf("%d", &n);
	
	printf("합을 구할 마지막 수 입력:");
	scanf("%d", &n);
	
	while(i<=n){
		sum += i;
		i++;
	}
	
	printf("1부터 %d까지의 합은 %d 입니다 \n", n, sum);
}
