/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteValue.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:42:09 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 18:27:35 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WriteValue.hpp"

/*
**	PUBLIC
*/

WriteValue::WriteValue(WriteValue const &src) {

	*this = src;
}

WriteValue				&WriteValue::operator=(WriteValue const &rhs) {

	static_cast<void>(rhs);
	return (*this);
}

WriteValue::~WriteValue() {

}

bool					WriteValue::execute(Memory &mem) {

	std::cout << mem.data();
	return true;
}

WriteValue*				WriteValue::duplicate(void) const {

	return (new WriteValue(*this));
}

/*
**	PRIVATE
*/

WriteValue::WriteValue() {

}
