/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taras <taras@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 22:50:19 by taras             #+#    #+#             */
/*   Updated: 2021/05/29 12:35:30 by taras            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int ch)
{
	if ((ch >= 'a') && (ch <= 'z'))
	{
		ch = ch - 32;
	}
	return (ch);
}