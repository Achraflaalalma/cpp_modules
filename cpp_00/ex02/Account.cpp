/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfrida <lfrida@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 19:58:29 by lfrida            #+#    #+#             */
/*   Updated: 2024/06/18 23:04:10 by lfrida           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
  this->_accountIndex = Account::_nbAccounts;
  Account::_nbAccounts++;
  this->_amount = initial_deposit;
  Account::_totalAmount += initial_deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;
  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
  return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
  return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
  return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
  return Account::_totalNbWithdrawals;
}

void Account::_displayTimestamp()
{
    time_t result = time(NULL);
    std::cout << std::setfill('0')
              << "[" << (localtime(&result))->tm_year + 1900
              << std::setw(2) << (localtime(&result))->tm_mon + 1
              << std::setw(2) << (localtime(&result))->tm_mday 
              << "-"
              << std::setw(2) << (localtime(&result))->tm_hour
              << std::setw(2) << (localtime(&result))->tm_min
              << std::setw(2) << (localtime(&result))->tm_sec
              << "]" << std::flush;
}


void  Account::displayAccountsInfos(void)
{
  Account::_displayTimestamp();
  std::cout << "accounts:" << getNbAccounts() << ";"
            << "total:" << getTotalAmount() << ";"
            << "deposits:" << getNbDeposits() << ";"
            << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void  Account::displayStatus(void) const
{
  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ";"
            << "amount:" << _amount << ";"
            << "deposits:" << _nbDeposits << ";"
            << "withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit )
{
  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "deposit:" << deposit << ";";
  _amount += deposit;
  Account::_totalAmount += deposit;
  Account::_totalNbDeposits++;
  _nbDeposits++;
  std::cout << "amount:" << _amount << ";"
            << "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
  Account::_displayTimestamp();
  std::cout << " index:" << _accountIndex << ";"
            << "p_amount:" << _amount << ";"
            << "withdrawal:" << withdrawal << ";";
  if (_amount < withdrawal)
  {
    std::cout << "refused" << std::endl;
    return false;
  }
  _amount -= withdrawal;
  Account::_totalAmount -= withdrawal;
  Account::_totalNbWithdrawals++;
  _nbWithdrawals++;
  std::cout << "amount:" << _amount << ";"
            << "nb_withdrawals:" << _nbWithdrawals << std::endl;
  return true;
}

int		Account::checkAmount( void ) const
{
  return _amount;
}