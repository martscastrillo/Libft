#include <stdio.h>
#include <string.h>


int	ft_countwords(char const *s, char c);
char **ft_split(char const *s, char c);
int main(void)
{
	char **arrayresult;
	arrayresult = ft_split("Hello!", ' ');
	int i = 0;
	while (arrayresult[i] !='\0')
	{
		printf("%s\n", arrayresult[i]);
		i++;
	}
	// char **arrayresult2;
	// arrayresult2 = ft_split("hello!", ' ');
	// int j = 0;
	// while (arrayresult2[j] !='\0')
	// {
	// 	printf("%s\n", arrayresult2[j]);
	// 	j++;
	// }
	// char **arrayresult3;
	// arrayresult3 = ft_split("split th||th", '|');
	// int o = 0;
	// while (arrayresult3[o] !='\0')
	// {
	// 	printf("%s\n", arrayresult3[o]);
	// 	o++;
	// }
}
