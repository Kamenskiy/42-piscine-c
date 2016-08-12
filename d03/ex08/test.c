/* atoi example */
#include <stdio.h>      /* printf, fgets */
#include <stdlib.h>     /* atoi */

int ft_atoi(char *str);

int main ()
{
    int i;
    char buffer[256];
    printf ("Enter a number: ");
    fgets (buffer, 256, stdin);
    i = ft_atoi(buffer);
    printf ("Your atoi returns %d.\n",i);
    i = atoi(buffer);
    printf ("Original atoi returns %d.\n",i);
    printf("%d \n" ,ft_atoi("-6fghjfghj"));
    printf("%d \n" ,atoi("-6fghjfghj"));
    printf("%d\n", ft_atoi("+5255jfg       "));
    printf("%d\n", atoi("+5255jfg       "));
    printf("%d\n", ft_atoi("5856hhj"));
    printf("%d\n", atoi("5856hhj"));
    printf("%d\n", ft_atoi("---68789"));
    printf("%d\n", atoi("---68789"));
    printf("%d\n", ft_atoi("004534600     587"));
    printf("%d\n", atoi("004534600     587"));
    printf("%d\n", ft_atoi(" +587"));
    printf("%d\n", atoi("  +587"));
    printf("%d\n", ft_atoi("-56876887"));
    printf("%d\n", atoi("-56876887"));
    printf("%d\n", ft_atoi("hhfgh56876887"));
    printf("%d\n", atoi("hhfgh56876887"));
    printf("%d\n", ft_atoi(" +-587"));
    printf("%d\n", atoi("  +-587"));
    printf("%d\n", ft_atoi("       8876887"));
    printf("%d\n", atoi("       8876887"));
    return 0;
}