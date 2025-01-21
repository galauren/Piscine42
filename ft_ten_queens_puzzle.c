/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galauren <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 12:19:19 by galauren          #+#    #+#             */
/*   Updated: 2025/01/21 17:56:42 by galauren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_tab(int tab[10])
{
        char    to_print;
        int     col;

        col = -1;
        while (++col < 10)
        {
                to_print = tab[col] + '0';
                write(1, &to_print, 1);
        }
        write(1, "\n",1);
}

int     ft_abs(int nbr)
{
        return (nbr < 0 ? -nbr : nbr);
}

int     ft_check_valid_pos(int tab[10], int index, int col)
{
        int     i;

        i = -1;
        while (++i < col)
                if (ft_abs(tab[i] - index) == ft_abs(col - i) || tab[i] == index)
                        return (0);
        return (1);
}

void    ft_place_queen(int tab[10], int col, int *count)
{
        int     index;

        if (col == 10)
        {
                ++(*count);
                ft_print_tab(tab);
                return ;
        }
        index = -1;
        while (++index < 10)
                if (ft_check_valid_pos(tab, index, col))
                {
                        tab[col] = index;
                        ft_place_queen(tab, col + 1, count);
                        tab[col] = -1;
                }
}

int     ft_ten_queens_puzzle(void)
{
        int     board_tab[10];
        int     count;
        int     i;

        i = -1;
        while (++i < 10)
                board_tab[i] = -1;
        ft_place_queen(board_tab, 0, &count);
        return (count);
}

#include <stdio.h>
int main()
{
        printf("%d\n\nJe me kiff vraiment trop", ft_ten_queens_puzzle());
}
