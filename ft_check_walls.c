/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_walls.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:10:54 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 12:21:03 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void ft_check_walls(t_data *data)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (data->map[i])
    {
        j = 0;
        while (data->map[i][j])
        {
            if (data->map[i][0] != '1' || data->map[i][data->width - 1] != '1')
                print_err("ERROR :wrong map !\n");
            if (data->map[0][j] != '1' || data->map[data->height - 1][j])
                print_err("ERROR :wrong map !\n");
            j++;
        }
        i++;
    }
}