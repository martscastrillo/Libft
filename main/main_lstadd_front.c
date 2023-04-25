#include <stdio.h>
#include <string.h> 

int main (void)
{
	
	t_list 	*lst;
	lst = malloc (sizeof(t_list) * 2);
	t_list	*old_nodo;
	t_list	*new_nodo;
	old_nodo = ft_lstnew("world");
	new_nodo = ft_lstnew("hello");
	ft_lstadd_front(&lst, old_nodo);
	ft_lstadd_front(&lst,new_nodo);
	while (lst->next)
	{
		printf("%s", lst->content);
		lst = lst->next;
	}
}