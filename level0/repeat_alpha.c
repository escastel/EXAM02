/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:25:14 by escastel          #+#    #+#             */
/*   Updated: 2023/08/01 11:25:17 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	r;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			r = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				r += argv[1][i] - 97;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				r += argv[1][i] - 65;
			while (r > 0)
			{
				write (1, &argv[1][i], 1);
				r--;
			}
			i++;
		}
	}
	write (1, &"\n", 1);
	return (0);
}