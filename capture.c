/*
** capture.c for  in /home/jb-veron/C/Battle/BattleForMidgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 18:31:20 2015 VERON Jean-baptiste
** Last update Thu Dec 17 12:00:08 2015 VERON Jean-baptiste
*/

#include <string.h>
#include <stdlib.h>
#include "functions.h"
#include "my_lib.h"

int	capture(t_creature **creature)
{
  t_creature *cap;
  int rnd;
  t_team *team;
  team = malloc(sizeof(*team));
  if (team == 0)
    {
      my_putstr("Erreur allocation mémoire.");
      return (0);
    }
  team = NULL;
  cap = *creature; 
  my_putstr("You try to catch ");
  my_putstr(cap->name);
  my_putstr("\n");
  rnd = rand()%99 + 1;
  if (rnd <= 33)
    {
      my_putstr("Well done! \n");
      my_putstr(cap->name);
      my_putstr(" joined you and your army grow stronger.\n");
      add_crea(&team, &cap);
      aff_list(team);
      return (-1);
    }
  else
    my_putstr("FAIL");
  return (0);
}

int             add_crea(t_team **team, t_creature **creature)
{
  t_creature	*node;
  t_team	*new_team;
  new_team = malloc(sizeof(*new_team));
  node = malloc(sizeof(*node));
  if (node == 0)
    {
      my_putstr("Erreur allocation mémoire.");
      return (0);
    }
  new_team->next = *team;
  node->name =(*creature)->name;
  node->lvl = (*creature)->lvl;
  node->pv = (*creature)->pv;
  node->pvmax = (*creature)->pvmax;
  node->pm = (*creature)->pm;
  node->pmmax = (*creature)->pmmax;
  new_team->crea = node;
  *team = new_team;
  return (0);
}

int            aff_list(t_team *team)
{
  t_team       *tmp;

  tmp = team;
  my_putstr("\nYour army : ");
  while (tmp)
    {
      my_putstr(tmp->crea->name);
      tmp = tmp->next;
    }
  return (0);
}	      
