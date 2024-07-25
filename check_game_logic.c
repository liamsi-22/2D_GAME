/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_game_logic.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:48:00 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 14:15:09 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void full_value(char **map, int *i, int *j, int *k)
{
    int x;
    int y;

    x = 0;
    while (map[x])
    {
        y = 0;
        while(map[x][y])
        {
            if (map[x][y] == 'P')
                *i++;
            else if (map[x][y] == 'C')
                *j++;
            else if (map[x][y] == 'E')
                *k++;
            y++;
        }
        x++;
    }
}

void check_game_logic(t_data *data)
{
    int player;
    int coins;
    int exit;

    int player = 0;
    int coins = 0;
    int exit = 0;
    full_value(data->map, &player, &coins, &exit);
    if (player > 1 || player < 1)
        print_err("ERROR : only one player allowed !\n");
    if (coins < 1)
        print_err("ERROR : there is no coins on the map!\n");
    if (exit > 1 || exit < 1)
        print_err("ERROR : only one exit allowed!\n");
    

    
}