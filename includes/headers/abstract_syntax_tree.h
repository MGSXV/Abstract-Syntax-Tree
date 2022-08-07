/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   abstract_syntax_tree.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 15:48:00 by sel-kham          #+#    #+#             */
/*   Updated: 2022/08/06 23:00:32 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ABSTRACT_SYNTAX_TREE_H
# define ABSTRACT_SYNTAX_TREE_H

# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<stdbool.h>
# include<ctype.h>
# include<readline/readline.h>
# include<readline/history.h>
# include "stack.h"
# include "parser.h"

void	print_error(const char *err_msg);
void	print_prompt(const char *prmpt);
int		ft_atoi(const char *str);

// Parenthesies
bool	is_op(char c);
bool	is_cp(char c);
// Operations
bool	is_multiply(char c);
bool	is_devide(char c);
bool	is_add(char c);
bool	is_minus(char c);

#endif