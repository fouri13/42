/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 22:23:14 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/22 14:14:01 by ffournie         ###   ########.fr       */
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

int		ft_str_is_lowercase(char *str)
{
	int		i;
	int		compteur;

	if (str[0] == '\0')
		return (1);
	compteur = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			compteur++;
		i++;
	}
	if (ft_strlen(str) == compteur)
		return (1);
	else
		return (0);
}
