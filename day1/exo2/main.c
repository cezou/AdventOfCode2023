/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:25:58 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/07 02:40:06 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../exo.h"

int	search_first_digit(const char *s, int *indice)
{
	int	i;

	i = 0;
	while (!ft_isdigit(s[i]) && s[i])
		i++;
	*indice = i;
	if (i == (int)ft_strlen(s))
		return (11);
	return (s[i] - '0');
}

int	search_last_digit(const char *s, int *indice)
{
	int	i;

	i = ft_strlen(s);
	while (!ft_isdigit(s[i]) && i >= 0)
		--i;
	*indice = i;
	if (i == 0)
		return (-1);
	return (s[i] - '0');
}

int	search_first_letter(const char *s)
{
	int	indice_first_digit;
	int	first;

	indice_first_digit = 0;
	search_first_digit(s, &indice_first_digit);
	first = ft_min(9, first_one(s), first_two(s), first_three(s), first_four(s),
			first_five(s), first_six(s), first_seven(s), first_eight(s),
			first_nine(s));
	if (first == -1)
		return (s[indice_first_digit] - '0');
	if (first < indice_first_digit)
	{
		if (first == first_one(s))
			return (1);
		if (first == first_two(s))
			return (2);
		if (first == first_three(s))
			return (3);
		if (first == first_four(s))
			return (4);
		if (first == first_five(s))
			return (5);
		if (first == first_six(s))
			return (6);
		if (first == first_seven(s))
			return (7);
		if (first == first_eight(s))
			return (8);
		if (first == first_nine(s))
			return (9);
	}
	return (s[indice_first_digit] - '0');
}

int	search_last_letter(const char *s)
{
	int	indice_last_digit;
	int	last;

	search_last_digit(s, &indice_last_digit);
	last = ft_max(9, last_one(s), last_two(s), last_three(s), last_four(s),
			last_five(s), last_six(s), last_seven(s), last_eight(s),
			last_nine(s));
	if (last > indice_last_digit)
	{
		if (last == last_one(s))
			return (1);
		if (last == last_two(s))
			return (2);
		if (last == last_three(s))
			return (3);
		if (last == last_four(s))
			return (4);
		if (last == last_five(s))
			return (5);
		if (last == last_six(s))
			return (6);
		if (last == last_seven(s))
			return (7);
		if (last == last_eight(s))
			return (8);
		if (last == last_nine(s))
			return (9);
	}
	return (s[indice_last_digit] - '0');
}

int	main(void)
{
	int		fd;
	char	*line;
	int		i;
	int		sum;
	int		temp;

	sum = 0;
	fd = open("input_2", O_RDONLY);
	i = 0;
	while ("squidgame")
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		temp = search_first_letter(line) * 10 + search_last_letter(line);
		sum += temp;
		free(line);
		i++;
	}
	ft_printf("result : %d", sum);
}
