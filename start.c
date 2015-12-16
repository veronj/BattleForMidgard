/*
** start.c for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:50:58 2015 VERON Jean-baptiste
** Last update Wed Dec 16 13:40:09 2015 VERON Jean-baptiste
*/

#include <unistd.h>
#include "functions.h"
#include "my_lib.h"

int		start(char *name)
{
  t_creature	*creature;
  
  creature = NULL;
  my_welcome_msg(name);
  creature = getCreature();
  my_putstr(BOLDRED);
  my_putstr("Vous rencontrez un ennemi : ");
  my_putstr(RED);
  my_putstr(creature->name);
  choices();
  return (0);
}

int	choices()
{
  int		test;
  char		*choice;
  
  my_putstr(BOLDWHITE);
  do {
	test = 1;
	my_putstr("\nQue faites vous?\nFuir(help me !!!), Capturer(magic catch), Quitter le jeu(quit).\n");
	my_putstr(BOLDBLUE);
	choice = readLine();
	my_putstr(BOLDWHITE);
	if (my_strcmp(choice, "quit") == 0)
    {
      my_putstr("\n\nThanks, see you soon!\n");
    }
	else if (my_strcmp(choice, "help me !!!") == 0)
	  my_putstr("FUIR TODO\n");
	else if (my_strcmp(choice, "magic catch") == 0)
	  my_putstr("CAPTURE TODO\n");
	else {
	  test = 0;
	  my_putstr("Wrong answer ...\n");
	}
  } while (test != 1);
  my_putstr(RESET);
  return (0);
}