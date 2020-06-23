/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:47:58 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/23 13:29:37 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void	ft_putnbr(int n)
{
	char c;	
	if (n < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	if (n < 10)
	
		ft_putchar(n + '0');
			else
			{
				ft_putnbr(n / 10);
				ft_putnbr(n % 10);
   			}
}
		


int	main()
{
	ft_putnbr(42);
	return(0);
}

