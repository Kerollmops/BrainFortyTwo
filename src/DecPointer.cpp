/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecPointer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:46:52 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:48:06 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DecPointer.hpp"

/*
**	PUBLIC
*/

DecPointer::DecPointer(DecPointer const &src) {
	*this = src;
}

DecPointer				&DecPointer::operator=(DecPointer const &rhs) {
	static_cast<void>(rhs);
	return (*this);
}

DecPointer::~DecPointer() {

}

bool					DecPointer::execute(Memory & memory) {

	if (memory.offset() > 0) {

		--(memory.offset());
		return true;
	}
	return false;
}

DecPointer*				DecPointer::duplicate(void) const {

	return (new DecPointer(*this));
}

/*
**	PRIVATE
*/

DecPointer::DecPointer() {

}
