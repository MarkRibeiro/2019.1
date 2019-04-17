#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h> 
#include <unistd.h> 

int status;
int cont = 0;
int pid;
	
int main (int argc, char **argv)
{
	if(fork() != 0)
		execv(argv[1], argv);
		
	else
		execv(argv[2], argv);
	printf("oiiiiiiiiii\n");
	return 0;
}
