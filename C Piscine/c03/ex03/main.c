#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);

int main(){
	char a[100] = "efghijk";
	char b[100] = "abcd";
	
	char c[100] = "efghijk";
	char d[100] = "abcd";

	printf("strcat return = %s\n",strncat(b,a,4));
	printf("ft_strcat return = %s\n",ft_strncat(d,c,4));
	printf("\n");
	printf("in b = %s\n", b);
	printf("in d = %s\n", d);
}
