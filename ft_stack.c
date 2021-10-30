/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucas <lucas@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 20:42:59 by llemes-f          #+#    #+#             */
/*   Updated: 2021/10/29 22:32:59 by lucas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

typedef	struct s_stack
{
	int top;
	int len;
	float *fElem;
} stack_s;


void	ft_stack(stack_s *p, int c)
{
	p->top = -1;
	p->len = c;
	p->fElem = (float*) malloc (c * sizeof(float));
}

int		ft_isEmpty(stack_t *p)
{
	if( p-> top == -1 )
		return 1;   // true
   else
		return 0;   // false
}

int		ft_isFull(stack_t *p)
{
	if(p->top == p->len - 1)
		return 1;
	else
		return 0;
}

void	ft_push(stack_t *p, float v)
{
	p->top++;
	p->fElem [p->top] = v;
}

float	ft_pop(stack_t *p) 
{
	float aux = p->fElem [p->top];
	p->top--;
	return aux;
}

float	ft_getTop(stack_t *p)
{
	return p->fElem [p->topo];
}