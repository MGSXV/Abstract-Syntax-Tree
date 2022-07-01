/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:19:59 by sel-kham          #+#    #+#             */
/*   Updated: 2022/07/01 00:49:16 by sel-kham         ###   ########.fr       */
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

t_token	*get_next_token(t_interpreter *intrp)
{
	char	*problem;
	t_token	*token;
	char	current_char;

	problem = intrp->problem;
	current_char = intrp->problem[intrp->index];
	if ((unsigned long) intrp->index > strlen(problem) - 1)
	{
		token = init_token(EOL, 0);
		return (token);
	}
	else if (isdigit(current_char))
	{
		token = init_token(INT, current_char);
		intrp->index++;
		return (token);
	}
	else if (current_char == '+')
	{
		token = init_token(PLUS, current_char);
		intrp->index++;
		return (token);
	}
	else
		print_error("Error parsing");
	return (NULL);
}

bool	check_token(int token_code, t_token *token)
{
	if ((int) token->e_type == token_code)
		return (true);
	else
		return (false);
}

int	calculate(char *problem)
{
	t_interpreter	*intrp;
	t_operation		operation;

	intrp = init_interpreter(problem);
	intrp->current_token = get_next_token(intrp);
	if (check_token(INT, intrp->current_token))
		operation.left = atoi(&(intrp->current_token->value));
	else
		print_error("Error parsing\n");
	intrp->current_token = get_next_token(intrp);
	if (check_token(PLUS, intrp->current_token))
		operation.op = intrp->current_token->value;
	else
		print_error("Error parsing\n");
	intrp->current_token = get_next_token(intrp);
	if (check_token(INT, intrp->current_token))
		operation.right = atoi(&(intrp->current_token->value));
	else
		print_error("Error parsing\n");
	return (operation.left + operation.right);
}
