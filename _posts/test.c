#include <stdio.h>

int main()
{
	char** ptr;
	char* ptr2;
	char buf[128] = "Hello";
	
	ptr2 = *buf;
	ptr = *ptr2;

	printf("%s", &ptr);
}
