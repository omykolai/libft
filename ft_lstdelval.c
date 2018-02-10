/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelval.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:47:07 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/10 16:32:47 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelval(t_list **list, void *val, void (*del)(void *, size_t))
{
	t_list *cur;

	cur = *list;
	if (cur->value == val)
	{
		*list = cur->next;
		ft_lstdelone(&cur, del);
	}
	else
	{
		while (cur)
		{
			if (cur->next->value == val)
			{
				if (del)
					del(cur->next->value, cur->next->value_size);
				free(cur->next);
				cur->next = cur->next->next;
				return ;
			}
			cur = cur->next;
		}
	}
}
