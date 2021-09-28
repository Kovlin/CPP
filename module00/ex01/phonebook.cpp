/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlinkov <rlinkov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/27 20:31:35 by rlinkov           #+#    #+#             */
/*   Updated: 2021/09/28 19:51:28 by rlinkov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Phonebook::Phonebook(void): nb_contact(0){
    return ;
}

Phonebook::~Phonebook(void){
    return ;
}

void    Phonebook::add(void){
    Contact    my_contact;
    
    if (this->nb_contact == 8)
    {
        std::cout << "Phonebook is already full of contacts..." << std::endl;
        return ;
    }
    my_contact.fillContact();
    this->list_contact[this->nb_contact] = my_contact;
    this->nb_contact++;
    return ;
}

void    Phonebook::print_contact(void) const{
    int    i;
    
    i = 0;
    std::cout << std::setw(10);
    std::cout << "index" << "|";
    std::cout << std::setw(10);
    std::cout << "first name" << "|";
    std::cout << std::setw(10);
    std::cout << "last_name" << "|";
    std::cout << std::setw(10);
    std::cout << "nickname" << "|";
    std::cout << std::endl;
    while (i < this->nb_contact)
    {
        std::cout << std::setw(10);
        std::cout << i + 1 << "|";
        std::cout << std::setw(10);
        std::cout << this->list_contact[i].getFirstName() << "|";
        std::cout << std::setw(10);
        std::cout << this->list_contact[i].getLastName() << "|";
        std::cout << std::setw(10);
        std::cout << this->list_contact[i].getNickName() << "|";
        std::cout << std::endl;
        i++;
    }
    return ;
}

void    Phonebook::search(void) const{
    int index;
    if (this->nb_contact == 0)
    {
        std::cout << "Phonebook is currently empty..." << std::endl;
        return ;
    }
    this->print_contact();
    std::cout << "Enter index of a contact to show details" << std::endl;
    while (1)
    {
        std::cin >> index;
        if (std::cin.fail())
        {
            std::cout << "Enter a correct index" <<std::endl;
            std::cin.clear();
            std::cin.ignore(INT_MAX, '\n');
        }
        else if (index < 1 || index > this->nb_contact)
            std::cout << "Enter a correct index" <<std::endl;
        else
            break;
    }
    std::cin.ignore(INT_MAX, '\n');
    this->list_contact[index - 1].showContact();
    return ;
}

/*
 ** std::cin.clear();
 ** used to clear the failed state of cin
 **
 ** std::cin.ignore(INT_MAX, '\n');
 ** ignore tout ce qui est contenu dans le buffer de cin jusqu'au prochain retour à la ligne
 */
