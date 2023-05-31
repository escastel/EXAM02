#include <stdlib.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

#include <stdio.h>

int	main(void)
{
	const char	*s;
	const char	*reject;

	s = "Hol2 que tal9";
	reject = "19264682";
	printf ("%zi", ft_strcspn(s, reject));
	return (0);
}
