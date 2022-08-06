/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:19:27 by sel-kham          #+#    #+#             */
/*   Updated: 2022/08/06 21:36:52 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

typedef struct s_list
{
	int				num;
	struct s_list	*next;
}	t_list;

t_list	*new_node(int content);
void	push(t_list **lst, t_list *new_elem);
void	pop(t_list **lst);
void    print_stack(t_list *lst);

#endif