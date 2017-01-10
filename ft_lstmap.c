/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suvitiel <suvitiel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 04:04:39 by suvitiel          #+#    #+#             */
/*   Updated: 2017/01/10 04:23:53 by suvitiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *temp;
	t_list *list;
	int		first;

	first = 0;
	list = NULL;
	if (lst && f)
	{
		while (lst)
		{
			temp = ft_lstnew(lst->content, lst->content_size);
			if (temp == NULL)
				return (NULL);
			temp = f(lst);
			if (first == 0)
			{
				list = temp;
				first = 1;
			}
			else
			{
				list = list->next;
				list = temp;
			}
			lst = lst->next;
		}
		return (list);
	}
	return (NULL);
}
