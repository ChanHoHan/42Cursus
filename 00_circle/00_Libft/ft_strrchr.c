/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chhan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/25 17:54:54 by chhan             #+#    #+#             */
/*   Updated: 2020/12/31 11:42:40 by chan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		;
	while (i != -1 && s[i] != (char)c)
		i--;
	if (i != -1)
		return ((char *)s + i);
	return (NULL);
}