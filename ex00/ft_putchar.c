/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:11:04 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 10:12:01 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void		ft_putchar(char c)
{
	write(1,&c, 1);
}