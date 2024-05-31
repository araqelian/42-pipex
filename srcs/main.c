/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 14:46:48 by darakely          #+#    #+#             */
/*   Updated: 2022/09/06 14:36:15 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../pipex.h"

int	main(int argc, char **argv, char **env)
{
	t_data	info;

	if (argc != 5)
	{
		write(2, "Error: try this ./pipex file1 cmd1 cmd2 file2\n", 46);
		exit(EXIT_FAILURE);
	}
	else
	{
		check_arguments(argv);
		parsing(argv, env, &info);
		open_files(argv, &info, env);
	}
	return (0);
}
