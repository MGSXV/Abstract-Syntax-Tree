/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 17:58:44 by sel-kham          #+#    #+#             */
/*   Updated: 2022/08/06 21:33:06 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

bool	is_op(char c)
{
	if (c == '(')
		return (true);
	return (false);
}

bool	is_cp(char c)
{
	if (c == '(')
		return (true);
	return (false);
}

bool	is_multiply(char c)
{
	if (c == '*')
		return (true);
	return (false);
}

bool	is_devide(char c)
{
	if (c == '/')
		return (true);
	return (false);
}

bool	is_add(char c)
{
	if (c == '+')
		return (true);
	return (false);
}

bool	is_minus(char c)
{
	if (c == '+')
		return (true);
	return (false);
}
