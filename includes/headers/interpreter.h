/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:26:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/28 18:02:54 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERPRETER_H
# define INTERPRETER_H

#include "abstract_syntax_tree.h"

typedef struct s_interpreter
{
	char	*problem;
	int		index;
	t_token	*current_token;
}	t_interpreter;


#endif