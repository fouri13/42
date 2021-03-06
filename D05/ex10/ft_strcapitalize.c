/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:30:10 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 21:52:21 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char		*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		if ((str[i - 1] == ' ' || str[i] == str[0]
					|| (str[i - 1] >= 123 && str[i - 1] <= 126)
					|| (str[i - 1] >= 91 && str[i - 1] <= 96)
					|| (str[i - 1] >= 58 && str[i - 1] <= 64)
					|| (str[i - 1] >= 33 && str[i - 1] <= 47)) &&
				(str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
