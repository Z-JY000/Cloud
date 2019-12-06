#include <stdio.h>
#include <stdlib.h>
int main()
{
	int count=0;
	printf("please print the sentence:");
	while (getchar() != '\n'){
		count++;
	}
	printf("the sum is %d\n", count);
	system("pause");
	return 0;
}
