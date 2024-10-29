/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhyokki <jhyokki@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 09:18:15 by jhyokki           #+#    #+#             */
/*   Updated: 2024/09/26 18:26:09 by jhyokki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*p;

	p = str;
	while (*p)
		p++;
	return (p - str);
}

char	*ft_strncat(char *dest, const char *src)
{
	char	*p;

	p = dest;
	while (*p)
		p++;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (dest);
}

int	total_len(char **strs, int size, int sep_len)
{
	int	len;

	len = 0;
	while (size--)
	{
		len += ft_strlen(*strs++);
		if (size > 1)
			len += sep_len;
	}
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		sep_len;
	int		len;
	char	*result;
	int		i;

	sep_len = ft_strlen(sep);
	len = total_len(strs, size, sep_len);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strncat(result, strs[i]);
		if (i < size - 1)
		{
			ft_strncat(result, sep);
		}
		i++;
	}
	return (result);
}
