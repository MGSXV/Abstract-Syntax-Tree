/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-kham <sel-kham@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:28:34 by sel-kham          #+#    #+#             */
/*   Updated: 2022/06/28 18:05:56 by sel-kham         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENIZER_H
# define TOKENIZER_H

typedef struct s_token
{
	enum {
		PLUS,
		INT,
		EOL
	}	e_type;
	char	*value;
}	t_token;

void	print_token(t_token token);
t_token	*init_token(int type, char *value);

#endif