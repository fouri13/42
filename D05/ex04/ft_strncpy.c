/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:03:47 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 12:07:01 by ffournie         ###   ########.fr       */
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

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		taille;

	taille = ft_strlen(src);
	i = 0;
	while (n != 0)
	{
		if (taille != 0)
		{
			dest[i] = src[i];
			taille--;
		}
		else
			dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}
