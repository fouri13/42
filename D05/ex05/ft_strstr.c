/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:08:19 by ffournie          #+#    #+#             */
/*   Updated: 2018/02/21 15:44:12 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		compare(char *str, char *to_find, int i, int compteur)
{
	int		h;

	h = 0;
	while (to_find[h] != '\0')
	{
		if (to_find[h] == str[i])
			compteur++;
		h++;
		i++;
	}
	return (compteur);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		compteur;
	int		taille;
	char	*debut;
	int		j;

	j = 0;
	taille = ft_strlen(to_find);
	if (to_find[0] == '\0')
		return (str);
	else
		while (str[j] != '\0')
		{
			if (str[j] == to_find[0])
			{
				if (compteur != taille)
					compteur = 0;
				if (compare(str, to_find, j, compteur) == taille)
				{
					debut = &str[j];
					return (debut);
				}
			}
			j++;
		}
	return (0);
}
