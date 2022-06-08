/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:15 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/08 14:56:06 by akhachat         ###   ########.fr       */
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
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"created"<<std::endl;
}

Account::~Account(void)
{
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"closed"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"p_amount:"<<Account::_amount<<";";
    std::cout<<"deposit:"<<deposit<<";";
    std::cout<<"amount:"<<Account::_totalAmount<<";";
    std::cout<<"nb_deposits:"<<Account::_nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"p_amount:"<<Account::_amount<<";";
    std::cout<<"withdrawal:"<<withdrawal<<";";
    std::cout<<"amount:"<<Account::_totalAmount<<";";
    std::cout<<"nb_withdrawals:"<<Account::_nbWithdrawals<<std::endl;
}

int Account::checkAmount(void) const
{
    
}

void Account::displayStatus(void) const
{
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"deposits:"<<Account::_nbDeposits<<";";
    std::cout<<"withdrawal:"<<Account::_nbDeposits<<std::endl;
}
