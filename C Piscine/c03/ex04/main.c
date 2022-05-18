#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char	a[100] = "Hello World";
	char	b[100] = "or";

	char	c[100] = "Hello World";
	char	d[100] = "or";

	printf("%s\n",strstr(a,b));
	printf("%s\n",a);
	printf("\n");
	printf("%s\n",ft_strstr(c,d));
	printf("%s\n",c);
}
