/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shaniena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/10 07:57:58 by shaniena          #+#    #+#             */
/*   Updated: 2016/02/10 13:26:17 by shaniena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int size, char **args)
{
	int		index;
	int		f;

	index = size - 1;
	f = 0;
	while (index != 0)
	{
		while ((args[index][f] >= 'a' && args[index][f]  <= 'z') ||
					(args[index][f] >= 'A' && args[index][f] <= 'Z') ||
					(args[index][f] >= '0' && args[index][f] <= '9'))
		{
			ft_putchar(args[index][f]);
			f++;
		}
		ft_putchar('\n');
		f = 0;
		index--;
	}
}

