/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 14:40:17 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/19 16:18:10 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putchar(char c)
{
		write(1, &c, 1);
}
void	ft_print_numbers(void)
 {
		char num;
		num = '0' ;
		while (num <= '9')
		{
			ft_putchar(num);
			num++;
		}
		ft_putchar(num);
 }
int		main()
{
	ft_print_numbers();
	return(0);
}
