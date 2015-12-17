/*
** start.c for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:50:58 2015 VERON Jean-baptiste
** Last update Thu Dec 17 12:01:25 2015 VERON Jean-baptiste
*/

#include <unistd.h>
#include "functions.h"
#include "my_lib.h"

int		start(char *name)
{
  int			state;
  t_creature	*creature;
  
  creature = NULL;
  my_welcome_msg(name);
  state = 2;
  while (state != -1)
  {
	creature = getCreature();
	my_putstr(BOLDRED);
	my_putstr("\n\nAn enemy is facing you : ");
	my_putstr(RED);
	my_putstr(creature->name);
	state = choices();
	if (state == -1)
    {
      my_putstr("\n\nThanks, see you soon!\n");
    }
	else if (state == 0)
	  my_putstr("U RUUUUUUUN!\n");
	else if (state == 1)
	  state = capture(&creature);
  }
  return (0);
}

int		choices()
{
  int		test;
  char		*choice;
  
  my_putstr(BOLDWHITE);
  do {
	test = 1;
	my_putstr("\nWhat are you gonna do?\nEscape(help me !!!), Try to catch it(magic catch), Quit the game(quit).\n");
	my_putstr(BOLDBLUE);
	choice = readLine();
	my_putstr(BOLDWHITE);
	if (my_strcmp(choice, "quit") == 0)
	  return (-1);
	else if (my_strcmp(choice, "help me !!!") == 0)
	  return (0);
	else if (my_strcmp(choice, "magic catch") == 0)
	  return (1);
	else {
	  test = 0;
	  my_putstr("Wrong answer ...\n");
	}
  } while (test != 1);
  my_putstr(RESET);
  return (-1);
}
