#include <stdio.h>
#include <cs50.h>

int get_high_int(void);

int main(void)
{
    int h = get_high_int();
     for(int i = 0; i < h; i++)
    {
	    for(int j = 0; j < h; j++)
        {
            if(j >= h - i - 1)
            {
                printf("#");
            }else{
                printf(" ");
            }

    	}
    	printf("\n");
}
}
int get_high_int(void)
{
    int h;
    do
    {
        h = get_int("Insira a Altura: \n");
    }
    while (h < 1 || h > 8);
    return h;
    }

