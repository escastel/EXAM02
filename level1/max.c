/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:08:00 by escastel          #+#    #+#             */
/*   Updated: 2023/07/31 18:08:27 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	l;

	if (!len)
		return (0);
	l = 1;
	i = tab[l];
	while (tab[l])
	{
		if (tab[l] > i)
			i = tab[l];
		l++;
	}
	return (i);
}
