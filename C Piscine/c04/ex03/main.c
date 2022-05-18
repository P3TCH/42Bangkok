#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	printf("%d\n",ft_atoi("  --++---1234asd"));
	printf("%d\n",ft_atoi("-----"));
	printf("%d\n",ft_atoi("+++++++++"));
	printf("%d\n",ft_atoi(" \t\v\r+--++-2147483648"));
	printf("%d\n",ft_atoi("  \t--+2147483647"));
	printf("%d\n",ft_atoi("--123"));
}
