#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#if 0
//ft_toupper
int main(void)
{
   int i = 0;
   char str[50] = "Tutorials 123$# Point";
   
   while(str[i])
   {
      putchar (toupper(str[i]));
      i++;
   }
    return (0);
}
#endif

#if 0 //ft_tolower()
int main(void)
{
   int i = 0;
   char str[50] = "TUTORIALS 12345%$#@ POINT";
   
   while(str[i])
   {
      putchar (ft_tolower(str[i]));
      i++;
   }
    return (0);
}
#endif

//#if 0
//ft_strchr()
int main ()
{
    // test part 1
    // const char str[] = "https://www.tutorialspoint.com";
    // const char ch = 'o';
    // const char ch1 = 'H';
    // char *ret, *ret1, *ret2;
 
    // ret = ft_strchr(str, ch);
    // ret1 = strchr(str, ch1);
    // ret2 = ft_strchr(str, ch1);
    
    // printf("Original string= %s\n\n", str);
    // printf("String after '%c' is = %s\n", ch, ret);
    // printf("System-String after '%c' is = %s\n", ch1, ret1);
    // printf("Own-String after '%c' is = %s\n", ch1, ret2);

    //test part 2
    char    str1[] = "teste";
 //   char    str2[] = "bonjour";
    printf("Sys-String after 's' is = %s\n", strchr(str1, 1024)); 
    printf("Own-String after 's' is = %s\n", ft_strchr(str1, 1024));
 

    // printf("Sys-String after 's' is = %s\n", strchr(str2, 's'));     
    // printf("Own-String after 's' is = %s\n", ft_strchr(str2, 's'));
    return(0);
}
//#endif
#if 0 //ft_strrchr()
int main ()
{
    char	str1[] = "bonjour";
    char	str2[] = "bonjour";
    char	str3[] = "";
    char	str4[] = "";
    char	str5[] = "bonjour";
    char	str6[] = "bonjour";
    printf("Own-String is = %s\n", ft_strrchr(str1, '\0'));
    printf("Sys-String is = %s\n", strrchr(str2, '\0'));

    printf("Own-String is = %s\n", ft_strrchr(str3, '\0'));
    printf("Sys-String is = %s\n", strrchr(str4, '\0'));

    printf("Own-String is = %s\n", ft_strrchr(str5, 'o'));
    printf("Sys-String is = %s\n", strrchr(str6, 'o'));
    return(0);
}
#endif

#if 0 
//ft_strncmp()
int main ()
{
    const char str1[] = "test\200";
    const char str2[] = "test\0";
    const char str3[] = "wello";
    const char str4[] = "hello";
    int a = 6, b = 3;

 //   printf("Original str1=%s\n   str2=%s\n   str3=%s\n   str4=%s\n\n", str1, str2, str3, str4);
    printf("Own str1-str2-%d=%d\n", a, ft_strncmp(str1, str2, a));
    printf("System str1-str2-%d=%d\n\n", a, strncmp(str1, str2, a)); // return should be postive
    
    printf("Own str1-str3-%d=%d\n", b, ft_strncmp(str3, str4, b));
    printf("System str1-str3-%d=%d\n\n", b, strncmp(str3, str4, b));
    return(0);
}
#endif
#if 0
//ft_memchr()
int main ()
{
    const char str[] = "Hive-helsinki";
    const char ch = '-';
    const char ch1 = 'A';
    char *ret, *ret1, *ret2, *ret3;
    size_t   n[8] = {0, 4, 13, 15};
    int i;
    
    printf("Original string= %s\n\n", str);
    for (i = 0; i < 4; i++)
    {
        
        ret = ft_memchr(str, ch, n[i]);
        ret1 = memchr(str, ch, n[i]);
        ret2 = ft_memchr(str, ch1, n[i]);
        ret3 = memchr(str, ch1, n[i]);
        
        printf("Own-find'%c' in '%zu' byte is = %s\n", ch, n[i], ret);
        printf("System-find'%c' in '%zu' byte is = %s\n\n", ch, n[i], ret1);
        
        printf("Own-find'%c' in '%zu' byte is = %s\n", ch1, n[i], ret2);
        printf("System-find'%c' in '%zu' byte is = %s\n\n\n", ch1, n[i], ret3);
    }

    return(0);
}
#endif

