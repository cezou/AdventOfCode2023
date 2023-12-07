/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:25:58 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/07 04:00:20 by cviegas          ###   ########.fr       */
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

int	power(char *s)
{
	char	**splitted_line;
	int		i;
	char	**number_color;
	int		max_red = 0;
	int		max_green = 0;
	int		max_blue = 0;

	ft_strlcpy(s, s + find_colon(s) + 1, ft_strlen(s));
	splitted_line = NULL;
	number_color = NULL;
	splitted_line = ft_split_charset(s, ";,\n");
	i = 0;
	while (splitted_line[i])
	{
		number_color = ft_split(splitted_line[i], ' ');
		if (number_color[1][0] == 'r')
		{
			if (ft_atoi(number_color[0]) > max_red)
				max_red = ft_atoi(number_color[0]);
		}
		if (number_color[1][0] == 'g')
		{
			if (ft_atoi(number_color[0]) > max_green)
				max_green = ft_atoi(number_color[0]);
		}
		if (number_color[1][0] == 'b')
		{
			if (ft_atoi(number_color[0]) > max_blue)
				max_blue = ft_atoi(number_color[0]);
		}
		free_splitter(number_color);
		i++;
	}
	free_splitter(splitted_line);
	return (max_red * max_green * max_blue);
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
		sum += power(line);
		free(line);
		i++;
	}
	ft_printf("result : %d", sum);
}
