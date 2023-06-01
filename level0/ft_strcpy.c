char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}

#include <stdio.h>
int	main()
{
	char	*s1;
	char	*s2;

	s1 = "nu";
	s2 = "Hola";
	printf("%s", ft_strcpy(s1, s2));
	return (0);
}