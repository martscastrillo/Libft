#include <stdio.h>
#include <string.h> 
int	ft_lstsize(t_list *lst);
	
int main (void)
{
	t_list  *old_nodo;
	t_list  *new_nodo;
	old_nodo = ft_lstnew("world");
	new_nodo = ft_lstnew("hello");
	ft_lstadd_front(&old_nodo, new_nodo);
	printf("%d", ft_lstsize(new_nodo));
}