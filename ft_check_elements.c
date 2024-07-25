/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_elements.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 14:00:26 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 14:09:43 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int ft_check(char c)
{
    return ((c == 'E') || (c == 'P') || (c == 'C') || (c == '1') || (c == '0'))
}

void    ft_check_elements(t_data *data)
{
    int i;
    int j;

    i = 0;
    while (data->map[i])
    {
        j = 0;
        while (data->map[i][j])
        {
            if (ft_check(data->map[i][j]) == 0)
                print_err("ERROR :invalid element in the map!\n");
            j++;
        }
        i++;
    }
}