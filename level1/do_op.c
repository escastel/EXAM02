/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: escastel <escastel@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:07:06 by escastel          #+#    #+#             */
/*   Updated: 2023/07/31 18:07:39 by escastel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_operation(int o, int t, char argv)
{
	int	r;

	if (argv == '*')
		r = o * t;
	if (argv == '/')
		r = o / t;
	if (argv == '+')
		r = o + t;
	if (argv == '-')
		r = o - t;
	if (argv == '%')
		r = o % t;
	return (r);
}

int	main(int argc, char **argv)
{
	int	result;
	int	o;
	int	t;

	if (argc == 4)
	{
		o = atoi(argv[1]);
		t = atoi(argv[3]);
		result = ft_operation(o, t, *argv[2]);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}

