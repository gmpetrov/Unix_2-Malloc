/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jponcele <jponcele@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/04/14 10:20:39 by jponcele          #+#    #+#             */
/*   Updated: 2014/04/15 12:22:23 by jponcele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_malloc.h>

int					main(void)
{
	char			**tab;

	tab = ft_malloc(2);
	tab = ft_malloc(100);
	tab = ft_malloc(30);
	tab = ft_malloc(200);
	tab = ft_malloc(2200);
	show_alloc_mem();
	return (0);
}
