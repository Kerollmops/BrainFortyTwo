/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncPointer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:07:34 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:49:11 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IncPointer.hpp"

/*
**	PUBLIC
*/

IncPointer::IncPointer(IncPointer const &src) {

	*this = src;
}

IncPointer				&IncPointer::operator=(IncPointer const &rhs) {

	static_cast<void>(rhs);
	return (*this);
}

IncPointer::~IncPointer() {

}

bool					IncPointer::execute(Memory &memory) {

	if (memory.offset() < memory.size()) {

		++(memory.offset());
		return true;
	}
	return false;
}

IncPointer*				IncPointer::duplicate(void) const {

	return (new IncPointer(*this));
}

/*
**	PRIVATE
*/

IncPointer::IncPointer() {

}
