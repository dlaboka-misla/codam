/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstsize_bonus.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: adimitri <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/02/03 11:39:39 by adimitri      #+#    #+#                 */
/*   Updated: 2020/02/03 11:40:23 by adimitri      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;
	t_list	*len;

	count = 0;
	if (!lst)
		return (0);
	len = lst;
	while (len != NULL)
	{
		count++;
		len = len->next;
	}
	return (count);
}

int main(void)
{
	t_list *head;
	int	count;

	count = ft_lstsize(head);
	printf("%d\n", count);
	return (0);
}

