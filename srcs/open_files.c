/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open_files.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 17:27:27 by darakely          #+#    #+#             */
/*   Updated: 2022/09/06 14:39:39 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	open_files(char **argv, t_data *info, char **env)
{
	info->fd1 = open(argv[1], O_RDONLY);
	if (info->fd1 < 0)
	{
		perror("Input file not found");
		exit(EXIT_FAILURE);
	}
	info->fd2 = open(argv[4], O_RDWR | O_CREAT | O_TRUNC, 0644);
	if (info->fd2 < 0)
	{
		perror("Output file not found");
		exit(EXIT_FAILURE);
	}
	managing_process(info, env);
}
