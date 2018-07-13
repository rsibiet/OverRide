#include <stdio.h>

int 	main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("\nusage: ./a.out Q C\n-> Result: Q ^ C = 18\n\n");
		return (1);
	}
	printf("%c ^ %c = %d\n\n",av[1][0], av[2][0], av[1][0] ^ av[2][0]);
	return (0);
}
