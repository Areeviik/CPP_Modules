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

std::string ft_replace(std::string read, std::string s1, std::string s2)
{
    int i = 0;
    int pos = 0;
    std::string rep;
    while (1)
    {
        pos = read.find(s1, i);
        if (pos == std::string::npos)
            break;
        rep.append(read, i, pos - i);
        i = pos + s1.size();
        rep.append(s2);
    }
    rep.append(read, i);
    return rep;
}

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
        std::cout<<"\033[1;31mWrong number of arguments\033[0m"<<std::endl;
        std::cout<<"\033[1;31mProgram takes three arguments: <filename> <search> <replace>\033[0m"<<std::endl;
        return 42;
    }
    fn.open(argv[1], std::fstream::out);
    if (!fn.is_open())
    {
        std::cout<<"Can't open input file"<<std::endl;
        return 42;
    }
    s1 = argv[2];
    s2 = argv[3];

    fcopy = argv[1];
    fcopy += ".replace";
    replace.open(fcopy, std::fstream::in | std::ifstream::trunc);

    if (!replace.is_open())
    {
        std::cout<<"Can't open output file"<<std::endl;
        return 42;
    }

    while (std::getline(fn, read, '\n').good())
    {
        replace<<ft_replace(read, s1, s2);
        if (!fn.eof())
            replace<<'\n';
    }
    fn.close();
    replace.close();
    return 0;
}