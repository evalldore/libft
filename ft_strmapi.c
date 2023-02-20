#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			l;
	char			*ns;

	if (!s || !f)
		return NULL;
	i = 0;
	l = ft_strlen(s);
	ns = malloc(l);
	if (!ns)
		return NULL;
	ft_strlcpy(ns, s, l + 1);
	while (ns[i])
	{
		ns[i] = f(i, ns[i]);
		i++;
	}
	return (ns);
}
