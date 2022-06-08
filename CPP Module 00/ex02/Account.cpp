/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 19:36:15 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/08 16:51:44 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp(void)
{
    std::time_t t = std::time(0);
	std::tm *lt = std::localtime(&t);
	std::cout << "[" << 1900 + lt->tm_year<< "0" << 1 + lt->tm_mon << lt->tm_mday;
	std::cout << "_" << lt->tm_hour << lt->tm_min << lt->tm_sec << "] ";
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
    std::cout<<"accounts:"<< _nbAccounts<<";";
    std::cout<<"total:"<< _totalAmount<<";";
    std::cout<<"deposits:"<<_totalNbDeposits<<";";
    std::cout<<"withdrawals:"<<_totalAmount<<std::endl;
}

Account::Account(int initial_deposit)
{
    _displayTimestamp();
    this->_accountIndex = _nbAccounts++;
    Account::_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    std::cout<<"index:"<<_accountIndex<<";";
    std::cout<<"amount:"<<_amount<<";";
    std::cout<<"created"<<std::endl;
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";";
    std::cout<<"amount:"<<_amount<<";";
    std::cout<<"closed"<<std::endl;
}

void Account::makeDeposit(int deposit)
{
    _displayTimestamp();
    this->_amount+=deposit;
    this->_nbDeposits++;
    Account::_totalAmount+=deposit;
    Account::_totalNbDeposits++;
    std::cout<<"index:"<<_accountIndex<<";";
    std::cout<<"p_amount:"<<_amount<<";";
    std::cout<<"deposit:"<<deposit<<";";
    std::cout<<"amount:"<<_totalAmount<<";";
    std::cout<<"nb_deposits:"<<_nbDeposits<<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout<<"index:"<<Account::_accountIndex<<";";
    std::cout<<"p_amount:"<<Account::_amount<<";";
    if (this->_amount < withdrawal)
    {
        std::cout<<"withdrawal:"<<"refused"<<std::endl;
        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;
    Account::_totalAmount -=withdrawal;
    Account::_totalNbWithdrawals++;
    std::cout<<"withdrawal:"<<withdrawal<<";";
    std::cout<<"amount:"<<_totalAmount<<";";
    std::cout<<"nb_withdrawals:"<<_nbWithdrawals<<std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
    return (this->_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout<<"index:"<<_accountIndex<<";";
    std::cout<<"amount:"<<_amount<<";";
    std::cout<<"deposits:"<<_nbDeposits<<";";
    std::cout<<"withdrawal:"<<_nbDeposits<<std::endl;
}
