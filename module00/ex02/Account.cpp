/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/28 16:54:53 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/28 19:20:31 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0){
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

Account::~Account(){
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= this->_amount;
	Account::_totalAmount -= this->_nbDeposits;
	Account::_totalAmount -= this->_totalNbWithdrawals;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

Account::Account(void): _accountIndex(Account::_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0){
	Account::_nbAccounts++;
}

int	Account::getNbAccounts(void){
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void){
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void){
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void){
	return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void){
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";";
	std::cout << "total:" << Account::_totalAmount << ";";
	std::cout << "deposits:" << Account::_totalNbDeposits << ";";
	std::cout << "withdrawals:" <<  Account::_totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void ){
	//std::cout << "[19920104_091532] ";
	std::chrono::system_clock::time_point now;
	now = std::chrono::system_clock::now();
	std::time_t tt = std::chrono::system_clock::to_time_t(now);
	tm local_tm = *localtime(&tt);
	std::cout << std::setfill('0');
	std::cout << "[";
	std::cout << local_tm.tm_year + 1900;
	std::cout << std::setw(2);
	std::cout << local_tm.tm_mon + 1;
	std::cout << std::setw(2);
	std::cout << local_tm.tm_mday;
	std::cout << "_";
	std::cout << std::setw(2);
	std::cout << local_tm.tm_hour;
	std::cout << std::setw(2);
	std::cout << local_tm.tm_min;
	std::cout << std::setw(2);
	std::cout << local_tm.tm_sec;
	std::cout << "] ";
}

void Account::makeDeposit(int deposit){
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount - deposit << ";";
	std::cout << "deposit:" << deposit <<";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;;
}

bool Account::makeWithdrawal(int withdrawal){
	if (withdrawal > this->_amount)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";";
		std::cout << "p_amount:" << this->_amount << ";";	
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount + withdrawal << ";";
	std::cout << "withdrawal:" << withdrawal <<";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount(void) const{
	return (this->_amount);
}

void Account::displayStatus(void) const{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}