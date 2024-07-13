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
    // Определяем максимальный размер узла
    while (current != NULL)
    {
        if (tmp <= current->size)
            tmp = (int) current->size;
        current = current->next;
    }
    // Находим адрес узла с максимальным размером
    while (head != NULL)
    {
        if (head->size == tmp)
            return head->address;
        head = head->next;
    }
    return NULL;
}

int main(void)
{
    first = (list *) malloc(sizeof(list));
    second = (list *) malloc(sizeof(list));
    third = (list *) malloc(sizeof(list));

    // Заполнение данными узла first
    first->address = (void *) 140525067852320;
    first->size = 10;
    strcpy(first->comment, "main.c");
    first->next = second;

    // Заполнение данными узла second
    second->address = (void *) 140525067852350;
    second->size = 30;
    strcpy(second->comment, "main.c");
    second->next = third;

    // Заполнение данными узла third
    third->address = (void *) 140525067852900;
    third->size = 100;
    strcpy(third->comment, "main.c");
    third->next = NULL;

    printf("%llu", (long long int) findMaxBlock(first));

    free(first);
    free(second);
    free(third);
    return 0;
}