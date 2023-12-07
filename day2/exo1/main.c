/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:25:58 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/07 03:46:39 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../exo.h"

void	print_split(char **tableau)
{
	int	i;

	i = 0;
	while (tableau[i])
	{
		printf("%s ", tableau[i]);
		i++;
	}
	printf("\n");
}

void	free_splitter(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	find_colon(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != ':')
		i++;
	return (i);
}
// int check_colors

int	possible(char *s)
{
	char	**splitted_line;
	int		i;
	char	**number_color;

	ft_strlcpy(s, s + find_colon(s) + 1, ft_strlen(s));
	splitted_line = NULL;
	number_color = NULL;
	splitted_line = ft_split_charset(s, ";,\n");

	i = 0;
	while (splitted_line[i])
	{
		number_color = ft_split(splitted_line[i], ' ');
		if (number_color[1][0] == 'r' && ft_atoi(number_color[0]) > 12)
			return (free_splitter(number_color), free_splitter(splitted_line), 0);
		if (number_color[1][0] == 'g' && ft_atoi(number_color[0]) > 13)
			return (free_splitter(number_color), free_splitter(splitted_line), 0);
		if (number_color[1][0] == 'b' && ft_atoi(number_color[0]) > 14)
			return (free_splitter(number_color), free_splitter(splitted_line), 0);
		print_split(number_color);
		free_splitter(number_color);
		i++;
	}
	free_splitter(splitted_line);
	return (1);
}

int	main(void)
{
	int		fd;
	char	*line;
	int		i;
	int		sum;

	sum = 0;
	fd = open("input", O_RDONLY);
	i = 1;
	while ("squidgame")
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (possible(line))
			sum += i;
		free(line);
		i++;
	}
	ft_printf("result : %d", sum);
}
