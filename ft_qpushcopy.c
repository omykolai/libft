/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qpushcopy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:14:25 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/12 19:00:01 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_qpushcopy(t_queue *q, void *val)
{
	t_list	*new;

	new = NULL;
	ft_lstadd(&new, ft_lstnewcopy(val, sizeof(val)));
	if (q->last)
		q->last->next = new;
	q->last = new;
	if (!q->first)
		q->first = new;
}
