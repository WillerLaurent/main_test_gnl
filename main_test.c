/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwiller <lwiller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 09:51:18 by lwiller           #+#    #+#             */
/*   Updated: 2020/12/16 08:33:27 by lwiller          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define BUFFER_SIZE 10


int		main(int ac, char **av)
{
	char	*line;
	int		fd;
	int		i;
	int		j;

	(void)ac;
	(void)av;
	line = malloc(sizeof(char) * 1);
	i = 1;
	fd = open("texte", O_RDONLY);
	//fd = 0;
	while ((j = get_next_line(fd, &line)) > 0)
	{
		printf("%d Ligne %d : %s\n", j, i, line);
		i++;
		free(line);
		//line = NULL;
	}
	printf("%d Ligne %d : %s\n", j, i, line);
	free(line);
	close(fd);
	//while(1)
}
