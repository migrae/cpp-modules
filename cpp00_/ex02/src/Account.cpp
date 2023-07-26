/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 16:34:31 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/12 10:10:11 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

//Constructor
Account::Account(int initial_deposit){
	this->_amount = initial_deposit;
	_totalAmount += this->_amount;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;

	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
						<< ";amount;" << initial_deposit << ";created"
						<< std::endl;
}

//Default Constructor
Account::Account(void){
	
}

//Decontructor
Account::~Account(void){
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
					<< ";amount;" << checkAmount() << ";closed"
					<< std::endl;
}

//////GETTER//////////
	int	Account::getNbAccounts( void ){
		return(_nbAccounts);
	}
	
	int	Account::getTotalAmount( void ){
		return(_totalAmount);
	}
	
	int	Account::getNbDeposits( void ){
		return(_totalNbDeposits);
	}
	
	int	Account::getNbWithdrawals( void ){
		return(_totalNbWithdrawals);
	}
	
	void	Account::displayAccountsInfos( void ){
		Account::_displayTimestamp();
		std::cout << "accounts:" << _nbAccounts << ";total:"
							<< _totalAmount	<< ";deposits:" << _totalNbDeposits
							<< ";withdrawals:" << _totalNbWithdrawals
							<< std::endl;
		return ;
	}

	/////////Interactions//////

	void	Account::makeDeposit( int deposit )
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:"
							<< checkAmount() << ";deposit:" << deposit;
		this->_amount += deposit;
		_totalAmount += deposit;
		_nbDeposits++;
		_totalNbDeposits ++;
		std::cout << ";amount:" << checkAmount()
							<< ";nb_deposits:" << _nbDeposits
							<< std::endl;
	}
	
	bool	Account::makeWithdrawal( int withdrawal )
	{
			Account::_displayTimestamp();
			std::cout << "index:" << _accountIndex << ";p_amount:"
								<< this->_amount << ";withdrawal:";
		if (checkAmount() - withdrawal < 0)
		{
			std::cout << "refused" << std::endl;
			return(false);
		}
		else
		{
			this->_amount -= withdrawal;
			_totalAmount -= withdrawal;
			_nbWithdrawals++;
			_totalNbWithdrawals++;
			std::cout << withdrawal << ";amount:"
								<< checkAmount() << ";nb_withdrawals:"
								<< _nbWithdrawals
								<< std::endl;
			return(true);
		}
	}
	int		Account::checkAmount( void ) const{
		return(this->_amount);
	}
	
	void	Account::displayStatus( void ) const
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";amount:"
							<< checkAmount() << ";deposits:" << _nbDeposits
							<< ";withdrawals:" << _nbWithdrawals
							<< std::endl;
	}
	
	/// private /////
	
	void	Account::_displayTimestamp( void )
	{
		std::time_t timestamp = std::time(NULL);
		std::tm *local = std::localtime(&timestamp);
		char buffer[20];
		
		std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local);
		std::cout << buffer;
	}



