/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lx_printf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chan <chan@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 14:31:26 by chan              #+#    #+#             */
/*   Updated: 2021/04/19 16:36:27 by chan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	X_printf(t_point *pt, long long num)
{
	int	len;
	
	if (pt->pre < 0 && !pt->pre_ast)
		pt->width = -pt->pre;
	len = num_len(&num, pt, 16);
	if (pt->pre > len)
		pt->padding = pt->pre - len;
	if (pt->zero && pt->width - len > pt->padding)
		pt->padding = pt->width - len;
	len += pt->padding;
	if (pt->minus)
	{
		num_padding_operation(pt, num, &len, LARGE);
		width_operation(pt, &len, num);
	}
	else
	{
		width_operation(pt, &len, num);
		num_padding_operation(pt, num, &len, LARGE);
	}
	return (len);
}
