unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	m;

	i = a;
	j = b;
	m = 2;
	if (a == 0 || b == 0)
		return (0);
	if (a == b)
		return (a);
	while (a < b)
	{
		i = m * a;
		if (i == b || (i % b) == 0)
			return (i);
		m++;
	}
	while (a > b)
	{
		j = b * m;
		if (j == a || (j % a) == 0)
			return (j);
		m++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	unsigned int	a;
	unsigned int	b;

	a = 12;
	b = 13;
	printf("%u", lcm(a, b));
	return (0);
}
