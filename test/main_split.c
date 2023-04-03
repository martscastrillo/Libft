#include <stdio.h>
#include <string.h>


int	ft_countwords(char const *s, char c);
char **ft_split(char const *s, char c);
int main(void)
{
	char **arrayresult;
	arrayresult = ft_split("-hola--que--tal", '-');
	int i = 0;
	while (arrayresult[i] !='\0')
	{
		printf("%s\n", arrayresult[i]);
		i++;
	}
	
}
