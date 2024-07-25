/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_func.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:51:49 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 16:24:10 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int ft_strcmp(char *w1, char *w2)
{
    while (*w1 && *w2)
    {
        if (*w1 != *w2)
            return ((unsigned char)*w1 - (unsigned char)*w2);
        w1++;
        w2++;
    }
    return ((unsigned char)*w1 - (unsigned char)*w2);
}

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}