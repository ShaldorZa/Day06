/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/09 11:00:39 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/10 10:25:55 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

int			main(int size, char **args)
{
	int		index;
	int		f;

	index = 1;
	f = 0;
	while (index != size)
	{
		while ((args[index][f] >= 'a' && args[index][f] <= 'z') 
				|| (args[index][f] >= 'A' && args[index][f] <= 'Z') 
				|| (args[index][f] >= '0' && args[index][f] <= '9'))
		{
			ft_putchar(args[index][f]);
			f++;
		}
		ft_putchar('\n');
		f = 0;
		index++;
	}
}

