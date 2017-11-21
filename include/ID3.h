/*
** ID3.h for ID3 in /home/cyborgforever/Github/ID3
** 
** Made by Julien Chassard
** Login   <julien.chassard@epitech.eu>
** 
** Started on  Mon Nov 20 19:26:26 2017 Julien Chassard
** Last update Tue Nov 21 08:25:29 2017 Julien Chassard
*/

#ifndef ID3_H_

# define ID3_H_
# define SUCCESS	0
# define FAILURE	1
# define UNUSED		__attribute__ ((unused))
# define PACKED		__attribute__ ((packed))
# define COLOR_RED	"\x1b[31m"
# define COLOR_GREEN	"\x1b[32m"
# define COLOR_YELLOW	"\x1b[33m"
# define COLOR_BLUE	"\x1b[34m"
# define COLOR_MAGENTA	"\x1b[35m"
# define COLOR_CYAN	"\x1b[36m"
# define COLOR_RESET	"\x1b[0m"

# include <stdio.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <errno.h>

typedef struct PACKED	s_id3v1	{
  char	magic[3];
  char	title[30];
  char	author[30];
  char	album[30];
  char	year[4];
  char	comment[30];
}			t_id3v1;

int	parse(char *filename, t_id3v1 *metadatas);
void	print_infos(t_id3v1 *metadatas);
int	is_valid(t_id3v1 *metadatas);

#endif /* ID3_H_ */
