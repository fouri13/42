/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int_iterative_power.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 10:58:35 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 20:32:40 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int i;
	int res;

	res = nb;
	i = 1;
	while (i != power)
	{
		i++;
		res = res * nb;
	}
	return (res);
}
