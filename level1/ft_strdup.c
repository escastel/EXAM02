/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:09:32 by escastel          #+#    #+#             */
/*   Updated: 2023/07/31 18:09:54 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	while (src[i])
		i++;
	ptr = (char *)malloc((i + 1)*(sizeof(char)));
	if (!ptr)
		return (NULL);
	j = 0;
	while (j <= i)
	{
		ptr[j] = src[j];
		j++;
	}
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
int	main (void)
{
	printf("Real %s", strdup("hola"));
	printf("Imitación %s", ft_strdup("hola"));
	return (0);
}
*/