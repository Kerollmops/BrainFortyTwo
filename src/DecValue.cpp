/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecValue.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:33:28 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:47:18 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/DecValue.hpp"

/*
**	PUBLIC
*/

DecValue::DecValue(DecValue const &src) {
	*this = src;
}

DecValue				&DecValue::operator=(DecValue const &rhs) {
	static_cast<void>(rhs);
	return (*this);
}

DecValue::~DecValue() {

}

bool					DecValue::execute(Memory & memory) {

	--(memory.data());
	return (true);
}

DecValue*				DecValue::duplicate(void) const {

	return (new DecValue(*this));
}

/*
**	PRIVATE
*/

DecValue::DecValue() {

}
