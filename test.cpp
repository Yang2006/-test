#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int main()
	srand(time(NULL));
	a=(rand()%100)+1;
	b=0;
	c=0;
	while(a!=b)
	{
		c=c+1
    	printf("%d. 1 - 100 =>", c);
    	scanf("%d", &b);
    	if(b>a) printf("Too Big!\n");
    	if(b<a) printf("Too Small!\n");
 	}
 	printf("Bingo! You Spend %d times.\n", c);
 	return 0;
}
