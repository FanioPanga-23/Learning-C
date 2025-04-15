/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: f-99 <f-99@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 08:50:44 by f-99              #+#    #+#             */
/*   Updated: 2024/09/28 09:25:24 by f-99             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     main()
{
    int     montante;
    short int     idade;
    long int     n_conta;
    
    printf("Digite sua idade: ");
    scanf("%hd", &idade);
    printf("Informe o montante a depositar: ");
    scanf("%d", &montante);
    printf("Informe o numero de conta a depositar: ");
    scanf("%ld", &n_conta);
    printf("Uma pessoa de %hd anos depositou $%d na conta %ld\n\7", idade, montante, n_conta);
}