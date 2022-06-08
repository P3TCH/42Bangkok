/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snamesst <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 04:56:35 by snamesst          #+#    #+#             */
/*   Updated: 2022/05/15 12:22:50 by snamesst         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNC_H
# define FUNC_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	len3_normal(char *argv, char *c, int len, int first);
void	len3_tencase(char *argv, char *c, int len, int first);
int		len3(char *argv, char *c, int len, int first);
int		ft_strlen(char *str);
int		ft_intlen(char *dict);
char	*ft_charstr(char *str, char to_find);
char	*ft_strstr(char *str, char *to_find);
void	*ft_split(char *str);
void	hundred_re_char(char *str, int len);
void	ft_putstr(char *str);
void	len1(char argv, char *c);
void	len2_2(char *argv, char *c);
void	len2(char *argv, char *c);
void	len1_in3(char *argv, char *c, int first);
void	len2_in3_2(char *argv, char *c, int first);
void	len2_in3(char *argv, char *c, int first);
void	len3_hundredcase(char *argv, char *c, int len, int first);

#endif
