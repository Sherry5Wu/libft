#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#if 0
//ft_isalpha, return 1 if the character is alpha; otherwise return 0;
int main(void)
{
    int a;
    int b;
    int c;
    int d;

    a = 'a';
    b = 'C';
    c = ' ';
    d = 2;
    printf("the return of a =%d\n", ft_isalpha(a));
    printf("the return of b =%d\n", ft_isalpha(b));
    printf("the return of c =%d\n", ft_isalpha(c));
    printf("the return of d =%d\n", ft_isalpha(d));
    return (0);
}
#endif

#if 0 //ft_isdigit, return 1 if the character is digit; otherwise return 0;
int main(void)
{
    char a;
    char b;
    char c;
    char d;

    a = '0';
    b = '9';
    c = ' ';
    d = 'a';
    printf("Own a -> %d\n", ft_isdigit(a));
    printf("system a -> %d\n", isdigit(a));
    printf("Own b -> %d\n", ft_isdigit(b));
    printf("Own c -> %d\n", ft_isdigit(c));
    printf("System c -> %d\n", isdigit(c));
    printf("Own d -> %d\n", ft_isdigit(d));
    return (0);
}
#endif

#if 0 //ft_isalnum, return 1 if the character is alpha or number; otherwise return 0;
int main(void)
{
    char a;
    char b;
    char c;
    char d;
    char e;
    char f;

    a = '0';
    b = '9';
    c = ' ';
    d = 'a';
    e = 'A';
    f = '#';
    printf("Own a -> %d\n", ft_isalnum(a));
    printf("system a -> %d\n", isalnum(a));
    printf("Own b -> %d\n", ft_isalnum(b));
    printf("Own c -> %d\n", ft_isalnum(c));
    printf("System c -> %d\n", isalnum(c));
    printf("Own d -> %d\n", ft_isalnum(d));
    printf("Own e -> %d\n", ft_isalnum(e));
    printf("Own f -> %d\n", ft_isalnum(f));
    printf("System f -> %d\n", isalnum(f));
    return (0);
}
#endif

#if 0 //ft_isascii, return 1 if the character is in ascii; otherwise return 0;
int main(void)
{
    char a;
    char b;
    int c;
    int d;

    a = 0;
    b = 127;
    c = 128;
    d = 130;

    printf("Own a -> %d\n", ft_isascii(a));
    printf("system a -> %d\n", isascii(a));
    printf("Own b -> %d\n", ft_isascii(b));
    printf("system b -> %d\n", isascii(b));
    printf("Own c -> %d\n", ft_isascii(c));
    printf("system c -> %d\n", isascii(c));
    printf("Own d -> %d\n", ft_isascii(d));
    printf("system d -> %d\n", isascii(d));
    
    return (0);
}
#endif

#if 0 //ft_isprint, return 1 if the character is printable; otherwise return 0;
int main(void)
{
    char a;
    char b;
    int c;
    int d;
    int e;

    a = 31;
    b = 126;
    c = 127;
    d = 128;
    e = 50;

    printf("Own a -> %d\n", ft_isprint(a));
    printf("system a -> %d\n", isprint(a));
    printf("Own b -> %d\n", ft_isprint(b));
    printf("system b -> %d\n", isprint(b));
    printf("Own c -> %d\n", ft_isprint(c));
    printf("system c -> %d\n", isprint(c));
    printf("Own d -> %d\n", ft_isprint(d));
    printf("system d -> %d\n", isprint(d));
    printf("Own e -> %d\n", ft_isprint(e));
    printf("system e -> %d\n", isprint(e));
    
    return (0);
}
#endif
#if 0
// ft_strlen. return the lenght of the passed string;
int main(void)
{
    const char *str1;
    const char *str2;
    const char *str3;
    


    str1 = "";
    str2 = "Jingjing Wu";
    str3 = "@   $%^";


    printf("Own str1= %zu\n", ft_strlen(str1));
    printf("system str1= %zu\n\n", strlen(str1));
    printf("Own str2= %zu\n", ft_strlen(str2));
    printf("system str2= %zu\n", strlen(str2));
    printf("Own str3= %zu\n", ft_strlen(str3));
    printf("system str3= %zu\n", strlen(str3));
    
    return (0);
}
#endif

#if 0
// ft_memset. return a void pointer that point to the start of the string;
int main(void)
{
    char str1[50] = "What a beautiful day!";
    char str2[50] = "What a beautiful day!";
    int arr1[5];
    int arr2[5];
    int i;

    printf("Original str= %s\n", str1);
    printf("Own str= %s\n", ft_memset(str1, '&', 2));
    printf("system str= %s\n\n", memset(str2, '&', 2));
    
    memset(arr1, 0, sizeof(arr1));
    printf("System: initialized arr=");
    for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    {
       printf("%d", arr1[i]);
    }
    printf("\n");
    
    ft_memset(arr2, 0, sizeof(arr2));
    printf("Own: initialized arr=");
    for (i = 0; i < sizeof(arr2)/sizeof(arr2[0]); i++)
    {
       printf("%d", arr2[i]);
    }
    printf("\n");
    
    return (0);
}
#endif

