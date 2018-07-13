/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 18:18:11 by rsibiet           #+#    #+#             */
/*   Updated: 2017/01/26 18:18:18 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	tab = NULL;
	if (min >= max)
		return (NULL);
	while (min++ < max)
		i++;
	if ((tab = (int *)malloc(sizeof(int) * i)) == NULL)
		return (NULL);
	while (i >= 0)
		tab[i--] = --min;
	return (tab);
}
