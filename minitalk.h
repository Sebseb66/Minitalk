/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfroidev <sfroidev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 19:48:21 by sfroidev          #+#    #+#             */
/*   Updated: 2023/05/15 19:49:00 by sfroidev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include<stdlib.h>
# include<unistd.h>
# include<signal.h>

char	*itoa_pid(int nb);
int		ft_strlen(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
char	*convertbinary(unsigned char a);

#endif
