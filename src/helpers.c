/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 16:09:31 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/29 01:00:21 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

void	print_error(const char *err_msg)
{
	printf("%s\n", err_msg);
	exit(EXIT_FAILURE);
}
