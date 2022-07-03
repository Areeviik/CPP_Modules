/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 15:21:13 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/13 15:21:14 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;    //check pointer type
    std::string &stringREF = str;


    std::cout<<"\033[1;30mThe memory address of the string variable is: \033[m"<<&str<<std::endl;
    std::cout<<"\033[1;30mThe memory address held by stringPTR is: \033[m"<<stringPTR<<std::endl;
    std::cout<<"\033[1;30mThe memory address held by stringREF is: \033[m"<<&stringREF<<std::endl;
    
    std::cout<<"\033[1;30mThe value of the string variable is: \033[m"<<str<<std::endl;
    std::cout<<"\033[1;30mThe value of pointed to by stringPTR is: \033[m"<<*stringPTR<<std::endl;
    std::cout<<"\033[1;30mThe value pointed to by stringREF is: \033[m"<<stringREF<<std::endl;

    return 0;
}