/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:15 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/08 14:40:37 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::getNbAccounts(void)
{
    return Account::_nbAccounts;
}

int Account::getTotalAmount(void)
{
    return Account::_totalAmount;
}

int Account::getNbDeposits(void)
{
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    std::cout<<"accounts:"<< Account::_nbAccounts<<";";
    std::cout<<"total:"<< Account::_totalAmount<<";";
    std::cout<<"deposits:"<<Account::_totalNbDeposits<<";";
    std::cout<<"withdrawals:"<<Account::_totalAmount<<std::endl;
}

Account::Account(int initial_deposit)
{

}

Account::~Account(void)
{
    
}

void Account::makeDeposit(int deposit)
{
    
}

bool Account::makeWithdrawal(int withdrawal)
{
    
}

int Account::checkAmount(void) const
{
    
}

void Account::displayStatus(void) const
{
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"withdrawal:"<<Account::_nbDeposits<<std::endl;
}
