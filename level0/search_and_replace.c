/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:58:29 by escastel          #+#    #+#             */
/*   Updated: 2023/07/31 17:59:21 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *snd, char *tr)
{
	int	f;
	int	s;

	f = 0;
	s = 0;
	while (snd[f])
		f++;
	while (tr[s])
		s++;
	if (f > 1 || s > 1)
		return (1);
	else
		return (0);
}

int	ft_compare(char *first, char *second, int f, int s)
{
	while (second[s])
	{
		if (second[s] != first[f])
			return (0);
		s++;
		f++;
	}
	return (1);
}

int main(int argc, char **argv)
{
	int	f;
	int	s;
	int	t;

	if (argc != 4 || ft_strlen(argv[2], argv[3]) == 1)
	{
		write(1, &"\n", 1);
		exit(0);
	}
	f = 0;
	while (argv[1][f])
	{
		s = 0;
		if (argv[1][f] == argv[2][s])
		{
			if (ft_compare(argv[1], argv[2], f, s) == 1)
			{
				t = 0;
				while (argv[3][t])
				{
					write(1, &argv[3][t], 1);
					t++;
				}
			}
			else
				write(1, &argv[1][f], 1);
		}
		else
			write(1, &argv[1][f], 1);
		f++;
	}
	write(1, &"\n", 1);
	return (0);
}