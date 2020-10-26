#include <stdio.h>
int main()
{
	while (a != 0)
	{
	a = str[b++];
		while (a-- > 64)
		{
			if (++c == 90)
			{
				c = 10;	 
				putchar('\n');
			}
			else
			{
				if (b % 2 == 0)
					putchar('!');
				else
					putchar(' ');
			}
		}
	}
	return 0;
}
