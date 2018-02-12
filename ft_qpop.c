/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qpop.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/12 18:07:53 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/12 18:11:09 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_qpop(t_queue *q)
{
	void	*res;
	t_list	*newfirst;

	res = q->first->value;
	newfirst = q->first->next;
	free(q->first);
	q->first = newfirst;
	return (res);
}
