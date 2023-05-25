#include "monty.h"
/**
 * op_add - function
 * @head: stack head
 * @counter: line number
*/
void op_add(stack_t **head, unsigned int counter)
{
stack_t *js;
int distance = 0, jags;
js = *head;
while (js)
{
js = js->next;
distance++;
}
if (distance < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);
fclose(bus.files);
free(bus.info);
clear_dll(*head);
exit(EXIT_FAILURE);
}
js = *head;
jags = js->n + js->next->n;
js->next->n = jags;
*head = js->next;
free(js);
}
/**
 * addheadst - function of the prototype
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addheadst(stack_t **head, int n)
{
stack_t *node_update, *second;
second = *head;
node_update = malloc(sizeof(stack_t));
if (node_update == NULL)
{
printf("Error\n");
exit(0);
}
if (second)
second->prev = node_update;
node_update->n = n;
node_update->next = *head;
node_update->prev = NULL;
*head = node_update;
}
