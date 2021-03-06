/*
** need.c for tetris in /home/benoit.pingris/delivery/PSU_2016_tetris
** 
** Made by benoit pingris
** Login   <benoit.pingris@epitech.net>
** 
** Started on  Tue Mar 14 12:00:08 2017 benoit pingris
** Last update Thu Mar 16 14:07:17 2017 benoit pingris
*/

#include <stdlib.h>
#include "my.h"
#include "spe.h"

int	any_key(int ret)
{
  if (press_key(1, 1, 0, 0) == SPECIAL_ERR)
    return (ERROR);
  return (ret);
}

int	pause_key(char *s, char *key)
{
  if (press_key(1, 1, 0, 0) == SPECIAL_ERR)
    return (ERROR);
  while ((my_strstr(s, key)) != 0)
    if (press_key(0, 1, 0, 0) == SPECIAL_ERR)
      return (ERROR);
  if (press_key(1, 1, 0, 0) == SPECIAL_ERR)
    return (ERROR);
  return (SUCCESS);
}

int	enlarge_map(int col, int line)
{
  if (LINES < line + 1 || COLS < 72)
    return (ERROR);
  return (SUCCESS);
}
