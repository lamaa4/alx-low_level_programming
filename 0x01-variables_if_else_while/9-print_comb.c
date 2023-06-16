#include <stdio.h>

int main(void)
{
for (int num = 0; num < 10; num++){
putchar(num+ '0');
if (num==9)
break;
putchar(',');
putchar(' ');
}

putchar('\n');
 

return (0);
}   
