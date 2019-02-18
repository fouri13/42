/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 13:03:45 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/14 14:17:22 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_num(int n)
{
	char	c2;
	char	c1;

	c2 = '0' + (n / 10);
	ft_putchar(c2);
	c1 = '0' + (n % 10);
	ft_putchar(c1);
}

void	ft_print_comb2(void)
{
	char nbr;
	char i;
	char j;

	nbr = 0;
	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j < 100)
		{
			if (nbr == 1)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			ft_print_num(i);
			ft_putchar(' ');
			ft_print_num(j);
			j++;
			nbr = 1;
		}
		i++;
	}
}
