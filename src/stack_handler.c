/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:21:00 by sel-kham          #+#    #+#             */
/*   Updated: 2022/08/06 22:49:38 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

t_list	*new_node(int content)
{
	t_list	*new_element;

	new_element = (t_list *) malloc(sizeof(t_list));
	if (!new_element)
		return (NULL);
	new_element->num = content;
	new_element->next = NULL;
	return (new_element);
}

void	push(t_list **lst, t_list *new)
{
	if (!(*lst))
		*lst = new;
	else
		new->next = *lst;
		*lst = new;
}

void	pop(t_list **lst)
{
	t_list	*tmp;

	if (!(*lst))
		return ;
	else
	{
		tmp = *lst;
		*lst = tmp->next;
		free(tmp);
	}
}

void    print_stack(t_list *lst)
{
	t_list	*tmp;
	
	tmp = lst;
	while (tmp)
	{
		printf("%d\n", tmp->num);
		tmp = tmp->next;
	}
}
