/*
** functions.h for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:48:04 2015 VERON Jean-baptiste
** Last update Wed Dec 16 13:36:00 2015 VERON Jean-baptiste
*/

#ifndef FUNCTIONS_H_
# define FUNCTIONS_H_

typedef struct  s_creature
{
  char          *name;
  int           lvl;
  int           pv;
  int           pvmax;
  int           pm;
  int           pmmax;
}               t_creature;


t_creature	*getCreature();
void		my_welcome_msg(char *name);
int			choices();
int	start(char *name);

#endif /* FUNCTIONS_H_ */
