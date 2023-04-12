#include <stdio.h>
#include <string.h> 
t_list *ft_lstlast(t_list *lst);
	
int main (void)
{
	t_list 	*lst;
	lst = malloc (sizeof(t_list) * 2);
	t_list	*old_nodo;
	//t_list	*new_nodo;;
	old_nodo = ft_lstnew("patata");
	old_nodo->next = ft_lstnew("world");
	lst = old_nodo;
	//printf("%s\n", lst->content);
	//printf("%s\n", old_nodo->content);
	//new_nodo = ft_lstnew("hello");
	//ft_lstadd_front(&lst, old_nodo);
	//ft_lstadd_front(&lst,new_nodo);
	printf("%s", ft_lstlast(lst)->content);
}