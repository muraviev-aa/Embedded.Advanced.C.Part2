#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <strings.h>

typedef struct list
{
    void *address;
    size_t size;
    char comment[64];
    struct list *next;
} list;

list *first = NULL;
list *second = NULL;
list *third = NULL;

void *findMaxBlock(list *head)
{
    size_t tmp = 0;
    list *current = head;
    list *current_new = head;
    if (head == NULL)
        return NULL;
    // Определяем максимальный размер узла
    while (current != NULL)
    {
        if (tmp <= current->size)
            tmp = (int) current->size;
        current = current->next;
    }
    // Находим адрес узла с максимальным размером
    while (current_new != NULL)
    {
        if (current_new->size == tmp)
            return current_new->address;
        current_new = current_new->next;
    }
    return NULL;
}

int main(void)
{
    first = (list *) malloc(sizeof(list));
    second = (list *) malloc(sizeof(list));
    third = (list *) malloc(sizeof(list));

    // Заполнение данными узла first
    first->address = &first;
    first->size = 10;
    sprintf(first->comment, "%s, %i, %s", __FILE__, __LINE__, __FUNCTION__);
    first->next = second;

    // Заполнение данными узла second
    second->address = &second;
    second->size = 30;
    sprintf(second->comment, "%s, %i, %s", __FILE__, __LINE__, __FUNCTION__);
    second->next = third;

    // Заполнение данными узла third
    third->address = &third;
    third->size = 100;
    sprintf(third->comment, "%s, %i, %s", __FILE__, __LINE__, __FUNCTION__);
    third->next = NULL;

    printf("%llu\n", (long long int) findMaxBlock(first));

    free(first);
    free(second);
    free(third);
    return 0;
}