/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:23:55 by marvin            #+#    #+#             */
/*   Updated: 2022/05/25 15:26:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    to_upper_str(char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        if (s[i] >= 97 && s[i] <= 122)
        {
            s[i] -= 32;
        }
        std::cout<<s[i];
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    }
    else
    {
        int i = 1;
        while(i != argc)
        {
            to_upper_str(argv[i]);
            i++;
        }
    }
    return 0;
}