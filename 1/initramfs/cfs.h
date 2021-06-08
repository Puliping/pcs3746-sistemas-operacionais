#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_cfs 405

long cfs()
{
	return syscall(__NR_cfs);
}
