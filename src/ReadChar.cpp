/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadChar.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:44:36 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 18:27:36 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ReadChar.hpp"

/*
**	PUBLIC
*/

ReadChar::ReadChar(ReadChar const &src) {

	*this = src;
}

ReadChar				&ReadChar::operator=(ReadChar const &rhs) {

	static_cast<void>(rhs);
	return (*this);
}

ReadChar::~ReadChar() {

}

bool					ReadChar::execute(Memory &mem) {

	std::cin >> mem.data();
	return true;
}

ReadChar*				ReadChar::duplicate(void) const {

	return (new ReadChar(*this));
}

/*
**	PRIVATE
*/

ReadChar::ReadChar() {

}
