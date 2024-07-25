/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ma_ext.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-fagh <iel-fagh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 09:53:22 by iel-fagh          #+#    #+#             */
/*   Updated: 2024/07/25 10:09:46 by iel-fagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int find_extention(char *str, char *suffix)
{
    size_t  str_len;
    size_t  suffix_strlen;

    str_len = ft_strlen(str);
    suffix_strlen = ft_strlen(suffix);
    if (str_len >= suffix_strlen)
        return (ft_strcmp(str + str_len - suffix_strlen, suffix) == 0);
    return (0);
}

void check_map_ext(char *str)
{
    if (ft_strlen(str) < 5)
        print_err("ERROR :wrong type of map\n");
    if (find_extention(str,".ber"))
        return;
    print_err("The map must end with .ber\n");
}