#include <stdlib.h>

int	len_sep(char *sep)
{
	int	v;
	int	taille_sep;

	v = 0;
	taille_sep = 0;
	while (sep[v])
	{
		taille_sep++;
		v++;
	}
	return (taille_sep);
}

int	len_strs(char **strs)
{
	int	i;
	int	j;
	int	taille_strs;

	i = 0;
	j = 0;
	taille_strs = 0;
	while (strs[j])
	{
		i = 0;
		while (strs[j][i])
		{
			i++;
			taille_strs++;
		}
		j++;
	}
	return (taille_strs);
}

void	concatenage(int size, char **strs, char *sep, char *tab)

{
	int	i;
	int	j;
	int	k;
	int	l;

	i = 0;
	j = 0;
	k = 0;
	l = 0;
	while (j < size)
	{
		while (strs[j][k])
		{
			tab[i++] = strs[j][k++];
		}
		if (j < size - 1)
			while (sep[l])
				tab[i++] = sep[l++];
		l = 0;
		k = 0;
		j++;
	}
	tab [i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		taille_total;

	taille_total = 0;
	taille_total = taille_total + len_strs(strs);
	taille_total = taille_total + (len_sep(sep) * (size - 1));
	if (size == 0)
		tab = malloc(1);
	if (!strs)
		return (NULL);
	tab = malloc(sizeof(char) * taille_total + 1);
	if (!tab)
		return (NULL);
	concatenage(size, strs, sep, tab);
	return (tab);
}
