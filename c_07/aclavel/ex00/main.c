#include <stdio.h>

char *ft_strdup(char *src);

int		main(void)
{
	char *string = "je suis le test";
	printf("%s", ft_strdup(string));
	return (0);
}
