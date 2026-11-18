/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcholakk <fcholakk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:44:39 by fcholakk          #+#    #+#             */
/*   Updated: 2026/11/18 09:12:49 by fcholakk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	push_char(t_line *l, char c)
{
	char	*tmp;

	if (l->len == l->cap)
	{
		tmp = malloc(l->cap * 2 + 1);
		if (!tmp)
			return (0);
		ft_memcpy(tmp, l->data, l->len);
		free(l->data);
		l->data = tmp;
		l->cap *= 2;
	}
	l->data[l->len++] = c;
	return (1);
}

char	*finish_line(t_line *l)
{
	if (l->len == 0)
	{
		free(l->data);
		return (NULL);
	}
	l->data[l->len] = '\0';
	return (l->data);
}
