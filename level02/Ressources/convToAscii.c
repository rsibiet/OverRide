#include <stdio.h>
#include <strings.h>

/*
How to use convToAscii :
compile with gcc: gcc convToAscii.c
run:
./a.out 0x756e505234376848.0x45414a3561733951.0x377a7143574e6758.0x354a35686e475873.0x48336750664b394d
*/

int main(int ac, char **av)
{
    unsigned char 	s[41];
    char 			tab[16] = "0123456789abcdef";
    char 			ss[41];
    int				i = 2;	 //pos in av[1]
    int				pos = 7; //pos in s
    int				tmp = 0; //pos in tab
    int				len;

    if (ac != 2)
    	return (1);
    bzero(s, 41);
    len = strlen(av[1]);
    while (i < len)
    {
    	while (av[1][i] != tab[tmp])
    		tmp++;
    	if (s[pos] == 0)
    		s[pos] += tmp * 16;
    	else
    	{
    		s[pos] += tmp;
   			pos--;
    		if ((pos + 1) % 8 == 0)
    		{
    			pos += 16;
    			i += 3;
    		}
    	}
    	tmp = 0;
    	i++;
    }
    sprintf(ss, "%s", s);
    printf("\n\n----------------- FLAG -----------------\n\n%s\n\n", ss);
    return (0);
}
