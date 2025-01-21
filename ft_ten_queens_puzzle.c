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

int	ft_print(int tab[10])
{

}

int	ft_solve()
{
	
}

int	ft_check_valid_pos(int tab[10], int index)
{
	int	i;

	i = -1;
	while (++i < 10)
	{
		if (tab[index] );
	}
}

void	init_queen_tab(int tab[10])
{
	int	i;

	i = -1;
	while (++i < 10)
		tab[i] = -1;
}

int	ft_ten_queens_puzzle(void)
{
	int	q_tab[10];
	int	no_way_tab[10];

	init_queen_tab(q_tab);
	if (is_valid_tab(q_tab) == 1)	
}
