/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:06:34 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/28 18:01:04 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

void	print_token(t_token token)
{
	printf("Token(%d, %s);\n", token.e_type, token.value);
}

t_token	*init_token(int type, char *value)
{
	t_token	*token;

	token = malloc(sizeof(t_token));
	if (!token)
		return (NULL);
	token->e_type = type;
	token->value = value;
	return (token);
}
