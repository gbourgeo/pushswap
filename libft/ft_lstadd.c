/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbourgeo <gbourgeo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/12 04:28:13 by gbourgeo          #+#    #+#             */
/*   Updated: 2013/12/12 04:54:36 by gbourgeo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void        ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL)
	{
		new->next = *alst;
		*alst = new;
	}
}
