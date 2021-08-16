/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 23:27:06 by taras             #+#    #+#             */
/*   Updated: 2021/05/28 13:58:20 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit( int arg )

{
	if ((arg >= '0') && (arg <= '9'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}