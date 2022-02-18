/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imedeiro <imedeiro@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 00:53:22 by imedeiro          #+#    #+#             */
/*   Updated: 2022/02/14 01:51:00 by imedeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void line_validation(int line, int matrix[5][5]){
    int i;
    char aux;
    int resp;
    int resp2;
	char c_resp;
	char c_resp2;
    
    aux = '0';
    resp = 0;
    i = 1;
    while(i < 5){
        if(aux < matrix[line][i]){
            aux = matrix[line][i];
            resp ++;
        }
        i++;
    }
    aux = '0';
    i = 4;
    resp2 = 0;
    while(i > 0){
        if(aux < matrix[line][i]){
            aux = matrix[line][i];
            resp2 ++;
        }
        i--;
    }
	c_resp = resp + 48;
	c_resp2 = resp2 + 48;
    write(1, "Response1: ", 12);
	write(1, &c_resp, 1);
	write(1, "   Response2: ", 14);
	write(1, &c_resp2, 1);
	write(1, "\nObserv1: ", 10);
	write(1, &matrix[line][0], 1);
	write(1, "   Observ2: ", 13);
	write(1, &matrix[line][5], 1);
}

void start(int matrix[5][5], char *str)
{
	int i;
	int j;
    char c;
    char arguments[16];
	i = 0;
	j = 0;
	while( *str != '\0'){
	    c = *(str);
	    if( *str != ' '){
	        arguments[i] = *str;
	        i++;
	    }
	    str++;
	}
    i = 0;
	while ( i <= 5){
		j = 0;
		while (j <= 5)
		{
		    if((i == 0 && j >= 1) && (i == 0 && j < 5))
		        matrix[i][j] = (arguments[(j-1)]);
			else if (((i >= 1 && i < 5) || (i > 0 && i < 5)) && (j == 0 || j == 5))
			{
		        if (j == 0)
					matrix[i][j] = arguments[(i+7)];
				else if (j == 5)
					matrix[i][j] = arguments[(i+11)];
				else
				    matrix[i][j] = '0';
		    }
			else if((i == 5 && j >= 1) && (i == 5 && j < 5))
			    matrix[i][j] = arguments[(j+3)];
		    else
		        matrix[i][j] = '0';
		    write(1, &matrix[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int main(int argc, char *argv[])
{
    char *args = argv[1];
	//char *ptr = args;
	int matrix[5][5];
	int count;

	start(matrix, args);	
	matrix[1][1] = '1';
	matrix[1][2] = '2';
	matrix[1][3] = '3';
	matrix[1][4] = '4';
	line_validation(1, matrix);
    return 0;
}