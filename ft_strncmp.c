/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbopp <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 09:51:12 by lbopp             #+#    #+#             */
/*   Updated: 2016/11/12 18:22:54 by lbopp            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (i < (int)n)
	{
		while (((unsigned char*)s1)[i] != '\0' && ((unsigned char*)s2)[i]
				!= '\0' && ((unsigned char*)s1)[i] == s2[i] && i < (int)n - 1)
		{
			i++;
		}
		return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
	}
	return (0);
}
