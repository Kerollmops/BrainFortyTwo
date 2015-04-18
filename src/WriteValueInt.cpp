/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteValueInt.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:42:09 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/18 15:36:36 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WriteValueInt.hpp"

/*
**	PUBLIC
*/

WriteValueInt::WriteValueInt(WriteValueInt const &src) {

	*this = src;
}

WriteValueInt				&WriteValueInt::operator=(WriteValueInt const &rhs) {

	static_cast<void>(rhs);
	return (*this);
}

WriteValueInt::~WriteValueInt() {

}

bool					WriteValueInt::execute(Memory &mem) {

	std::cout << (unsigned int)(mem.data()) << " ";
	return true;
}

WriteValueInt*				WriteValueInt::duplicate(void) const {

	return (new WriteValueInt(*this));
}

/*
**	PRIVATE
*/

WriteValueInt::WriteValueInt() {

}
