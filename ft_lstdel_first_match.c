/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel_first_match.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/10 15:55:16 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/10 16:32:55 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdel_first_match(t_list **list, void *val,
	void (*del)(void *, size_t), int (*cmp)())
{
	t_list *cur;

	cur = *list;
	if (cmp(cur->value, val) == 0)
	{
		*list = cur->next;
		ft_lstdelone(&cur, del);
	}
	else
	{
		while (cur)
		{
			if (cmp(cur->next->value, val) == 0)
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
