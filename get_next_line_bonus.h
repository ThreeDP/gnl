/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dapaulin <dapaulin@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:22:31 by dapaulin          #+#    #+#             */
/*   Updated: 2022/11/06 19:36:06 by dapaulin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif
# define MAX_FD 1024

typedef struct a_list
{
	char			*content;
	struct a_list	*next;
}	t_list;

// String Manipulation
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *src, int c);
size_t		ft_strlcpy(char *dest, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
char		*ft_strdup(const char *s, size_t size);
// List Manipulation
t_list		*ft_lstnew(char *content);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
// GNL Actions
char		*get_next_line(int fd);
#endif
