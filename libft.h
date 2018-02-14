/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omykolai <omykolai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:45:22 by omykolai          #+#    #+#             */
/*   Updated: 2018/02/14 19:31:17 by omykolai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <wchar.h>
# include <stdint.h>

typedef struct		s_list
{
	void			*value;
	size_t			value_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_queue
{
	t_list			*first;
	t_list			*last;
}					t_queue;

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(const char *dst, const char *src);
char				*ft_strncat(char *dst, const char *src, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle, \
size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
void				*ft_itov(int n);
void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);

t_list				*ft_lstnew(void *value, size_t value_size);
t_list				*ft_lstnewcopy(void const *value, size_t value_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstdelnode(t_list **list, t_list *node,
	void (*del)(void *, size_t));
void				ft_lstdelval(t_list **list, void *val,
	void (*del)(void *, size_t));
void				ft_lstdel_first_match(t_list **list, void *val,
	void (*del)(void *, size_t), int (*cmp)());
void				ft_lstprint(t_list *list, void (*lst_print)());

t_queue				*ft_qnew(void);
void				ft_qpush(t_queue *q, void *val, size_t val_size);
void				ft_qpushcopy(t_queue *q, void *val, size_t val_size);
void				*ft_qpop(t_queue *q);
t_list				*ft_qpopnode(t_queue *q);

size_t				ft_wstrlen(const wchar_t *str, int by_char);
wchar_t				*ft_wstrnew(size_t size);
wchar_t				*ft_wstrcpy(wchar_t *dst, const wchar_t *src);
wchar_t				*ft_wstrchr(const wchar_t *s, int c);
char				*ft_itoamax(intmax_t n);
char				*ft_uitoamax(uintmax_t n);
char				*ft_itoa_base(uintmax_t n, char *base);

#endif
