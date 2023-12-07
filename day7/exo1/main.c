/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:25:58 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/07 10:33:45 by cviegas          ###   ########.fr       */
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

int	count_pair(char *s)
{
	int	i;
	int	j;
	int	countpair;

	countpair = 0;
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (j < 5)
		{
			if (i == j)
				j++;
			if (s[i] == s[j])
				countpair++;
			j++;
		}
		i++;
	}
	return (countpair);
}
int	pos_in_char(char s[], char c)
{
	int	i;

	i = 0;
	while (i < 5)
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}
int		card_cmp(char *card1, char *card2, char *cardset)
{
	int i = 0;

	while (i < 5)
	{
		if (card1[i] == card2[i])
			i++;
		else if (ft_isdigit(card1[i]) && ft_isdigit(card2[i]) && (card1[i] - '0') < (card2[i] - '0'))
			return (1);
		else if (ft_isdigit(card1[i]) && ft_isdigit(card2[i]) && (card1[i] - '0') > (card2[i] - '0'))
			return (0);
		else if (ft_isalpha(card1[i]) && ft_isdigit(card2[i]))
			return (0);
		else if (ft_isdigit(card1[i]) && ft_isalpha(card2[i]))
			return (1);
		else if (ft_isalpha(card1[i]) && ft_isalpha(card2[i]))
		{
			if (pos_in_char(cardset, card1[i]) < pos_in_char(cardset, card2[i]))
				return (1);
			return (0);
		}

	}
	return (1);
}

void	tri(char ***tab)
{
	int		i;
	int		j;
	int		k;
	char	**temp;
	char	*tab_i;
	char	*tab_j;

	i = 0;
	k = 0;
	// while(k < 1000)
	// {
	while (tab[i])
	{
		j = 0;
		while (tab[j])
		{
			tab_i = tab[i][0];
			tab_j = tab[j][0];
			if (count_pair(tab[i][0]) < count_pair(tab[j][0]) 
			|| (count_pair(tab[i][0]) == count_pair(tab[j][0])
			   && card_cmp(tab[i][0], tab[j][0], "TJQKA")))
			{
				temp = tab[j];
				tab[j] = tab[i];
				tab[i] = temp;
			}
			j++;
		}
		i++;
	}
	// k++;
	// }

	
}

int	sum_tab(char ***tab)
{
	int	i;
	int	sum;

	i = 0;
	sum = 0;
	while (tab[i])
	{
		sum += atoi(tab[i][1]) * (i + 1);
		i++;
	}
	return (sum);
}

int	main(int ac, char **av)
{
	int		fd;
	char	***tab;
	char	*gnl;
	int		i;
	int		sum;
	int		j;

	sum = 0;
	tab = NULL;
	fd = open("input", O_RDONLY);
	i = 0;
	tab = ft_calloc(100000, 1);
	while ("squidgame")
	{
		gnl = get_next_line(fd);
		tab[i] = ft_split_charset(gnl, " \n");
		free(gnl);
		if (!tab[i])
			break ;
		i++;
	}
	tri(tab);
	j = 0;
	while (tab[j])
	{
		print_split(tab[j]);
		j++;
	}
	printf("Resultat: %d\n", sum_tab(tab));
	j = 0;
	while (tab[j])
	{
		free_splitter(tab[j]);
		j++;
	}
	printf("%d", count_pair(av[1]));
	free(tab);
	(void)ac;
	(void)av;
}
