/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eagulov <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/07 10:42:09 by eagulov           #+#    #+#             */
/*   Updated: 2018/12/09 12:06:41 by eagulov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	while (i < len && big[i])
	{
		while (big[i] == little[i] && little[i])
		{
			i++;
		}
		if (little[i] == '\0' && ((i + n) <= len))
			return ((char *)big);
		i++;
		big++;
	}
	return (NULL);
}
