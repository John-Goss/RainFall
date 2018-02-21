/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getenv.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvisenti <tvisenti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:51:50 by tvisenti          #+#    #+#             */
/*   Updated: 2018/02/19 17:54:10 by tvisenti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *ptr;

    if (argc < 3)
    {
        printf("Usage: ./getenv <environment variable> <target name program>\n");
        exit(EXIT_FAILURE);
    }

    ptr = getenv(argv[1]);
    ptr += strlen(argv[0]) - strlen(argv[2]);

    printf("%s found at %p\n", argv[1], ptr);
    return (EXIT_SUCCESS);
}
