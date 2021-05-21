#define _GNU_SOURCE
#include <unistd.h>
#include <sys/syscall.h>

#define __NR_LAST_SCNO 404

long last_scno()
{
	return syscall(__NR_LAST_SCNO);
}