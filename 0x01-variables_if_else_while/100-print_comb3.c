#include <stdio.h>

int main(void)
{


for (int num = 0; num < 10; num++){
		
for (int i = num+1; i < 10; i++){
putchar(num+ '0');
putchar(i+ '0');
if (num ==9 && i==8)
break;
putchar(',');
putchar(' ');}
}

putchar('\n');
 

return (0);
}
