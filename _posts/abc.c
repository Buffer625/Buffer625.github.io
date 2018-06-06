#include <stdio.h>
int z = 5;

void f(int x, int *y)
{
	*y = 3;
	int z;
	z =+ *y;

	printf("(x,*y,z)=(%d,%d,%d)\n", x, *y, z);

	x = 2;
	z =+ x;
	printf("(x, *y,z)=%d %d %d \n", x, *y, z);

}
// 566 288
int main()
{
	f(z, &z);
}
