/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 17:34:25 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 16:14:43 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

void			ft_putnbr(int nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void			ft_putlong(long nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = nbr * -1;
	}
	if (nbr > 9)
	{
		ft_putlong(nbr / 10);
		ft_putlong(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}

void			ft_putuint(unsigned int nbr)
{
	if (nbr > 9)
	{
		ft_putlong(nbr / 10);
		ft_putlong(nbr % 10);
	}
	else
		ft_putchar(nbr + '0');
}
