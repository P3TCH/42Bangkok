#include <stdio.h>
#include <string.h>

char *ft_strcat(char *dest, char *src);

int main(){
	char a[100] = "efg";
	char b[100] = "abcd";
	
	char c[100] = "efg";
	char d[100] = "abcd";

	printf("strcat return = %s\n",strcat(b,a));
	printf("ft_strcat return = %s\n",ft_strcat(d,c));
	printf("\n");
	printf("in b = %s\n", b);
	printf("in d = %s\n", d);
}
