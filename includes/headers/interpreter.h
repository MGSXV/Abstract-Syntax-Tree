/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interpreter.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:26:43 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/30 23:15:55 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERPRETER_H
# define INTERPRETER_H

# include "abstract_syntax_tree.h"

typedef struct s_interpreter
{
	char	*problem;
	int		index;
	t_token	*current_token;
}	t_interpreter;

t_interpreter	*init_interpreter(char *eq);
t_token			*get_next_token(t_interpreter *intrp);
bool			check_token(int token_code, t_token *token);
int				calculate(char *problem);

#endif