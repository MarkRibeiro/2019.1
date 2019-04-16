#include <stdio.h>
#include <unistd.h>
int main (void)
{
	printf("vou parar...\n");
	pause();
	printf("Continuei!\n");
	return 0;
}