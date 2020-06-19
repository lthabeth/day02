/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lthabeth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:28:28 by lthabeth          #+#    #+#             */
/*   Updated: 2020/06/19 14:24:23 by lthabeth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}

void    ft_print_reverse_alphabet(void)
{
        char   alphabet;
        alphabet = 'z';
					while  (alphabet >= 'a')
                {
                        ft_putchar(alphabet);
                        alphabet--;
}					
}

int main()
{
 ft_print_reverse_alphabet();
 return(0);
}
