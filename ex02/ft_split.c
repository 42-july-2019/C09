/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 19:52:03 by exam              #+#    #+#             */
/*   Updated: 2019/07/20 17:07:25 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_separator(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int		get_nb_words(char *str, char *sep)
{
	int result;

	result = 0;
	if (*str && !is_separator(*str, sep))
		result++;
	str++;
	while (*str)
	{
		if (!is_separator(*str, sep) && is_separator(*(str - 1), sep))
			result++;
		while (*str && !is_separator(*str, sep))
			str++;
		while (*str && is_separator(*str, sep))
			str++;
	}
	return (result);
}

int		write_str(char *str, char *sep, char **array, int *j)
{
	int k;

		while (str[*j] && is_separator(str[*j], sep))
			(*j)++;
		k = 0;
		while (str[*j + k] && !is_separator(str[*j + k], sep))
			k++;
		if (!(*array =
					((char *)malloc(sizeof(char) * k + 1))))
			return (0);
		k = 0;
		while (str[*j] && !is_separator(str[*j], sep))
			(*array)[k++] = str[(*j)++];
		(*array)[k] = '\0';
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		nb_words;
	char	**array;

	i = 0;
	j = 0;
	if (!(str) || !(charset))
		return (0);
	nb_words = get_nb_words(str, charset);
	if (!(array = (char **)malloc(sizeof(char *) * nb_words + 1)))
		return (0);
	array[nb_words] = 0;
	while (i < nb_words)
		if (!write_str(str, charset, &array[i++], &j))
			return (0);
	return (array);
}
