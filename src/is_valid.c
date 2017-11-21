/*
** is_valid.c for ID3 in /home/cyborgforever/Github/ID3
** 
** Made by Julien Chassard
** Login   <julien.chassard@epitech.eu>
** 
** Started on  Tue Nov 21 08:13:09 2017 Julien Chassard
** Last update Tue Nov 21 08:43:36 2017 Julien Chassard
*/

#include "ID3.h"

int	is_valid(t_id3v1 *metadatas)
{
  if (strncmp(metadatas->magic, "TAG", 3) != 0)
    {
      printf("[%s-%s] Invalid magic\n", COLOR_RED, COLOR_RESET);
      return (FAILURE);
    }

  return (SUCCESS);
}
