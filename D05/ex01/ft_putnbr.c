/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 15:54:13 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/20 17:01:09 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb >= 0 && nb < 10)
			ft_putchar(nb + '0');
		else if (nb < 0)
		{
			ft_putchar('-');
			if (nb == -2147483648)
			{
				ft_putchar('2');
				nb = -147483648;
			}
			ft_putnbr(nb * (-1));
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}
