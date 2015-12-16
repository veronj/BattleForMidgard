/*
** my_lib.h for  in /home/jb-veron/C/Midgard
** 
** Made by VERON Jean-baptiste
** Login   <veron_j@etna-alternance.net>
** 
** Started on  Wed Dec 16 09:37:41 2015 VERON Jean-baptiste
** Last update Wed Dec 16 12:46:31 2015 VERON Jean-baptiste
*/

#ifndef MY_LIB_H_
# define MY_LIB_H_

char	*readLine();
void    my_putchar(char c);
int     my_isneg(int n);
void    my_put_nbr(int nb);
void    my_swap(int *a, int *b);
void    my_putstr(char *str);
int     my_strlen(char *str);
int     my_getnbr(char *str);
char    *my_strcpy(char *dest, char *src);
char    *my_strncpy(char *dest, char *src, int n);
int     my_strcmp(char *s1, char *s2);
int     my_strncmp(char *s1, char *s2, int n);
char    *my_strcat(char *str1, char *str2);
char    *my_strncat(char *str1, char *str2, int n);
char    *my_strstr(char *str, char *to_find);
char    *my_strdup(char *str);
char    **my_str_to_wordtab(char *str);

#define RESET   "\033[0m"
#define BLACK   "\033[0m\033[30m"      /* Black */
#define RED     "\033[0m\033[31m"      /* Red */
#define GREEN   "\033[0m\033[32m"      /* Green */
#define YELLOW  "\033[0m\033[33m"      /* Yellow */
#define BLUE    "\033[0m\033[34m"      /* Blue */
#define MAGENTA "\033[0m\033[35m"      /* Magenta */
#define CYAN    "\033[0m\033[36m"      /* Cyan */
#define WHITE   "\033[0m\033[37m"      /* White */
#define BOLDBLACK   "\033[0m\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[0m\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[0m\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[0m\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[0m\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[0m\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[0m\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[0m\033[1m\033[37m"      /* Bold White */


#endif /* MY_LIB_H_  */
