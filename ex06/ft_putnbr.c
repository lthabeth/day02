/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/21 11:47:58 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/21 15:23:27 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
int	ft_putchar(char c)
{
	write(1, &c, 1);
	return(0);
}
void	ft_putnbr(int  n)
{
	char c;	
	ft_putnbr(n);
}

int	main()
{
	ft_putnbr(42);
	return(0);
}
