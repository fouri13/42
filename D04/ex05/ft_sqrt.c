/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:53:06 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 20:43:18 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int racine;
	int carre_ok;

	racine = 0;
	while ((racine * racine) < nb)
	{
		carre_ok = racine * racine;
		racine++;
	}
	if (racine * racine == nb)
		return (racine);
	else
		return (0);
}
