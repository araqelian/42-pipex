/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arguments.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 14:20:20 by darakely          #+#    #+#             */
/*   Updated: 2022/09/06 14:25:17 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	check_arguments(char **argv)
{
	if (!argv[2] || !argv[3] || argv[2][0] == ' ' || argv[3][0] == ' ')
	{
		write(2, "Error: no detected cmd!\n", 24);
		exit(EXIT_FAILURE);
	}
}
