/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:50:55 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/16 14:50:55 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>
#include <fstream>

int main(int argc, char **argv)
{
    std::ifstream fn;
    std::string s1;
    std::string s2;
    std::string fcopy;
    std::string read;
    std::ofstream replace;

    if (argc != 4)
    {
        std::cout<<"Wrong number of arguments"<<std::endl;
        std::cout<<"Program takes three arguments: filename, string1 and string 2"<<std::endl;
        return -1;
    }
    fn.open(argv[1]);
    if (!fn)
        std::cout<<"Can't open a file"<<std::endl;
    s1 = argv[2];
    s2 = argv[3];

    fcopy = argv[1];
    fcopy += ".replace";
    if (s1 == s2)
    {
        while (std::getline(fn, read))
            replace<<read<<std::endl;
        replace.close();
        return (0);
    }
    while (std::getline(fn, read))
    {
        
    }



}