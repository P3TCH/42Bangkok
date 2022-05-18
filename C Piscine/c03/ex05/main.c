#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char src1[100] = "fghijk";
	char dest1[100] = "abcde";
	unsigned int re1;

	char src2[100] = "fghijk";
	char dest2[100] = "abcde";
	unsigned int re2;

	re1 = strlcat(dest1,src1,2);
	re2 = ft_strlcat(dest2,src2,2);

	printf("src1 = %s , dest1 = %s , return1 = %d\n",src1, dest1, re1);
	printf("src2 = %s , dest2 = %s , return2 = %d\n",src2, dest2, re2);
}
