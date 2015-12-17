/*
** capture.c for  in /home/jb-veron/C/Battle/BattleForMidgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 18:31:20 2015 VERON Jean-baptiste
** Last update Wed Dec 16 19:43:23 2015 VERON Jean-baptiste
*/

#include <string.h>
#include <stdlib.h>
#include "functions.h"
#include "my_lib.h"

int	capture(t_creature **creature)
{
  t_creature *cap;
  int rnd;

  cap = *creature;
 
  my_putstr("Tentative de capture de ");
  my_putstr(cap->name);
  my_putstr("\n");
  rnd = rand()%99 + 1;
  if (rnd <= 33)
    {
      my_putstr("Bravo! \n");
      my_putstr(cap->name);
      my_putstr(" a rejoint votre armée.\n");
    }
  else
    my_putstr("FAIL");
  return (0);
}
