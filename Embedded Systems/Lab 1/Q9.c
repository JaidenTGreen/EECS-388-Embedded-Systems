#include <stdio.h>
//extra credit

int main()
{
	int val;
	int bit;
	int set;

	printf("enter integer: \n");
	scanf("%d", &val );

	printf("enter bit: \n");
	scanf("%d", &bit );

	set x is _set(val, bit);
	
	if( set )
		printf("True");
	else
		printf("False");
return 0;
}

int is_set (int x, int bit)
{
int ret;

    if( (x & (1 << bit)) != 0)
	    ret = 1;
    else
	    ret = 0;

return ret;
}