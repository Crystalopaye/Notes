#include <stdio.h>
/**
* main-Entry point
* nested while loop
* print 2 three times on a line
* each 2 should be separated with a space
* Return: 0 upon successful execution
*/

int main(void)
{
int i = 0, j;

while (i < 5)
{
j = 0;
while (j < 3)
{
printf("2 ");
j++;
}

printf("\n");
i++;
}

return (0);
}

