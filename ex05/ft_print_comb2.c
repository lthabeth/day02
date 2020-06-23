/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:43:10 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/23 12:04:16 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void ft_print_comb2(void)
{
	int x;
	int y;
	x = 0;
	y = 0;
	while (x < 9)
	{
		while (y < 8)
		{
	
		 	ft_putchar(x);
			ft_putchar(y);
			ft_putchar(' ');
			if (x != y)
			 y++;
		 } y = x + 1;
		x++;
	} x = y +1;
	}

int main()
{
	ft_print_comb2();
	return(0);
}
