#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	a[] = "tesaa";
	char	b[] = "tes";

	printf("ft_strcmp = %d\n", ft_strcmp(a, b));
	printf("strcmp = %d\n", strcmp(a, b));
}
