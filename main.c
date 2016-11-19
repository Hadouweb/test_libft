#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main()
{
	char byte;
	int fd = open("/dev/ttys2", O_RDWR);
	dprintf(fd, "dsfkjsdhfjkdshfks\n");
	return 0;
}