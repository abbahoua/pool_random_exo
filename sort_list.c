#include <stdio.h>

typedef struct s_list
{
    int data;
    struct s_list   *link;
    
}   t_list;

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *ptr;
    int tmp;

    ptr = lst;
    while (lst)
    {
        if (!((*cmp)(ptr->data, ptr->link->data)))
        {
            tmp = ptr->data;
            ptr->link->data = ptr->data;
            ptr->data = tmp;
            lst = ptr;
        }
        else
            lst = lst->link;
    }
    lst = ptr;
    return (lst);
}

int main()
{
    t_list lst;

    lst.data = 9;
    lst.link->data = 1;
    printf("%d\n", sort_list(lst, (cmp) (9, 1)));

}