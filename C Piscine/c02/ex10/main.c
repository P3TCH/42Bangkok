#include<stdio.h>
#include <string.h>

int main(){
	char	x[] = "efasdasdcdef";
        char	y[] = "abcd";
	
	unsigned int i;
	i = strlcpy(y,x,sizeof(y));
	printf("%s\n",y);
	printf("i = %d",i);
	
}
