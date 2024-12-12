/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekeinan <ekeinan@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:52:30 by ekeinan           #+#    #+#             */
/*   Updated: 2024/12/12 16:55:20 by ekeinan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include "libft/libft.h" // for strlen and bzero, which were previously explicitly declared in the get_next_line project
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# ifndef FILES_CAPACITY
#  define FILES_CAPACITY 10
# endif

size_t	ft_strlen_until_nl(char *s, ssize_t *nl_i);
char	*ft_strdup_until_nl(char *src, ssize_t *nl_i);
char	*get_next_line(int fd);

#endif
