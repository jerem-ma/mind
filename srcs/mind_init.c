/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mind_init.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmaia <jmaia@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 14:51:45 by jmaia             #+#    #+#             */
/*   Updated: 2022/04/16 14:59:45 by jmaia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mind.h"

#include <stdlib.h>

t_mind	*mind_init(void)
{
	t_mind	*mind;

	mind = malloc(sizeof(*mind));
	if (!mind)
		return (0);
	mind->begin = malloc(sizeof(*mind->begin));
	if (!mind->begin)
	{
		free(mind);
		return (0);
	}
	return (mind);
}
