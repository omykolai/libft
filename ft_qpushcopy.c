/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qpushcopy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:14:25 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/12 18:15:04 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qpushcopy(t_queue *q, void *val)
{
	ft_lstadd(&q->last, ft_lstnewcopy(val, sizeof(val)));
	q->last = q->last->next;
}
