/*
** print_infos.c for ID3 in /home/cyborgforever/Github/ID3
** 
** Made by Julien Chassard
** Login   <julien.chassard@epitech.eu>
** 
** Started on  Tue Nov 21 07:10:28 2017 Julien Chassard
** Last update Tue Nov 21 08:43:00 2017 Julien Chassard
*/

#include "ID3.h"

void	print_infos(t_id3v1 *metadatas)
{
  printf("Title : %.30s\n", metadatas->title);
  printf("Author : %.30s\n", metadatas->author);
  printf("Album : %.30s\n", metadatas->album);
  printf("Year : %.4s\n", metadatas->year);
  printf("Comment : %.30s\n", metadatas->comment);
}
