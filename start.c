/*
** start.c for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:50:58 2015 VERON Jean-baptiste
** Last update Wed Dec 16 12:45:23 2015 VERON Jean-baptiste
*/

#include "functions.h"
#include "my_lib.h"

int		start(char *name)
{
  t_creature	*creature;
  char		*choice; 
  
  creature = NULL;
  my_welcome_msg(name);
  creature = getCreature();  
  my_putstr("Vous rencontrez un ennemi : ");
  my_putstr(creature->name);
  my_putstr("\nQue faites vous?\nFuir(help me !!!), Capturer(magic catch), Quitter le jeu(quit).\n");
  choice = readLine();
  if (my_strcmp(choice, "quit") == 0)
    {
      my_putstr("Au revoir.\n");
      return (0);
    }
  else if (my_strcmp(choice, "help me !!!") == 0)
      my_putstr("FUIR TODO\n");
  else if (my_strcmp(choice, "magic catch") == 0)
      my_putstr("CAPTURE TODO\n");
  else
      return (0);
  return (0);
}