#if 0 // ft_bzero. initialize a char array to null or digital array to 0;
int main(void)
{
    char str1[5] = "What";
    char str2[5] = "What";
    int arr1[4];
    int arr2[4];
    int i;

    printf("Original str= %s\n", str1);
    ft_bzero(str1, sizeof(str1));
    printf("Own str= %s\n", str1);
    bzero(str2, sizeof(str2));
    printf("system str= %s\n\n", str2);
    
    bzero(arr1, sizeof(arr1));
    printf("System: initialized arr=");
    for (i = 0; i < sizeof(arr1)/sizeof(arr1[0]); i++)
    for (i = 0; i < 4; i++)
    {
       printf("%d", arr1[i]);
    }
    printf("\n");

    ft_bzero(arr2, sizeof(arr2));
    printf("Own: initialized arr=");
    for (i = 0; i < 4; i++)
    {
       printf("%d", arr2[i]);
    }
    printf("\n");
    
    return (0);
}
#endif

#if 0 // ft_memcpy;
int main(void)
{
    const char  src[50] = "There are so many functions!";
    char        dest[50] = "What!!";
    char        dest1[50] = "What!!";
    char        dest2[50] = "What!!";
    char        dest3[50] = "What!!";
    char        dest4[50] = "What!!";
    char        dest5[50] = "What!!";

    printf("Original dest= %s\n", dest);
    printf("src= %s\n\n", src);
    ft_memcpy(dest, src, ft_strlen(src)+1);
    printf("Own(copy all) dest= %s\n", dest);
    memcpy(dest1, src, ft_strlen(src)+1);
    printf("system(copy all) dest= %s\n\n", dest1);
    
    ft_memcpy(dest2, src, 3);
    printf("Own(copy 3 chars) dest= %s\n", dest2);
    memcpy(dest3, src, 3);
    printf("system(copy 3 chars) dest= %s\n\n", dest3);
    
    ft_memcpy(dest4, src, 0);
    printf("Own(copy 0 chars) dest= %s\n", dest4);
    memcpy(dest5, src, 0);
    printf("system(copy 0 chars) dest= %s\n\n", dest5);
    
    return (0);
}
#endif
#if 0
// ft_memmove;
int main(void)
{
//    char    src[] = "lorem ipsum dolor sit amet";
    char    src1[] = "1234567890";
    char    src2[] = "1234567890";
    char    *dest, *dest1;

    dest = src1 + 1;
    dest1 = src1 + 1;
    printf("Original dest= %s, dest1=%s\n", dest, dest1);
    printf("src=%s\n", src1);

    printf("Own dest= %s\n", ft_memmove(dest, src1, 4));
    printf("system dest= %s\n\n", memmove(dest1, src2, 4));
 
    return (0);
}
#endif

#if 0
// ft_strlcpy, the return value is the length of src;
int main(void)
{
    const char  src[30] = "abcde";
    char        dest[30] = "love";
    char        dest1[30] = "love";
    int         size[4]= {0,2,8};
    size_t re_own, re_sys;
    int i,n;
    
    printf("Original dest= %s\nsrc= %s\n\n", dest, src);
    for (i = 0; i < 3; i++)
    {
        n = size[i];
        re_own = ft_strlcpy(dest, src,n);
        printf("Own(size=%d) return=%zu, dest= %s\n",n, re_own, dest);
        re_sys = strlcpy(dest1, src,n);
        printf("system(size=%d) return=%zu, dest= %s\n\n", n, re_sys, dest1);
        strcpy(dest, "love");
        strcpy(dest1, "love");
    }
    
}
#endif

//#if 0
// ft_strlcat, the return value is the initial length of dst + the length of src;
int main(void)
{
    // char * src = (char *)"AAAAAAAAA";
    // char dest[] = "B";
    // char dest1[] = "B";
    char    dest2[30], dest3[30];
    memset(dest2, 0, 30);
    memset(dest3, 0, 30);
    // printf("Sys return=%zu, dest= %s\n", strlcat(dest1, src, 1), dest1);
    // printf("Own return=%zu, dest= %s\n", ft_strlcat(dest, src, 1), dest);

    printf("Sys return=%zu, dest= %s\n", strlcat(dest2, "123",0), dest2);
    printf("Own return=%zu, dest= %s\n", ft_strlcat(dest3, "123", 0), dest3);
    return (0);
}
//#endif