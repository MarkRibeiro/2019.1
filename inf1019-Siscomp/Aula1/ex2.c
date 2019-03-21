#include<stdio.h>
#include <sys/types.h> //lib fork
#include <sys/wait.h> //lib waitpid
#include <unistd.h> // lib getpid

int status;
int cont = 0;
int pid;
	
int main (int argc, char *argv[], char *envp[])
{
	int i;
	
	if(fork() != 0){
		for(i=0 ; i<100 ; i++){
			cont += 1;
			printf("cont: %d, pid: %d\n", cont, getpid());
		}
		waitpid(-1, &status, 0);
	}else{
		execve("/usr/bin/ls", argv, envp);
	}
	return 0;
}
