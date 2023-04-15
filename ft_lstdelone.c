
/* ************************************************************************** */
/* DESCRIPCIÓN/
 * Toma como parámetro un nodo ’lst’ y libera la memoria del contenido
 * utilizando la función ’del’ dada como parámetro, además de libera
 * el nodo. La memoria de ’next’ no debe liberarse.
 * lst: el nodo a liberar.
 * del: un puntero a la función utilizada para liberar
 * el contenido del nodo.
 * VALOR DEVUELTO
 * NADA*/
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    del(lst->content);
	free(lst);
	lst = NULL;
}