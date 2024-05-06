#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#if 0
//ft_substr()
int main(void)
{
    const char str[10] = "abcdefg";
    const char *str1 = "";
    unsigned int    start[4] = {0, 1 , 3, 7};
    size_t         len[4] = {3, 5, 0, 2};
    int i;
   
    // str is empty case.
    printf("str=%s, start=%d, len=%zu\nsubstr=%s\n\n", str1, start[0], len[0], ft_substr(str1, start[0], len[0]));
    
    for (i =0; i < 4; i++)
    printf("\nstr=%s, start=%d, len=%zu\nsubstr=%s\n\n", str, start[i], len[i], ft_substr(str, start[i], len[i]));
    return (0);
}
#endif

#if 0
//ft_strjoin()
int main(void)
{
    const char *s1[5] = {"hello", "", "", "jingjing", "Happy"};
    const char *s2[5] = {"-world", "", "wu", "", "@Day"};
    int i;
   
    for (i = 0; i < 5; i++)
    {
        printf("s1=%s, s2=%s\njoined_str=%s\n\n", s1[i], s2[i], ft_strjoin(s1[i], s2[i]));
    }
    return (0);
}
#endif

//#if 0
//ft_strtrim()
int main(void)
{
//     const char *str[6] = {"##He##", "wnihaow jingjingw", "45he5llo45", "", "hello", ""};
//     const char *set[6] = {"#", "w", "45", "", "", "H"};
//    int i;
   
//     for (i = 0; i < 6; i++)
//         printf("str=%s, set=%s\ntrimed_str=%s\n\n", str[i], set[i], ft_strtrim(str[i], set[i]));
//    printf("str=%s, set=%s\ntrimed_str=%s\n\n", str[0], set[0], ft_strtrim(str[0], set[0]));

    char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
    char s2[] = "lorem ipsum dolor sit amet";
    printf("Own trimed str=\n%s\n", ft_strtrim(s1, " "));
    printf("Own trimed str=\n%s\n", ft_strtrim(s2, "te"));
    return (0);
}
//#endif

#if 0
//ft_split()
void ft_putstr(char *str)
{
    while (*str)
        write(1, str++, 1);
}

int main(void)
{
     char    **result;
    // const char *str[5] = {"happy-world", "OHIONI", "", "monday", "#happy#every#day#"};
    // char c[5] = {'-','O','w','\0','#'};
    // int i, j;
   
    // j = 0;
    // for (i = 0; i < 5; i++)
    // {
    //     printf("str=%s, c=%c\n", str[i], c[i]);
    //     result = ft_split(str[i], c[i]);
    //     while (result[j])
    //     {
    //         ft_putstr(result[j]);
    //         write(1, "\n", 1);
    //         j++;
    //     }
    //     write(1, "\n", 1);
    // } 
    const char *str = "ni-hao-jing-jing";
    char    c = '-';
    int j = 0;

    result = ft_split(str, c);  
    while (result[j])
    {
        ft_putstr(result[j]);
        write(1, "\n", 1);
        j++;
    } 
    return (0);
}
#endif

#if 0
// ft_itoa()
int main(void)
{
    int nb[5] = {0, 568, -7895, -2147483648, 2147483647};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("nb[%d]=%d\n", i, nb[i]);
        printf("str[%d]=%s\n\n", i, ft_itoa(nb[i]));
    }
 //   printf("str=%s\n",ft_itoa(-2147483648));
    return (0);
}
#endif

#if 0
// ft_strmapi()
char    uppercase(unsigned int i, char c)
{
    if (i % 2 == 0)
        return toupper(c);
    else
        return tolower(c);
}

int main()
{
    char const *str[4] = {"hive helsinki", "1245#$$", "", "MONDAY"};

    for (int i =0; i < 4; i++)
        printf("after str[%d]=%s\n\n", i, ft_strmapi(str[i], uppercase));
    return (0);
}
#endif

#if 0
//ft_striteri()
void    print_out(unsigned int i, char *c)
{
    (void )i;
    printf("c=%s\n", c);
}

int main()
{
    char *str[3] = {"hive helsinki", "1245#$$", ""};

    for (int i =0; i < 3; i++)
    {
        ft_striteri(str[i], print_out);
    }   
    return (0);
}
#endif