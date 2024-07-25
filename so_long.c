/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:52:04 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 16:21:23 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char *init_malloc()
{
    char *x;
    
    x = malloc(sizeof(char));
    if (!x)
        print_err("ERROR :allocation problem !\n");
    x[0] = '\0';
    return (x);
}
void get_map(char *file, t_data *data)
{
    char *init;
    char *line;
    int fd;

    fd = open(file, O_RDONLY);
    if (fd < 0)
        print_err("file doesn't open !\n");
    init = init_malloc();
    line = get_next_line(fd);
    while (line)
    {
        if (line[0] == '\n')
            print_err("ERROR :EMPTY Line\n");
        init = ft_strjoin(init, line);
        free(line);
        line = get_next_line(fd);
    }
    if (init[0] == '\0')
    {
        free(init);
        print_err("ERROR :empty map !\n");
    }
    data->map = ft_split(init, '\n');
    free(init);
}

int main(int ac, char **av)
{
    t_data data;
    
    if (ac != 2)
        peint_err("ERROR :there is no map !\n");
    return (0);
    check_map_ext(av[1]);
    get_map(av[1], &data);
    ft_check_length(&data);
    ft_check_walls(&data);
    check_game_logic(&data);
    ft_check_elements(&data);
    check_path(&data);
}