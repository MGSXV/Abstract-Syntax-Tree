/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract_syntax_tree.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:47:49 by sel-kham          #+#    #+#             */
/*   Updated: 2022/08/06 22:53:04 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

int	main(void)
{
	char	*cmd;
	t_list	*stack;

	cmd = NULL;
	stack = NULL;
	while (true)
	{
		cmd = readline("RPN Calculator ::> ");
		if (!cmd[0])
			break ;
	}
	print_stack(stack);
	return (EXIT_SUCCESS);
}
