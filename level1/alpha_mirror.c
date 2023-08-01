/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:16:09 by escastel          #+#    #+#             */
/*   Updated: 2023/08/01 12:16:17 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc == 2)
	{
		i = 0;
		c = 0;
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				c = argv[1][i] - 97;
				argv[1][i] = (122 - c);
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				c = argv[1][i] - 65;
				argv[1][i] = (90 - c);
			}
			write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, &"\n", 1);
	return (0);
}
