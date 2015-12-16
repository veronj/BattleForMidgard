/*
** main.c for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 09:27:18 2015 VERON Jean-baptiste
** Last update Wed Dec 16 09:37:07 2015 VERON Jean-baptiste
*/

#include <unistd.h>
#include <stdio.h>
#include "my_lib.h"

int	main(int argc, char **argv)
{
  if (argc == 3)
    {
      if (my_strcmp(argv[1], "-n") == 0)
	{
	  my_putstr("Votre aventure commence ");
	  my_putstr(argv[2]);
	  my_putstr("\n");
	}
      else
	my_putstr("Usage : ./sta -n your_name\n");
    }
  else
    my_putstr("Usage : ./sta -n your_name\n");
  return (0);
}
