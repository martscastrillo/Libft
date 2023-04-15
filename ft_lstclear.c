**************************
/* DESCRIPCIÓN/
Elimina y libera el nodo ’lst’ dado y todos los
consecutivos de ese nodo, utilizando la función
’del’ y free(3).
Al final, el puntero a la lista debe ser NULL.
 * lst: la dirección de un puntero a un nodo.
del: un puntero a función utilizado para eliminar
el contenido de un nodo.
 * VALOR DEVUELTO
 * NADA.*/
void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *aux;

	if (lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
}