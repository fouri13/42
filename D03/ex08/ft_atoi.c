/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/15 19:27:36 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/19 13:33:49 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	res;
	int neg;
	int i;

	res = 0;
	neg = 0;
	i = 0;
	while ((str[i] <= 13 && str[i] >= 8) || str[i] == 127)
		i++;
	if (str[i] == '-')
		neg = 1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		res = res * 10;
		res += str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-res);
	else
		return (res);
}
