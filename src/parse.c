/*
** parse.c for ID3 in /home/cyborgforever/Github/ID3/src
** 
** Made by Julien Chassard
** Login   <julien.chassard@epitech.eu>
** 
** Started on  Mon Nov 20 19:31:23 2017 Julien Chassard
** Last update Tue Nov 21 07:32:24 2017 Julien Chassard
*/

#include "ID3.h"

static int init(char *filename, t_id3v1 *metadatas, int *fd) {

  if ((*fd = open(filename, O_RDONLY)) < 0)
      return (FAILURE);

  memset(metadatas, 0, sizeof(t_id3v1));
  return (SUCCESS);
}

int	parse(char *filename, t_id3v1 *metadatas) {
   int	fd	= -1;

   if (init(filename, metadatas, &fd) == FAILURE)
     return (FAILURE);

   if (lseek(fd, -128, SEEK_END) < 0) {
     close(fd);
     return (FAILURE);
   }
   
   if (read(fd, metadatas, sizeof(t_id3v1)) < (unsigned int) sizeof(t_id3v1))
     {
       close(fd);
       return (FAILURE);
     }
   return (SUCCESS);
}
