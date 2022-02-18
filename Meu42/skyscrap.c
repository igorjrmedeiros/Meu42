
/*
Compile command line:
gcc skyscrap.c && ./a.out "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"
*/
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void array_print(int *args)
{
	printf("%d", args[1]);
}

int main(int argc, char *argv[])
{
    char	*str;
    int	matrix[6][6];
    int args[16];
    int i;
    // Clear blanks from string passed by arguments
    i = 0;
    str = argv[1];
    while( *str != '\0'){
        if( *str != ' '){
            args[i] = *str;
            write(1, &args[i], 1);
        }
        i++;
        str++;
    }
    write(1, "\n", 1);
    // Initialize the matrix passing arguments parameters cleaned before.
    //start(matrix, args);

	array_print(args);
}