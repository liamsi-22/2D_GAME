/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 08:42:37 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 16:24:24 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "get_next_line/get_next_line.h"
# include <mlx.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_data
{
    int i;
    int j;
    int p_x;
    int p_y;
    int dx;
    int dy;
    int c_number;
    int num_of_moves;
    void *mlx;
    void *win;
    char **map;
    int width;
    int height;
    void *ground;
    void *wall;
    void *apple;
    void *player;
    void *exit;
}   t_data;

void print_err(char *str);
void get_map(char *file, t_data *data);

char	**ft_split(char *s, char c);
size_t	ft_strlen(char *s);
int ft_strcmp(char *w1, char *w2);
char	*ft_strdup(const char *s1);


void check_map_ext(char *str);
int find_extention(char *str, char *suffix);
void  ft_check_length(t_data *data);
void    ft_check_elements(t_data *data);
void check_game_logic(t_data *data);
void ft_check_walls(t_data *data);
void	check_path(t_data *data);


#endif