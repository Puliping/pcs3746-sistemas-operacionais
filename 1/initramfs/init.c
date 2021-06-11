#include "hello_world.h"
#include "last_scno.h"
#include "stack.h"
#include "cfs.h"

#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mount.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#define len(_arr) ((int)((&_arr)[1] - _arr))


static const char * const programs[] = { "/matrix_multiplication", "/read_files", "/simple_arithmetic" };

void panic(const char *msg) {

	fprintf(stderr, "%s: %s (errno = %d)\n", msg, strerror(errno), errno);
	exit(-1);

}

int main(){

	printf("Forking to run programs \n");

	for (int i = 0; i < len(programs); i++) {

		const char *path = programs[i];
		pid_t pid = fork();
		
    	if (pid == -1) {	
			panic("fork");
		
		}else {

			printf("Starting %s (pid = %d)\n", path, pid);
			execl(path, path, (char *)NULL);
			panic("execl");
		
		}
	}

	cfs();
	printf("init finished\n");

	for (;;)
		sleep(1000);

	return 0;
}