#if 0
//ft_memcmp()
int main ()
{
    const char str1[] = "hello";
    const char str2[] = "healdfe";
    const char str3[] = "wello";
    const char str4[] = "hello";
    int a = 3, b = 3, c = 3;
    
    printf("Original str1=%s\n   str2=%s\n   str3=%s\n   str4=%s\n\n", str1, str2, str3, str4);
    printf("Own str1-str2-%d=%d\n", a, ft_memcmp(str1, str2, 3));
    printf("System str1-str2-%d=%d\n\n", a, memcmp(str1, str2, 3));
    
    printf("Own str1-str3-%d=%d\n", b, ft_memcmp(str1, str3, 3));
    printf("System str1-str3-%d=%d\n\n", b, memcmp(str1, str3, 3));
    
    printf("Own str1-str4-%d=%d\n", c, ft_memcmp(str1, str4, 3));
    printf("System str1-str4-%d=%d\n\n", c, memcmp(str1, str4, 3));
    return(0);
}
#endif

#if 0 //ft_strnstr()
int main ()
{
    const char *haystack = "";
    const char *needle = "hello";
    const char *haystack1 = "hello-world";
    const char *needle1 = "";
    const char *haystack2 = "hello-world";
    const char *needle2 = "hello";
    const char *haystack3 = "hello-world";
    const char *needle3 = "orl";
    const char *haystack4 = "hello";
    const char *needle4 = "hello-w";
    const char *haystack5 = "hello-world";
    const char *needle5 = "llo";
    size_t n = 3, n1 = 0, n2 = 9;

    // haystack is empty
    printf("haystack=%s\nneedle  =%s\nn=%zu\nown-return=%s\n", haystack, needle, n, ft_strnstr(haystack, needle, n));
    printf("sys-return=%s\n\n", strnstr(haystack, needle, n));
    // needle is empty
    printf("haystack=%s\nneedle  =%s\nn=%zu\nown-return=%s\n", haystack1, needle1, n, ft_strnstr(haystack1, needle1, n));
    printf("sys-return=%s\n\n", strnstr(haystack1, needle1, n));
    // n = 0
    printf("haystack=%s\nneedle  =%s\nn=%zu\nown-return=%s\n", haystack1, needle1, n, ft_strnstr(haystack2, needle2, n1));
    printf("sys-return=%s\n\n", strnstr(haystack2, needle2, n1));
    
    // ends because of n
    printf("haystack=%s\nneedle  =%s\nn=%zu\nown-return=%s\n", haystack1, needle1, n, ft_strnstr(haystack3, needle3, n2));
    printf("sys-return=%s\n\n", strnstr(haystack3, needle3, n2));
    
    // ends because of haystack ending
    printf("haystack=%s\nneedle  =%s\nn=%zu\nown-return=%s\n", haystack1, needle1, n, ft_strnstr(haystack4, needle4, n2));
    printf("sys-return=%s\n\n", strnstr(haystack4, needle4, n2));
    
    // ends because of needle ending, it means it is a happy case.
    printf("haystack=%s\nneedle  =%s\nn=%zu\nown-return=%s\n", haystack1, needle1, n, ft_strnstr(haystack5, needle5, n2));
    printf("sys-return=%s\n\n", strnstr(haystack5, needle5, n2));
    return(0);
}
#endif
#if 0
// ft-atoi
int main()
{
    const char *str[8] = {"378", "-365", "+365", "--200", "++300", "    789", "45   9", "-+2345"};
    int i;
    
    for (i = 0; i < 8; i++)
    {
        printf("str[%d]=%s\n(sys)integer=%d\n",i, str[i], atoi(str[i]));
        printf("(own)integer=%d\n\n",ft_atoi(str[i]));
    }
    return (0);
}
#endif

#if 0 //ft_calloc()
int main ()
{
    int i, n=4;
    int *a;
    char **str;


   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ )
   {
      scanf("%d",&a[i]);
   }
   if (a == NULL)
       printf("Memory allocation failed!\n");
   else
   {
       printf("The numbers entered are: ");
       for( i=0 ; i < n ; i++ )
       {
           printf("%d ",a[i]);
       }
       free( a );
   }
    puts("\n");
    str = ft_calloc(n, sizeof(char *));
    if (str == NULL)
        printf("Memory allocation failed!\n");
    else
    {
        str[0] = "Hello";
        str[1] = "World";
        str[2] = "from";
        str[3] = "C";
    }
    for (i = 0; i < n; i++)
    {
        printf("str[%d]: %s\n", i, str[i]);
    }
    free( str );
   return(0);
}
#endif

#if 0
//ft_strdup()
int main()
{
    const char  *str1 = "";
    const char  *str2 = "Wish you a lovely day!";

    printf("sys-copy str1=%s\n", strdup(str1));
    printf("own-copy str1=%s\n\n", ft_strdup(str1));
    printf("sys-copy str2=%s\n", strdup(str2));
    printf("own-copy str2=%s\n\n", ft_strdup(str2));
}
#endif