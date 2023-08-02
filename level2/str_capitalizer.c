/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 18:54:45 by escastel          #+#    #+#             */
/*   Updated: 2023/08/02 18:55:01 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	s;

	s = 1;
	if (argc != 1)
	{
		while (s <= (argc - 1))
		{
			i = 0;
			if (argv[s][i] >= 'a' && argv[s][i] <= 'z')
					argv[s][i] -= 32;
			write (1, &argv[s][i], 1);
			i++;
			while (argv[s][i])
			{
				if (argv[s][0] >= 'a' && argv[s][0] <= 'z')
					argv[s][0] -= 32;
				else if (!(argv[s][i - 1] == 32 || (argv[s][i - 1] >= 9 && argv[s][i - 1] <= 13)))
				{
					if (argv[s][i] >= 'A' && argv[s][i] <= 'Z')
						argv[s][i] += 32;
				}
				else if (argv[s][i - 1] == 32 || (argv[s][i - 1] >= 9 && argv[s][i - 1] <= 13))
				{
					if (argv[s][i] >= 'a' && argv[s][i] <= 'z')
						argv[s][i] -= 32;
				}
				write (1, &argv[s][i], 1);
				i++;
			}
			s++;
			write (1, "\n", 1);
		}
	}
	if (argc == 1)
		write (1, "\n", 1);
	return (0);
}
