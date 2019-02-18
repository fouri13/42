/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 16:30:59 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 20:30:50 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	return (ft_recursive_factorial(nb - 1) * nb);
}
