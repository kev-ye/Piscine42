#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data)
{
	t_list *list;
	
	if (!(list = malloc(sizeof(t_list))))
		return (NULL);
	list->data = data;
	list->next = NULL;

	return (list);
}

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
       f(begin_list->data);
       begin_list = begin_list->next;  
    }
}

void ft_list_foreach2(t_list *begin_list, void (*f)(void *)) // Used recursion.
{
    if (!begin_list)
        return ;
    f(begin_list->data);
    ft_list_foreach2(begin_list->next, f);
}

void    f(void *data) // function for print data.
{
    printf("%s\n", data);
}

int main()
{
    t_list *element1 = ft_create_elem("element1");
    t_list *element2 = ft_create_elem("element2");
    t_list *element3 = ft_create_elem("element3");
    t_list *list = NULL;

    list = element1;
    if (element1) // Verify if all of the element are created.
        element1->next = element2;
    if (element2)
        element2->next = element3;
    ft_list_foreach(list, &f);
    return (0);
}