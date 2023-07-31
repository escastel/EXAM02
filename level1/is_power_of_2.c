/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:05:34 by escastel          #+#    #+#             */
/*   Updated: 2023/07/31 18:06:03 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	int	pow;
	int	m;

	m = (int)n;
	if (n == 1)
		return (1);
	pow = 2;
	if (pow == m)
		return (1);
	while (pow <= m)
	{
		pow *= 2;
		if (pow == m)
			return (1);
		if (pow > m)
			return (0);
	}
	return (0);
}

/*#include <stdio.h>
int	main()
{
	unsigned	int k;

	k = 12;
	printf("%d", is_power_of_2(k));
	return (0);
}*/