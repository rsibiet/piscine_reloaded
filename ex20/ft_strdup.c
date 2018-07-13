/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 18:17:34 by rsibiet           #+#    #+#             */
/*   Updated: 2017/01/28 12:15:16 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	if ((str = (char *)malloc(sizeof(*src) * (i + 1))) == NULL)
		return (NULL);
	while (i-- >= 0)
		str[i + 1] = src[i + 1];
	return (str);
}
