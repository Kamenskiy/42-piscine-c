/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmalepla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/12 12:25:53 by bmalepla          #+#    #+#             */
/*   Updated: 2016/08/12 13:26:20 by bmalepla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int i;
	int j;

	j = *tab;
	i = 1;
	while (i < length)
	{
		if (j < tab[i])
		{
			j = tab[i];
		}
		i++;
	}
	return (j);
}
