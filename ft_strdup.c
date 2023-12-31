/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 09:32:28 by mcamilli          #+#    #+#             */
/*   Updated: 2023/04/19 18:53:06 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	a;
	size_t	b;
	char	*s2;

	b = ft_strlen(s1) + 1;
	s2 = (char *)ft_calloc(b, sizeof(char));
	if (!s2)
		return (NULL);
	a = ft_strlcpy (s2, s1, b);
	return (s2);
}
