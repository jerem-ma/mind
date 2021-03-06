/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mind_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 15:08:58 by jmaia             #+#    #+#             */
/*   Updated: 2022/04/16 15:12:11 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mind.h"

#include <stdlib.h>

void	mind_free(t_mind *mind, void *ptr)
{
	mind_remove(mind, ptr);
	free(ptr);
}
