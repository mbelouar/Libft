/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelouar <mbelouar@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:16:20 by mbelouar          #+#    #+#             */
/*   Updated: 2022/10/01 13:32:18 by mbelouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*cast_str;

	i = 0;
	cast_str = (char *)str;
	while (cast_str[i] && cast_str[i] != (char)c)
		i++;
	if (cast_str[i] == (char)c)
		return (&cast_str[i]);
	return (0);
}
