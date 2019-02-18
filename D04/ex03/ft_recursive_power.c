/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 12:15:05 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 20:37:22 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	if (nb < -214748368 || nb > 2147483647)
		return (0);
	if (power == 0)
		return (1);
	else
		res = nb;
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
