/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract_syntax_tree.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:47:49 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/30 21:21:45 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/headers/abstract_syntax_tree.h"

int	main(void)
{
	char	*cmd;

	cmd = NULL;
	while (true)
	{
		cmd = readline("Tokenizer > ");
	}
	
	return (0);
}
