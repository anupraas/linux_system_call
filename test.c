#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <errno.h>
#include <unistd.h>
int main(int argc, char** argv)
{  
	printf("---Testing System Call 'sys_sh_task_info'---\n");
	int pid=atoi(argv[1]);
	long int status = syscall(318, pid, argv[2]); 
	if(status == 0) 
		printf("System Call SUCCESSFULLY executed\n");

	else 
	{
		printf("System call FAILED to execute\n");
		perror("Error ");
		printf("Error No.: %d\n", errno);
	}
	return 0;
}
