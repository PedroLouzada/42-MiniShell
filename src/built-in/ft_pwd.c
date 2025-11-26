/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pwd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomunoz <jomunoz@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 19:24:58 by jomunoz           #+#    #+#             */
/*   Updated: 2025/11/19 19:29:23 by jomunoz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int	ft_pwd(t_map *env, t_exec *exec)
{
	char	*path;

	path = getcwd(NULL, 0);
	if (path == NULL)
	{
		path = env->get(env, "PWD");
		if (!path || path[0] == '\0')
		{
			fprintf(stderr,
				"bash: pwd: error retrieving current directory: getcwd: %s\n",
				strerror(errno));
			return (1);
		}
		write(exec->out, path, ft_strlen(path));
		write(exec->out, "\n", 1);
	}
	else
	{
		write(exec->out, path, ft_strlen(path));
		write(exec->out, "\n", 1);
		free(path);
	}
	return (0);
}
