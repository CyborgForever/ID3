/*
** main.c for ID3 in /home/cyborgforever/Github/ID3
** 
** Made by Julien Chassard
** Login   <julien.chassard@epitech.eu>
** 
** Started on  Mon Nov 20 19:25:36 2017 Julien Chassard
** Last update Tue Nov 21 08:45:51 2017 Julien Chassard
*/

#include "ID3.h"

int main(int argc, char **argv) {
  t_id3v1	metadatas;

  if (argc == 1 || argc > 2)
    {
      printf("[%s-%s] Invalid number of arguments\n", COLOR_RED, COLOR_RESET);
      printf("USAGE:\n\t%s\t<music_filename>\n", argv[0]);
      return (FAILURE);
    }
  if (parse(argv[1], &metadatas) == FAILURE)
    return (FAILURE);

  if (is_valid(&metadatas) == FAILURE)
    return (FAILURE);

  print_infos(&metadatas);
  return (SUCCESS);
}
