#include "my_lib.h"

void	my_welcome_msg(name)
{
  my_putstr("\n\n---------------------------------------------------\n");
  my_putstr("\033[0;37m***************************************************");
  my_putstr("\n**********\033[0m");
  my_putstr("\033[1;37mWelcome ");
  my_putstr(name);
  my_putstr(", a new adventure will start\033[0m\033[0;37m**********\n");
  my_putstr("***************************************************\033[0m");
  my_putstr("\n---------------------------------------------------\n");
  my_putstr("\033[1;37m                        ||\n");
  my_putstr("\033[1;37m                        ||\033[0m\n");
  my_putstr("\033[1;37m                        ||\n");
  my_putstr("\033[1;37m                        ||\033[0m\n");
}