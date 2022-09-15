#include<stdio.h>
main()
{
	int i, j, n;
	printf("출력할 행 입력:");
	scanf("%d", &n);
	
	for(i=1; i<=5; i++)
	{
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}
}

