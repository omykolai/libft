/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 12:47:46 by omykolai          #+#    #+#             */
/*   Updated: 2017/09/25 14:13:15 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dst, const char *src)
{
	char *idst;

	idst = dst;
	while (*src != '\0')
	{
		*idst = *src;
		++idst;
		++src;
	}
	*idst = '\0';
	return (dst);
}
