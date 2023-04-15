******************************
/* DESCRIPCIÓN/
 * Itera la lista ’lst’ y aplica la función ’f’ en el contenido de cada nodo. lst: un puntero al primer nodo. f: un puntero a la función que utilizará cada nodo.
 * VALOR DEVUELTO
 * NADA.*/
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}