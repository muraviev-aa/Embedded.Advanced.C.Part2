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

list *first;
list *second;
list *third;

size_t totalMemoryUsage(list *head)
{
    size_t sum = 0;
    list *current = head;
    if (current == NULL)
        return 0;
    while (current != NULL)
    {
        sum += current->size;
        current = current->next;
    }
    return sum;
}

int main(void)
{
    first = (list *) calloc(1, sizeof(list));
    second = (list *) calloc(1, sizeof(list));
    third = (list *) calloc(1, sizeof(list));

    // Заполнение данными узла first
    first->address = &first;
    first->size = 10;
    strcpy(first->comment, "main.c");
    first->next = second;

    // Заполнение данными узла second
    second->address = &second;
    second->size = 30;
    strcpy(second->comment, "main.c");
    second->next = third;

    // Заполнение данными узла third
    third->address = &third;
    third->size = 100;
    strcpy(third->comment, "main.c");
    third->next = NULL;

    printf("%llu\n", totalMemoryUsage(first));

    free(first);
    free(second);
    free(third);
    return 0;
}