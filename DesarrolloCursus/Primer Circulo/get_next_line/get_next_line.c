/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ragodoy- <ragodoy-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 11:27:32 by ragodoy-          #+#    #+#             */
/*   Updated: 2024/05/27 14:10:11 by ragodoy-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
    static char buffer[][MAX_OPEN];
    char *line;

    if (fd < 0 || BUFFER_SIZE == 0)
        return (NULL);
    line = read_line();
}

static char	*ft_read_line(int fd, char *buffer)
{
	char	*tmp;
	ssize_t	read_bytes;

	tmp = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	read_bytes = 1;
	while (read_bytes != 0 && !ft_strchr(buffer, '\n'))
	{
		read_bytes = read(fd, tmp, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(buffer);
			free(tmp);
			return (NULL);
		}
		tmp[read_bytes] = '\0';
		buffer = ft_strjoin(buffer, tmp);
	}
	free(tmp);
	return (buffer);
}