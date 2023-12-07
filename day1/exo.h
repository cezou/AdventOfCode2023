/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cviegas <cviegas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:24:40 by cviegas           #+#    #+#             */
/*   Updated: 2023/12/04 16:50:05 by cviegas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXO_H
# define EXO_H
# include "../../libft/libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <math.h>

int		first_one(const char *s);
int		first_two(const char *s);
int		first_three(const char *s);
int		first_four(const char *s);
int		first_five(const char *s);
int		first_six(const char *s);
int		first_seven(const char *s);
int		first_eight(const char *s);
int		first_nine(const char *s);

int		last_one(const char *s);
int		last_two(const char *s);
int		last_three(const char *s);
int		last_four(const char *s);
int		last_five(const char *s);
int		last_six(const char *s);
int		last_seven(const char *s);
int		last_eight(const char *s);
int		last_nine(const char *s);

#endif