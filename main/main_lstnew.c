#include <stdio.h>
#include <string.h> 
t_list	*ft_lstnew(void *content);
	
int main(void)
{
	t_list *elem;
	char	str [] = "lorem ipsum dolor sit";

		if (!(elem = ft_lstnew(str)))
				ft_print_result("NULL");
		else
		{
			if (!(elem->content))
				ft_print_result("NULL");
			else
			{
				ft_print_result(elem->content);
			}
			if (!(elem->next))
			{
				write(1, "\n", 1);
				ft_print_result("NULL");
			}
		}
}