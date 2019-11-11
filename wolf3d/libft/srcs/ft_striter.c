/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zsigabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:28:29 by zsigabi           #+#    #+#             */
/*   Updated: 2018/08/16 08:28:30 by zsigabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *c, void (*f)(char *))
{
	while (*c)
	{
		(*f)(c);
		c++;
	}
}