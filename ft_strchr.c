/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 12:14:57 by mcamilli          #+#    #+#             */
/*   Updated: 2023/04/20 15:34:05 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char	*str1, int ch)
{
	size_t	i;
	char	c;
	size_t	d;
	char	*str;

	str = (char *)str1;
	if ((str[0] == '\0') && (ch == 0))
		return (str);
	d = ft_strlen(str);
	c = ch;
	i = 0;
	if (ch == 0)
		return ((str + d));
	while ((str[i] != c) && (i < d))
		i++;
	if (d != i)
		return ((str + i));
	else
		return (NULL);
}
