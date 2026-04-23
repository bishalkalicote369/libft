/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbk <bbk@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 18:55:16 by bbk               #+#    #+#             */
/*   Updated: 2026/04/23 18:59:10 by bbk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(int argc, char **argv)
{
    int unused_var;                    // -Wall: unused variable

    (void)argv;                        // silence argv so we isolate argc

    if (argc)                          // harmless use of argc
        printf("hi\n");

    return 0;
}

void bad_function(int a, int b)        // -Wextra: unused parameters a and b
{
    return;
}