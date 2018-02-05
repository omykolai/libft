/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wstrnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 19:14:28 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/05 19:13:20 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wchar.h>
#include <stdlib.h>
#include "libft.h"

wchar_t	*ft_wstrnew(size_t size)
{
	wchar_t	*res;

	res = malloc(sizeof(wchar_t) * (size + 1));
	if (res)
		res[size] = 0;
	return (res);
}
