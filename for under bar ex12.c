#include <stdio.h>
main()
{
	int num = 1, sum = 0;
	for(;;){
		sum = sum + sum;
		printf("%d������ ��: %d\n", num, sum);
		num++;
		
		if(num>5)
			break;
	}
}
