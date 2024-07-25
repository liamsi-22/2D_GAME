/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_length.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:39:21 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 12:13:42 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	free_map(char **map)
{
	int	i;

	i = 0;
	while (map[i])
        free(map[i++]);
	free(map);
}

void  ft_check_length(t_data *data)
{
    int i;

    i = 0;

    data->width = (int)ft_strlen(data->map[0]);
    while (data->map[i])
    {
        if (ft_strlen(data->map[i++]) != data->width)
        {
            print_err("The map must be rectungulaire");
            free_map(data->map);
        }
        i++;
    }
    data->height = i;
}