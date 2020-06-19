/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:45:30 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/19 13:45:51 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_alphabet(void)
{
	char	alphabet;
	alphabet = 'a';
		while  (alphabet <= 'z')
		{
 			ft_putchar(alphabet);
			alphabet++;
		}
ft_putchar('\n'); 
}

int	main()
{
 ft_print_alphabet();
 return (0);
}


