#include <stdlib.h>
char *ft_strcpy(char *dest, char *src)
{
	int i;
	i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *res;
	res = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	ft_strcpy(res,src);
	return (res);
}
