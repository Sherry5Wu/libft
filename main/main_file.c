#include "libft.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h> 

#if 0
//ft_putchar_fd()
int main(void)
{
    int    fd;
    char    *c = "flower";

    fd = open("flower.txt", O_WRONLY);
    if (fd == -1)
    {
        perror("Error opening the file.");
        return (1);
    }
    while (*c)
    {
        ft_putchar_fd(*c, fd);
        c++;
    }
    close(fd);
    return (0);
}
#endif

#if 0
//ft_putstr_fd(), ft_putendl_fd()
int main(void)
{
    int    fd;
    char    *c = "";

    fd = open("flower.txt", O_WRONLY);
    if (fd == -1)
    {
        perror("Error opening the file.");
        return (1);
    }
 //   ft_putstr_fd(c, fd);
    ft_putendl_fd(c, fd);
    close(fd);
    return (0);
}
#endif

//ft_putnbr_fd()
int main(void)
{
    int    fd;
    int    num[3] = {0, -2147483648, 2147483647};

    fd = open("flower.txt", O_WRONLY);
    if (fd == -1)
    {
        perror("Error opening the file.");
        return (1);
    }
    for (int i = 0; i < 3; i++)
    {
        ft_putnbr_fd(num[i], fd);
    }
    close(fd);
    return (0);
}