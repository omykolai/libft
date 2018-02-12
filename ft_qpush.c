/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qpush.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:11:22 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/12 18:14:52 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qpush(t_queue *q, void *val)
{
	ft_lstadd(&q->last, ft_lstnew(val, sizeof(val)));
	q->last = q->last->next;
}
