/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 22:33:32 by mbelouar          #+#    #+#             */
/*   Updated: 2022/10/05 15:15:21 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	char	*final_str;
	size_t	size_s1;

	if (!s1 || !set)
		return (NULL);
	new_s1 = (char *)s1;
	while (*new_s1 && ft_strchr(set, *new_s1))
		new_s1++;
	size_s1 = ft_strlen(new_s1);
	while (size_s1 && ft_strchr(set, new_s1[size_s1]))
		size_s1--;
	final_str = ft_substr(new_s1, 0, size_s1 + 1);
	return (final_str);
}
