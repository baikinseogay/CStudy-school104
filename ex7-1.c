#include<stdio.h>
main()
{
	int dan, i = 9;
	printf("¸î´Ü?");
	scanf("%d", &dan);
	
	while (i>=1){
		printf("%d * %d = %d\n",dan, i, dan*i );
		i--;
	}
}
