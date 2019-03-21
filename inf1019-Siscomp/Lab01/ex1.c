#include<stdio.h>
#include <sys/types.h> 
#include <sys/wait.h> 
#include <unistd.h> 

int status;
int cont = 0;
	
int main ()
{	
	if(fork() != 0)
	{
		for(; cont<100 ; cont++)
		{
			printf("(P)cont: %d\tpid: %d\tpid do meu pai: %d\n", cont, getpid(), getppid());
			sleep(1);
		}
		printf("Processo pai vai finalizar\n");
		waitpid(-1, &status, 0);
	}

	else
	{
		if(fork() !=0)
		{
			printf("Filho foi criado\n");
			for(cont=100; cont<200 ; cont++)
			{
				printf("(F)cont: %d\tpid: %d\tpid do meu pai: %d\n", cont, getpid(), getppid());
				sleep(2);
			}
			printf("Processo Filho vai finalizar\n");
			waitpid(-1, &status, 0);
		}

		else
		{
			printf("Neto foi criado\n");
			for(cont=200; cont<300 ; cont++)
			{
				printf("(N)cont: %d\tpid: %d\tpid do meu pai: %d\n", cont, getpid(), getppid());
				sleep(3);
			}
		}
	}
		return 0;
}
