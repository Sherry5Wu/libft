#include "libft.h"
#include <stdio.h>
#include <stdlib.h>


// creata an new linkedlist
void init(t_list **lst)
{
    *lst = (t_list *)malloc(sizeof(t_list));
    if (!*lst)
        return;
    (*lst)->next = NULL;
}

void print_lst(t_list *lst)
{
    if (lst->content)
        printf("%s, ", (char *)(lst->content));
    lst = lst->next;
    while (lst)
    {
        printf("%s, ", (char *)(lst->content));
        lst = lst->next;
    }
    return;
}
// In the location i, add an new node which content is content.
void lstadd_i(t_list *lst, int i, void *content)
{
    int count;
    t_list *newnode;

    count = 0;
    while (lst->next && count < i - 1)
    {
        count++;
        lst = lst->next;
    }
    if (!lst)
        return;
    newnode = (t_list *)malloc(sizeof(t_list));
    newnode->content = content;
    newnode->next = NULL;
    newnode->next = lst->next;
    lst->next = newnode;
    return;
}

//#if 0
// ft_lstnew()
int main()
{
    // t_list *lst;
    // char *content[5] = {"UK", "Japan", "Suomi", "China", "USA"};

    // init(&lst);
    // for (int i = 0; i < 5; i++)
    // {
    //     ft_lstnew((void *)content[i]);
    //     print_lst(lst); 
    // }
    print_lst(ft_lstnew(NULL));
    return (0);
}
//#endif

#if 0
//ft_lstadd_front()
int main()
{
    t_list  *lst = NULL;
    t_list  *new = ft_lstnew("monday");
    ft_lstadd_front(&lst, new);
    print_lst(lst);
    puts("\n");

    t_list  *lst1 = ft_lstnew("wednesday");
    t_list  *new1 = ft_lstnew("tuesday");
    ft_lstadd_front(&lst1, new1);
    print_lst(lst1);
}
#endif

#if 0
// ft_lstsize()
int main()
{
    t_list  *lst = NULL;
    char    *content[5] = {"monday", "tuesday", "wednesday", "thursday"};
    t_list  *node[4];
    for (int i = 0; i < 4; i++)
    {
        node[i] = ft_lstnew(content[i]);
        ft_lstadd_front(&lst,node[i]);
    }
    printf("The size of linkedlist=%d\n", ft_lstsize(lst));
}
#endif

#if 0
// ft_lstlast()
int main()
{
    t_list  *lst_front = NULL;
//    t_list  *lst_back = NULL;
    char    *content[5] = {"friday", "tuesday", "wednesday", "thursday"};
    t_list  *node[4];
    for (int i = 0; i < 4; i++)
    {
        node[i] = ft_lstnew(content[i]);
        ft_lstadd_front(&lst_front,node[i]);
     }
    printf("the last node=%s", ft_lstlast(lst_front)->content);
}
#endif
#if 0
// ft_lstadd_back()
int main()
{
    t_list  *lst_back = NULL;
    char    *content[5] = {"monday", "tuesday", "wednesday", "thursday"};
    t_list  *node[4];
    for (int i = 0; i < 4; i++)
    {
        node[i] = ft_lstnew(content[i]);
        ft_lstadd_back(&lst_back,node[i]);
     }
    print_lst(lst_back);
}
#endif

#if 0
// ft_lstdelone()
void delete_node(void * content)
{
    free(content);
}

int main()
{
    t_list  *lst= NULL;
    char    *content[5] = {"monday", "tuesday", "wednesday", "thursday"};
    t_list  *node[4];
    for (int i = 0; i < 4; i++)
    {
        node[i] = ft_lstnew(ft_strdup(content[i]));
        ft_lstadd_front(&lst,node[i]);
     }
    print_lst(lst);
    ft_lstdelone(lst, delete_node);
    puts("\n");
    print_lst(lst);
    return 0;
}
#endif

#if 0
// ft_lstclear()
void delete_node(void * content)
{
    free(content);
}

int main()
{
    t_list *head = NULL;

    t_list *node1 = ft_lstnew(ft_strdup("Node 1"));
    t_list *node2 = ft_lstnew(ft_strdup("Node 2"));
    t_list *node3 = ft_lstnew(ft_strdup("Node 3"));

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    ft_lstclear(&head, delete_node);

    if (!head)
        printf("The list is empty.\n");
    else
        printf("Content: %s\n", (char *)head->content);

    return 0;
}
#endif
#if 0
// ft_lstiter()s
void print_list(void * content)
{
    printf("%s\n", (char *)content);
}

int main()
{
    t_list  *lst= NULL;
    char    *content[5] = {"monday", "tuesday", "wednesday", "thursday"};
    t_list  *node[4];

    for (int i = 0; i < 4; i++)
    {
        node[i] = ft_lstnew(ft_strdup(content[i]));
        ft_lstadd_front(&lst,node[i]);
     }
    ft_lstiter(lst, print_list);
    return 0;
}
#endif

#if 0
// ft_lstmap())
void  *plus_one(void * content)
{
    int *num;
    num =(int *)malloc(sizeof(int));
    *num = *((int *)content) + 1;
    return (num);
}

int main()
{
    t_list *head = NULL;
    t_list *node1 = ft_lstnew(malloc(sizeof(int)));
    *(int *)node1->content = 0;
    t_list *node2 = ft_lstnew(malloc(sizeof(int)));
    *(int *)node2->content = 1;
    t_list *node3 = ft_lstnew(malloc(sizeof(int)));
    *(int *)node3->content = 2;

    ft_lstadd_front(&head, node1);
    ft_lstadd_front(&head, node2);
    ft_lstadd_front(&head, node3);

    t_list *new_list = ft_lstmap(head, &plus_one, &free);

    printf("New list after mapping:\n");
    t_list *current = new_list;
    while (current)
    {
        printf("%d\n", *(int *)current->content);
        current = current->next;
    }
    ft_lstclear(&head, &free);
    ft_lstclear(&new_list, &free);
    return 0;
}
#endif