/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsibiet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 20:18:36 by rsibiet           #+#    #+#             */
/*   Updated: 2017/01/17 20:19:21 by rsibiet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putendl(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_print_sort_av(char **av, int ac)
{
	int	i;

	i = 1;
	while (i < ac)
		ft_putendl(av[i++]);
}

int		main(int ac, char **av)
{
	int		i;
	char	*s;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			s = av[i];
			av[i] = av[i + 1];
			av[i + 1] = s;
			i = 1;
		}
		else
			i++;
	}
	ft_print_sort_av(av, ac);
	return (0);
}
