#include "monty.h"
/**
 * op_mul - prototype
 * @head: stack head
 * @counter: line_number
*/
void op_mul(stack_t **head, unsigned int counter)
{
stack_t *prp;
int mullenght = 0, muls;
prp = *head;
while (prp)
{
prp = prp->next;
mullenght++;
}
if (mullenght < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.files);
free(bus.info);
clear_dll(*head);
exit(EXIT_FAILURE);
}
prp = *head;
muls = prp->next->n * prp->n;
prp->next->n = muls;
*head = prp->next;
free(prp);
}
/**
 * op_mod - function of the prototype
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void op_mod(stack_t **head, unsigned int counter)
{
stack_t *js;
int flen = 0, nk;
js = *head;
while (js)
{
js = js->next;
flen++;
}
if (flen < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.files);
free(bus.info);
clear_dll(*head);
exit(EXIT_FAILURE);
}
js = *head;
if (js->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.files);
free(bus.info);
clear_dll(*head);
exit(EXIT_FAILURE);
}
nk = js->next->n % js->n;
js->next->n = nk;
*head = js->next;
free(js);
}
