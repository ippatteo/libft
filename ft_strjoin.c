/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcamilli <mcamilli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 12:41:14 by mcamilli          #+#    #+#             */
/*   Updated: 2023/04/25 12:08:19 by mcamilli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	l1;
	size_t	l2;

	if (!s2 || !s1)
		return (NULL);
	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	s3 = (char *)ft_calloc(l1 + l2 +1, sizeof(char));
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, l1 + 1);
	ft_strlcpy(s3 + l1, s2, l2 + 1);
	return (s3);
}
