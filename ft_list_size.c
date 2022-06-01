#include <stdio.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *head;

    head = begin_list;
    if (!head)
        return (0);
    while (head)
    {
        printf("here\n");
        head = head->next;
        i++;
    }
    return (i);
}

int main()
{
    t_list *head;
    t_list *head2;
    t_list *head3;
    int i = ft_list_size(head);

    head->next = head2;
    head->next->next = head3;
    head->next->next->next = NULL;
    printf("%d\n", i);
}