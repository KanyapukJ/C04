int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int i;
	int j;
	char str[] = "hello";

	i = ft_strlen(str) + '0';
	j = strlen(str) + '0';
	write(1, "The ft_strlen output: ", 22);
	write(1, &i, 1);
	write(1, "\nThe strlen output: ", 21);
	write(1, &j, 1);
	return (0);
}*/