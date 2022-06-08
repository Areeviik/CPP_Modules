/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:15 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/08 15:25:07 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

void Account::_displayTimestamp(void)
{
    std::cout<<"time:";
}

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
    _displayTimestamp();
    std::cout<<"accounts:"<< Account::_nbAccounts<<";";
    std::cout<<"total:"<< Account::_totalAmount<<";";
    std::cout<<"deposits:"<<Account::_totalNbDeposits<<";";
    std::cout<<"withdrawals:"<<Account::_totalAmount<<std::endl;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = this->_nbAccounts++;
    this->_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"created"<<std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"closed"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    this->_amount+=deposit;
    this->_nbDeposits++;
    Account::_totalAmount+=deposit;
    Account::_totalNbDeposits++;
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"p_amount:"<<Account::_amount<<";";
    std::cout<<"deposit:"<<deposit<<";";
    std::cout<<"amount:"<<Account::_totalAmount<<";";
    std::cout<<"nb_deposits:"<<Account::_nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"p_amount:"<<Account::_amount<<";";
    if (this->_amount - withdrawal < 0)
    {
        std::cout<<"withdrawal:"<<"refused"<<std::endl;
        return false;
    }
    this->_amount = withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -=withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout<<"withdrawal:"<<withdrawal<<";";
    std::cout<<"amount:"<<Account::_totalAmount<<";";
    std::cout<<"nb_withdrawals:"<<Account::_nbWithdrawals<<std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"amount:"<<Account::_amount<<";";
    std::cout<<"deposits:"<<Account::_nbDeposits<<";";
    std::cout<<"withdrawal:"<<Account::_nbDeposits<<std::endl;
}
