/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:13:27 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/26 19:05:41 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *s)
{
	char	*p;

	p = s;
	while (*p)
		p++;
	return (p - s);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;
	char	*p;

	len = ft_strlen(src) + 1;
	dest = malloc(sizeof * dest * len);
	if (dest == NULL)
		return (NULL);
	p = dest;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}
