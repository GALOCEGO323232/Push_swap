/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgagliar <kgagliar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 11:51:02 by kgagliar          #+#    #+#             */
/*   Updated: 2025/09/17 12:48:12 by kgagliar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
    struct s_list   *prev;
}   t_list;

void sort_list_asc(t_list *head)
{
    if (!head)
        return;

    int swapped;
    t_list *ptr;
    t_list *last = NULL;

    do
    {
        swapped = 0;
        ptr = head;

        while (ptr->next != last)
        {
            int *a = (int *)ptr->content;
            int *b = (int *)ptr->next->content;

            if (*a > *b)
            {
                // troca os valores
                int temp = *a;
                *a = *b;
                *b = temp;
                swapped = 1;
            }

            ptr = ptr->next;
        }

        last = ptr; // último nó já está no lugar certo
    } while (swapped);
}
int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Passe alguns valores!\n");
        return 0;
    }

    t_list *head = NULL;
    t_list *last = NULL;

    for (int i = 1; i < argc; i++)
    {
        t_list *now = malloc(sizeof(t_list));
        int *value = malloc(sizeof(int));
        *value = atoi(argv[i]);

        now->content = value;
        now->next = NULL;
        now->prev = last;

        if (last)
            last->next = now;
        else
            head = now;

        last = now;  // atualiza o último nó
    }	
	sort_list_asc(head);
    // imprime para frente
    printf("Lista para frente: ");
    t_list *temp = head;
    while (temp)
    {
        printf("%d ", *(int *)temp->content);
        temp = temp->next;
    }
    printf("\n");

    // imprime para trás
    printf("Lista para trás: ");
    temp = last;
    while (temp)
    {
        printf("%d ", *(int *)temp->content);
        temp = temp->prev;
    }
    printf("\n");

    // libera memória
    temp = head;
    while (temp)
    {
        t_list *next = temp->next;
        free(temp->content);
        free(temp);
        temp = next;
    }

    return 0;
}