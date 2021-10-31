/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 21:43:15 by llemes-f          #+#    #+#             */
/*   Updated: 2021/10/31 20:43:39 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./code/ft_printf.h"
#include "stdio.h"

int	main(void)
{
	char test_char = 'A';
	int len = 0;
	int lenft = 0;
	char *test_string = "LUCAS";
	int test_int = -42;
	long int test_long_int = 2147483647;
	unsigned int test_usig_int = -42;
	unsigned int test_using_hex = -42;

	/*Apenas texto*/
	printf("Apenas texto\n"); 
	
	printf("Printf: \n"); 
	len = printf("Printf:\t   Apenas texto\n"); 

	printf("ft_printf: \n"); 
	lenft = ft_printf("Printf:\t   Apenas texto\n");
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 	
	printf("\n");

	/*Teste %*/
	printf("Teste %% \n"); 
	
	printf("Printf: \n"); 
	len = printf("Printf:%% \n"); 

	printf("ft_printf: \n"); 
	lenft = ft_printf("Printf:%% \n");
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 	
	printf("\n");

	/*Teste Char*/
	printf("Teste Char\n");
	
	printf("Printf: \n"); 
	len = printf("Printf:%c .\n",test_char); 
	// printf("Printf:%9c .\n",test_char); 
	
	printf("ft_printf: \n"); 
	lenft = ft_printf("Printf:%c .\n",test_char);
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 
	
	printf("\n");
	/*Teste String*/
	printf("Teste String\n");
	
	printf("Printft\n");
	len = printf("Printf:%s .\n",test_string);
	// printf("Printf:%9s .\n",test_string); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%s .\n",test_string);
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 	

	/*Teste INT*/
	printf("Teste INT\n");
	printf("Usando d\n");

	printf("Printf\n");
	len = printf("Printf:%d .\n",test_int); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%d .\n",test_int);
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 	
	
	printf("Usando i\n");
	
	printf("Printf\n");
	len = printf("Printf:%i .\n",test_int); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%i .\n",test_int);
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 	
	
	printf("\n");
	/*Teste Float*/
	// printf("Teste Float\n");
	// printf("Printf:%f .\n",test_float); 
	// ft_printf("ft_printf:%f .\n",test_float);
	//printf("\n");
	/*Teste LONG INT*/
	// // printf("Teste LONG INT\n");
	// // printf("Usando ld\n");
	// // printf("Printf:\t\t\t%ld\n",test_long_int); 
	// // // ft_printf("ft_printf: %ld\n",test_long_int);
	// // printf("Usando li\n");
	// // printf("Printf:\t\t\t%li\n",test_long_int); 
	// // // ft_printf("ft_printf: %li\n",test_long_int);
	// printf("\n");
	/*Teste UNSIGNED INT*/
	printf("Teste UNSIGNED INT\n");
	
	printf("Printf\n");
	len = printf("Printf:%u .\n",test_usig_int); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%u .\n",test_usig_int);	
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 	

	/*Teste HEX*/
	printf("Teste HEX\n");
	printf("Usando x\n");

	printf("Printf\n");
	len = printf("Printf:%x .\n",test_using_hex); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%x .\n",test_using_hex);	
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 
	printf("\n");

	printf("Usando X\n");

	printf("printf\n");
	len = printf("Printf:%X .\n",test_using_hex); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%X .\n",test_using_hex);	
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 
	printf("\n");
	
	/*Teste POINTER*/
	printf("Teste Pointer\n");

	printf("Printf\n");
	printf("Printf:%p .\n",&test_using_hex); 
	len = printf("Printf:%p .\n",&test_using_hex); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:%p .\n",&test_using_hex);	
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 
	printf("\n");

	/*Teste MIX*/
	printf("Teste MIX\n");

	printf("Printf\n");
	len = printf("Printf:O aluno %s, estuda na escola %d, e alocou memoria no endereco %p.\n",test_string, test_int, &test_int); 
	
	printf("ft_printf\n");
	lenft = ft_printf("Printf:O aluno %s, estuda na escola %d, e alocou memoria no endereco %p.\n",test_string, test_int, &test_int);
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 
	printf("\n");	

	/*Teste NULL S*/
	printf("Teste NULL S\n");

	// printf("Printf\n");
	// len = printf(" NULL %s NULL ", NULL); 
	
	printf("ft_printf\n");
	lenft = ft_printf(" NULL %s NULL ", NULL);
	
	printf("len printf: %d\n", len); 
	printf("len ft_printf: %d\n", lenft);
	len = 0, lenft = 0; 
	printf("\n");
	return (0);	
}