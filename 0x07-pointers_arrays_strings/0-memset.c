include "main.h"

/**
 * _memset - fills the first byte
 * @b - address of memory to print
 * @s - size of memeory to print
 * Returns - on success 0
 *
 */
int void (main);
{

	 unsigned int i;
	 i = 0;
	 while (i < size)
	 {
		 if (i % 10)
		 {
			 printf(" ");
		 }
		 if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");

}

