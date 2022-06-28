/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:19:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/28 18:08:18 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

t_interpreter	*init_interpreter(char *eq)
{
	t_interpreter	*intrp;

	intrp = malloc(sizeof(t_interpreter));
	if (!intrp)
		return (NULL);
	intrp->problem = eq;
	intrp->index = 0;
	intrp->current_token = NULL;
	return (intrp);
}

void	get_next_token(t_interpreter *intrp)
{
	
}
