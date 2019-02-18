/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 14:00:10 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/22 14:12:55 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		ft_str_is_printable(char *str)
{
	int		i;
	int		compteur;

	if (str[0] == '\0')
		return (1);
	compteur = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 33 && str[i] <= 126) || str[i] == ' ')
			compteur++;
		i++;
	}
	if (ft_strlen(str) == compteur)
		return (1);
	else
		return (0);
}
