/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:22:16 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 16:30:27 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"


char	**copy_map(t_data *data)
{
	char	**mapcopy;
	int		idx;

	idx = 0;
	mapcopy = malloc(sizeof(char *) * (data->height + 1));
	if (!mapcopy)
		return (NULL);
	while (data->map[idx])
	{
		mapcopy[idx] = ft_strdup(data->map[idx]);
		idx++;
	}
	mapcopy[idx] = NULL;
	return (mapcopy);
}

void	check_path(t_data *data)
{
    char **map_ptr;
    int i;
    int j;

    map_ptr = map_cpy(data);
    if (!map_ptr)
        exit(1);
    i = 0;
    while (data->map[i])
    {
        j = 0;
        while (data->map[i][j])
        {
            if (data->map[i][j] == 'P')
            {
                data->p_y = i;
                data->p_x = j;
            }
            j++;
        }
        i++;
    }
    flood_fill(map_ptr,data->p_y,data->p_x);
    check_map(map_ptr);
}
