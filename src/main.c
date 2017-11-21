/*
** main.c for ID3 in /home/cyborgforever/Github/ID3
** 
** Made by Julien Chassard
** Login   <julien.chassard@epitech.eu>
** 
** Started on  Mon Nov 20 19:25:36 2017 Julien Chassard
** Last update Tue Nov 21 08:21:33 2017 Julien Chassard
*/

#include "ID3.h"

int main(UNUSED int argc, char **argv) {
  t_id3v1	metadatas;

  if (parse(argv[1], &metadatas) == FAILURE)
    return (FAILURE);

  if (is_valid(&metadatas) == FAILURE)
    return (FAILURE);

  print_infos(&metadatas);
  return (SUCCESS);
}
