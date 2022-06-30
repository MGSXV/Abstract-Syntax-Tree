/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:19:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/30 18:12:39 by sel-kham         ###   ########.fr       */
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

void	*get_next_token(t_interpreter *intrp)
{
	char	*problem;
	t_token	*token;
	char	current_char;

	problem = intrp->problem;
	current_char = intrp->problem[intrp->index];
	if ((unsigned long) intrp->index > strlen(problem) - 1)
	{
		token = init_token(EOL, NULL);
		return (token);
	}
	else if (isdigit(current_char))
	{
		token = init_token(INT, &current_char);
		intrp->index++;
		return (token);
	}
	else if (current_char == '+')
	{
		token = init_token(PLUS, &current_char);
		intrp->index++;
		return (token);
	}
	else
		print_error("Error parsing");
	return (NULL);
}
