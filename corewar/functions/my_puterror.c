/*
** my_putstr.c for my_putstr in /home/borel_d/Documents/Lab-JV/Aeroblast/functions
**
** Made by fabien borel
** Login   <borel_d@epitech.net>
**
** Started on  Thu Mar 27 16:16:11 2014 fabien borel
** Last update Tue Apr  8 14:14:40 2014 fabien borel
*/

#include	<unistd.h>

char		my_puterror(char *str)
{
  int		i;

  i = -1;
  while (str[++i] != 0);
  return (write(2, str, i));
}
