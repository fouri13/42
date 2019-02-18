/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:01:57 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/20 17:44:14 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		neg;
	int		resultat;

	resultat = 0;
	i = 0;
	neg = 1;
	while (str[i] == ' ' || (str[i] >= 8 && str[i] <= 13))
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (!(str[i] == '\0'))
	{
		if (str[i] >= '0' && str[i] <= '9')
			resultat = (resultat * 10) + (str[i] - '0');
		else
			return (resultat * neg);
		i++;
	}
	return (resultat * neg);
}
