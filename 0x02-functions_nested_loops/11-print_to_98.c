#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - prints all numbers to 98
 * @n: starting number
 * Result: always 0
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <=98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
			}
			else
			{
				printf("%d, ", n);
			}
		}
	}
				for (; n >= 98; n--)
				{
					if (n == 98)
					{
						printf("%d", n);
					       printf("\n");
				       break;
					}
					else
					{
						printf("%d, ", n);
					}
				}
				
			
	
	
}	
