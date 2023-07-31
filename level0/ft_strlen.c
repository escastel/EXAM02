/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:58:00 by escastel          #+#    #+#             */
/*   Updated: 2023/07/31 17:58:01 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	t_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*#include <stdio.h>
int	main()
{
	char *str;

	str = "hola";
	printf("%d", ft_strlen(str));
	return (0);
}*/