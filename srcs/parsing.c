/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:22:16 by darakely          #+#    #+#             */
/*   Updated: 2022/10/07 15:18:56 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

void	parsing(char **argv, char **env, t_data *info)
{
	int	i;

	i = 0;
	while (env[i])
	{
		if (strncmp("PATH=", env[i], 5) == 0)
			break ;
		i++;
	}
	env[i] += 5;
	info->path = ft_split(env[i], ':');
	info->cmd_path = ft_split(env[i], ':');
	info->cmd1 = ft_split(argv[2], ' ');
	info->cmd2 = ft_split(argv[3], ' ');
	cmd1_check(info);
}

void	cmd1_check(t_data *info)
{
	int	i;

	i = 0;
	while (info->path[i])
	{
		if (access(info->cmd1[0], X_OK | R_OK) == 0)
		{
			info->cmd_path1 = info->cmd1[0];
			break ;
		}
		if (info->path[i] == NULL)
		{
			write(2, "Error: No detected cmd!\n", 24);
			exit(EXIT_FAILURE);
		}
		info->path[i] = ft_strjoin(info->path[i], "/");
		info->path[i] = ft_strjoin(info->path[i], info->cmd1[0]);
		if (access(info->path[i], X_OK | R_OK) == 0)
		{
			info->cmd_path1 = info->path[i];
			break ;
		}
		i++;
	}
	cmd2_check(info);
}

void	cmd2_check(t_data *info)
{
	int	i;

	i = 0;
	while (info->cmd_path[i])
	{
		if (access(info->cmd2[0], X_OK | R_OK) == 0)
		{
			info->cmd_path2 = info->cmd2[0];
			break ;
		}
		if (info->cmd_path[i] == NULL)
		{
			write(2, "Error: No detected cmd!\n", 24);
			exit(EXIT_FAILURE);
		}
		info->cmd_path[i] = ft_strjoin(info->cmd_path[i], "/");
		info->cmd_path[i] = ft_strjoin(info->cmd_path[i], info->cmd2[0]);
		if (access(info->cmd_path[i], X_OK | R_OK) == 0)
		{
			info->cmd_path2 = info->cmd_path[i];
			break ;
		}
		i++;
	}
}
