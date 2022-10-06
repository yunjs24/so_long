/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junsyun <junsyun@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:11:29 by junsyun           #+#    #+#             */
/*   Updated: 2022/09/14 14:13:13 by junsyun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	char *ptr;
	size_t i;

	ptr = s;
	i = 0;
	while (i < n)
	{
		*(ptr + i++) = 0;
	}
}
