/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   managing_process.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 20:26:47 by darakely          #+#    #+#             */
/*   Updated: 2022/09/06 15:10:16 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

static void	close_fds(t_data *info)
{
	close(info->fds[0]);
	close(info->fds[1]);
	close(info->fd1);
	close(info->fd2);
}

static void	exe_file1(t_data *info, char **env)
{
	dup2(info->fds[1], 1);
	close(info->fds[0]);
	close(info->fds[1]);
	dup2(info->fd1, 0);
	close(info->fd1);
	if (execve(info->cmd_path1, info->cmd1, env) < 0)
	{
		perror("Execve");
		exit(EXIT_FAILURE);
	}
}

static void	exe_file2(t_data *info, char **env)
{
	dup2(info->fds[0], 0);
	close(info->fds[0]);
	close(info->fds[1]);
	dup2(info->fd2, 1);
	close(info->fd2);
	if (execve(info->cmd_path2, info->cmd2, env) < 0)
	{
		perror("Execve");
		exit(EXIT_FAILURE);
	}
}

void	managing_process(t_data *info, char **env)
{
	if (pipe(info->fds) < 0)
	{
		perror("Pipe");
		exit(EXIT_FAILURE);
	}
	info->pr1 = fork();
	if (info->pr1 < 0)
	{
		perror("Fork");
		exit(EXIT_FAILURE);
	}
	else if (info->pr1 == 0)
		exe_file1(info, env);
	info->pr2 = fork();
	if (info->pr2 < 0)
	{
		perror("Fork");
		exit(EXIT_FAILURE);
	}
	else if (info->pr2 == 0)
		exe_file2(info, env);
	close_fds(info);
	waitpid(info->pr1, NULL, 0);
	waitpid(info->pr2, NULL, 0);
}
