/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: darakely <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:42:51 by darakely          #+#    #+#             */
/*   Updated: 2022/09/06 14:21:25 by darakely         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <errno.h>
# include <fcntl.h>
# include <string.h>

typedef struct s_data
{
	int		fds[2];
	int		fd1;
	int		fd2;
	char	**cmd_path;
	char	**path;
	char	**cmd1;
	char	**cmd2;
	char	*cmd_path1;
	char	*cmd_path2;
	pid_t	pr1;
	pid_t	pr2;
}			t_data;

//utils
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(const char *str);

//ft_split
char	**ft_split(char const *s, char c);

//parsing
void	parsing(char **argv, char **env, t_data *info);
void	cmd1_check(t_data *info);
void	cmd2_check(t_data *info);

//managing_files
void	managing_process(t_data *info, char **env);
void	open_files(char **argv, t_data *info, char **env);

//check_arguments
void	check_arguments(char **argv);

#endif
