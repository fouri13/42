/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffournie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/28 15:50:34 by ffournie          #+#    #+#             */
/*   Updated: 2018/03/01 14:06:46 by ffournie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	if (argc > 1)
	{
		while (argc > 1)
		{
			j = 0;
			while (argv[argc - 1][j] != '\0')
			{
				ft_putchar(argv[argc - 1][j]);
				j++;
			}
			argc--;
			ft_putchar('\n');
		}
	}
}
