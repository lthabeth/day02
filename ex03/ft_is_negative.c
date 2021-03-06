/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 16:30:15 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/25 10:49:26 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putchar(char c)
{ 
	write(1, &c, 1);
}
void ft_is_negative(int n)
{
	if (n > 0) 
	{
		ft_putchar('P');
	} else if (n < '0')
	{
		ft_putchar('N');
		n = -n;
	}
}
int		main()
{
    
	ft_is_negative(42);
	return(0);
}
