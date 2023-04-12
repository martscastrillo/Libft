#include <stdio.h>
#include <string.h> 
t_list	*ft_lstnew(void *content);
	
int main(void)
{
	t_list *ptr;
	ptr = ft_lstnew("hola");
	printf("%s", ptr->content);
}