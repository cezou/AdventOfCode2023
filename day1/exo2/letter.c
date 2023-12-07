/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   letter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:25:18 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/07 02:42:56 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../exo.h"

int	first_one(const char *s)
{
	size_t	i;

	i = 2;
	if (ft_strlen(s) < i + 1)
		return (111111111);
	while (s[i])
	{
		if (s[i - 2] == 'o' && s[i - 1] == 'n' && s[i] == 'e')
			return (i - 2);
		i++;
	}
	return (11111111);
}

int	first_two(const char *s)
{
	size_t	i;

	i = 2;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 2] == 't' && s[i - 1] == 'w' && s[i] == 'o')
			return (i - 2);
		i++;
	}
	return (11111111);
}

int	first_three(const char *s)
{
	size_t	i;

	i = 4;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 4] == 't' && s[i - 3] == 'h' && s[i - 2] == 'r'
			&& s[i - 1] == 'e' && s[i] == 'e')
			return (i - 4);
		i++;
	}
	return (11111111);
}

int	first_four(const char *s)
{
	size_t	i;

	i = 3;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 3] == 'f' && s[i - 2] == 'o' && s[i - 1] == 'u'
			&& s[i] == 'r')
			return (i - 3);
		i++;
	}
	return (11111111);
}

int	first_five(const char *s)
{
	size_t	i;

	i = 3;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 3] == 'f' && s[i - 2] == 'i' && s[i - 1] == 'v'
			&& s[i] == 'e')
			return (i - 3);
		i++;
	}
	return (11111111);
}

int	first_six(const char *s)
{
	size_t	i;

	i = 2;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 2] == 's' && s[i - 1] == 'i' && s[i] == 'x')
			return (i - 2);
		i++;
	}
	return (11111111);
}

int	first_seven(const char *s)
{
	size_t	i;

	i = 4;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 4] == 's' && s[i - 3] == 'e' && s[i - 2] == 'v'
			&& s[i - 1] == 'e' && s[i] == 'n')
			return (i - 4);
		i++;
	}
	return (11111111);
}

int	first_eight(const char *s)
{
	size_t	i;

	i = 4;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 4] == 'e' && s[i - 3] == 'i' && s[i - 2] == 'g'
			&& s[i - 1] == 'h' && s[i] == 't')
			return (i - 4);
		i++;
	}
	return (11111111);
}

int	first_nine(const char *s)
{
	size_t	i;

	i = 3;
	if (ft_strlen(s) < i + 1)
		return (11111111);
	while (s[i])
	{
		if (s[i - 3] == 'n' && s[i - 2] == 'i' && s[i - 1] == 'n'
			&& s[i] == 'e')
			return (i - 3);
		i++;
	}
	return (11111111);
}

// Maintenant, last_one, last_two, etc. qui font la même chose 
// mais en partant de la fin de la chaîne de caractères.

int	last_one(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("one"))
		return (-1);
	i = ft_strlen(s) - 4;
	while (i >= 0)
	{
		if (s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e')
			return (i);
		i--;
	}
	return (-1);
}

int	last_two(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("two"))
		return (-1);
	i = ft_strlen(s) - 4;
	while (i >= 0)
	{
		if (s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o')
			return (i);
		i--;
	}
	return (-1);
}
int	last_three(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("three"))
		return (-1);
	i = ft_strlen(s) - 6;
	while (i >= 0)
	{
		if (s[i] == 't' && s[i + 1] == 'h' && s[i + 2] == 'r'
			&& s[i + 3] == 'e' && s[i + 4] == 'e')
			return (i);
		i--;
	}
	return (-1);
}

int	last_four(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("four"))
		return (-1);
	i = ft_strlen(s) - 5;
	while (i >= 0)
	{
		if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'u'
			&& s[i + 3] == 'r')
			return (i);
		i--;
	}
	return (-1);
}

int	last_five(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("five"))
		return (-1);
	i = ft_strlen(s) - 5;
	while (i >= 0)
	{
		if (s[i] == 'f' && s[i + 1] == 'i' && s[i + 2] == 'v'
			&& s[i + 3] == 'e')
			return (i);
		i--;
	}
	return (-1);
}

int	last_six(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("six"))
		return (-1);
	i = ft_strlen(s) - 4;
	while (i >= 0)
	{
		if (s[i] == 's' && s[i + 1] == 'i' && s[i + 2] == 'x')
			return (i);
		i--;
	}
	return (-1);
}

int	last_seven(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("seven"))
		return (-1);
	i = ft_strlen(s) - 6;
	while (i >= 0)
	{
		if (s[i] == 's' && s[i + 1] == 'e' && s[i + 2] == 'v'
			&& s[i + 3] == 'e' && s[i + 4] == 'n')
			return (i);
		i--;
	}
	return (-1);
}

int	last_eight(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("eight"))
		return (-1);
	i = ft_strlen(s) - 6;
	while (i >= 0)
	{
		if (s[i] == 'e' && s[i + 1] == 'i' && s[i + 2] == 'g'
			&& s[i + 3] == 'h' && s[i + 4] == 't')
			return (i);
		i--;
	}
	return (-1);
}

int	last_nine(const char *s)
{
	int	i;

	if (ft_strlen(s) < ft_strlen("nine"))
		return (-1);
	i = ft_strlen(s) - 5;
	while (i >= 0)
	{
		if (s[i] == 'n' && s[i + 1] == 'i' && s[i + 2] == 'n'
			&& s[i + 3] == 'e')
			return (i);
		i--;
	}
	return (-1);
}

