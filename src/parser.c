/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 22:54:31 by sel-kham          #+#    #+#             */
/*   Updated: 2022/08/06 22:58:58 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

void	init_parster(t_parser *parser, char *s)
{
	if (!s)
		return ;
	parser->i = 0;
	parser->c = s[parser->i];
}
