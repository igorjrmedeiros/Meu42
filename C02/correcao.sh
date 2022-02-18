#!/bin/sh
cd ..
clear
echo 'Realizando teste da norminette -R'
norminette -R CheckForbiddenSourceHeader ex00/ft_strcpy.c
norminette -R CheckForbiddenSourceHeader ex01/ft_strncpy.c
norminette -R CheckForbiddenSourceHeader ex02/ft_str_is_alpha.c
norminette -R CheckForbiddenSourceHeader ex03/ft_str_is_numeric.c
norminette -R CheckForbiddenSourceHeader ex04/ft_str_is_lowercase.c
norminette -R CheckForbiddenSourceHeader ex05/ft_str_is_uppercase.c
norminette -R CheckForbiddenSourceHeader ex06/ft_str_is_printable.c
norminette -R CheckForbiddenSourceHeader ex07/ft_strupcase.c
norminette -R CheckForbiddenSourceHeader ex08/ft_strlowcase.c
norminette -R CheckForbiddenSourceHeader ex09/ft_strcapitalize.c
norminette -R CheckForbiddenSourceHeader ex10/ft_strlcpy.c
norminette -R CheckForbiddenSourceHeader ex11/ft_putstr_non_printable.c
norminette -R CheckForbiddenSourceHeader ex12/ft_print_memory.c
echo " "
echo 'Teste da norminette concluido'
echo " "
echo 'Realizando teste de GCC'
echo " "
mkdir test
gcc -Wall -Werror -Wextra C02/ex00.c ex00/ft_strcpy.c -o test/ex00.out
gcc -Wall -Werror -Wextra C02/ex01.c ex01/ft_strncpy.c -o test/ex01.out
gcc -Wall -Werror -Wextra C02/ex02.c ex02/ft_str_is_alpha.c -o test/ex02.out
gcc -Wall -Werror -Wextra C02/ex03.c ex03/ft_str_is_numeric.c -o test/ex03.out
gcc -Wall -Werror -Wextra C02/ex04.c ex04/ft_str_is_lowercase.c -o test/ex04.out
gcc -Wall -Werror -Wextra C02/ex05.c ex05/ft_str_is_uppercase.c -o test/ex05.out
gcc -Wall -Werror -Wextra C02/ex06.c ex06/ft_str_is_printable.c -o test/ex06.out
gcc -Wall -Werror -Wextra C02/ex07.c ex07/ft_strupcase.c -o test/ex07.out
gcc -Wall -Werror -Wextra C02/ex08.c ex08/ft_strlowcase.c -o test/ex08.out
gcc -Wall -Werror -Wextra C02/ex08.c ex09/ft_strcapitalize.c -o test/ex08.out
gcc -Wall -Werror -Wextra C02/ex08.c ex10/ft_strlcpy.c -o test/ex08.out
gcc -Wall -Werror -Wextra C02/ex08.c ex11/ft_putstr_non_printable.c -o test/ex08.out
gcc -Wall -Werror -Wextra C02/ex08.c ex12/ft_print_memory.c -o test/ex08.out
echo " "
echo 'Teste de GCC concluido'
echo " "
echo 'Realizando teste de resultado'
echo " "
echo 'Exercicio 00'
./test/ex00.out 
echo " "
echo 'Exercicio 01'
./test/ex01.out 
echo " "
echo 'Exercicio 02'
./test/ex02.out 
echo " "
echo 'Exercicio 03'
./test/ex03.out 
echo " "
echo 'Exercicio 04'
./test/ex04.out 
echo " "
echo 'Exercicio 05'
./test/ex05.out 
echo " "
echo 'Exercicio 06'
./test/ex06.out 
echo " "
echo 'Exercicio 07'
./test/ex07.out 
echo " "
echo 'Exercicio 08'
./test/ex08.out 
echo " "
echo 'Todos os testes foram concluidos.'
rm -r test
