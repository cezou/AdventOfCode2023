/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:25:58 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/04 16:42:47 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../exo.h"

int	search_first(const char *s)
{
	int	i;

	i = 0;
	while (!ft_isdigit(s[i]))
		i++;
	return (s[i] - '0');
}

int	search_last(const char *s)
{
	int	i;

	i = ft_strlen(s);
	while (!ft_isdigit(s[i]))
		--i;
	return (s[i] - '0');
}

int	main(void)
{
	int		fd;
	char	*line;
	int		i;
	int		sum;

	sum = 0;
	fd = open("input", O_RDONLY);
	i = 0;
	while ("squidgame")
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		sum += search_first(line) * 10 + search_last(line);
		free(line);
		i++;
	}
	ft_printf("result : %d", sum);
}
