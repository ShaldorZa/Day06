/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 10:16:04 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/09 10:27:35 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	int		index;

	index = 0;

	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}
