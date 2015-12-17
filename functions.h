/*
** functions.h for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 10:48:04 2015 VERON Jean-baptiste
** Last update Thu Dec 17 11:44:31 2015 VERON Jean-baptiste
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

typedef struct s_team
{
  struct s_team         *next;
  struct s_creature     *crea;
}			t_team;

typedef struct		s_player
{
  char			*name;
  struct t_team         *team;
}			t_player;
 

int aff_list(t_team *team);

int add_crea(t_team **team, t_creature **creature);
t_creature	*getCreature();
void		my_welcome_msg(char *name);
int capture(t_creature **creature);
int			choices();
int	start(char *name);

#endif /* FUNCTIONS_H_ */
