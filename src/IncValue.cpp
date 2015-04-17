/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncValue.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:15:15 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:49:47 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/IncValue.hpp"

/*
**	PUBLIC
*/

IncValue::IncValue(IncValue const &src) {

	*this = src;
}

IncValue				&IncValue::operator=(IncValue const &rhs) {

	static_cast<void>(rhs);
	return (*this);
}

IncValue::~IncValue() {

}

bool					IncValue::execute(Memory & instruction) {

	++instruction.data();
	return (true);
}

IncValue*				IncValue::duplicate(void) const {

	return (new IncValue(*this));
}

/*
**	PRIVATE
*/

IncValue::IncValue() {

}
