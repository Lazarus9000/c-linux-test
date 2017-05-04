#include<stdio.h>
/*int main()
{
printf("Hello Jenkins test 2!\n");
return 0;
}*/

int addition(int x, int y)
{
	int result = 0;
	result = x + y;
	return result; 
}

int mandel(float re, float im)
{
	float x = 0, x_new = 0, y = 0;
    int iter = 0;
	int max = 256;
	while(iter < max || x*x+y*y >= 4) {
		x_new = x*x - y*y + re;
		y = 2*x*y + im;
		x = x_new;
		iter++;
		//printf("iteration %d\n", iter);
	}
	
	if(iter <= max) {
		return 1;
	} else {
		return 0;
	}
}