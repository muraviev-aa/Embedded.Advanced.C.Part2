#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

size_t totalMemoryUsage(list *head)
{
    size_t sum = 0;
    if (head == NULL)
        return 0;
    while (head != NULL)
    {
        sum += head->size;
        head = head->next;
    }
    return sum;
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

    printf("%llu\n", totalMemoryUsage(first));

    free(first);
    free(second);
    free(third);
    return 0;
}