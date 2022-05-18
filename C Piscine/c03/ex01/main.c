#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	char	a[] = "Asda";
	char	b[10] = "Asdab";
	
	printf("ft_strcmp = %d\n", ft_strncmp(a, b, 5));
	printf("strncmp2 = %d\n", strncmp(a, b, 5));
}
