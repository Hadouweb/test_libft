#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

int main()
{
	char byte;
	int fd = open("/dev/ttys001", O_RDWR);
	dprintf(fd, "dsfkjsdhfjkdshfks\n");
	ft_putstr("lol \n");

	return 0;
}