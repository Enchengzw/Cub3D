/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrrmv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darismen <darismen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:30:05 by darismen          #+#    #+#             */
/*   Updated: 2024/07/23 12:15:44 by darismen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

/**
 * @brief Removes all instances of char c of a string str
 * 
 * @param str 
 * @param c 
 * @return char* 
 */
char	*ft_chrrmv(char const *str, char c)
{
	char	*newstr;
	int		i;
	int		j;
	int		rm;

	i = 0;
	rm = 0;
	while (str[i])
	{
		if (str[i++] == c)
			rm++;
	}
	newstr = (char *)malloc(sizeof(char) * (ft_strlen(str) - rm + 1));
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] != c)
			newstr[j++] = str[i];
		i++;
	}
	return (newstr);
}
