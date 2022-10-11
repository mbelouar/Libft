/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 17:18:25 by mbelouar          #+#    #+#             */
/*   Updated: 2022/10/10 22:40:47 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_string(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

void	fill_s(char **dest, char const *s, char c, int words_nbr)
{
	int	i;
	int	j;
	int	count_char;

	i = 0;
	j = 0;
	while (j < words_nbr)
	{
		while (s[i] && s[i] == c)
			i++;
		count_char = 0;
		while (s[i] && s[i] != c)
		{
			count_char++;
			i++;
		}
		dest[j] = ft_substr(s, (i - count_char), count_char);
		j++;
	}
	dest[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		count_s;

	if (!s)
		return (NULL);
	count_s = count_string(s, c);
	dest = malloc(sizeof(char *) * count_s + 1);
	if (!dest)
		return (NULL);
	fill_s(dest, s, c, count_s);
	return (dest);
}
