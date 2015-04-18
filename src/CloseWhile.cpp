/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CloseWhile.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 17:42:58 by crenault          #+#    #+#             */
/*   Updated: 2015/04/18 14:04:20 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/CloseWhile.hpp"

CloseWhile::CloseWhile() {

	//
}

CloseWhile::CloseWhile(CloseWhile const &src) {

	*this = src;
}

CloseWhile::~CloseWhile() {

	//
}

CloseWhile				&CloseWhile::operator=(CloseWhile const &rhs) {

	static_cast<void>(rhs);
	return *this;
}

bool				CloseWhile::execute(Memory & memory) {

	static_cast<void>(memory);
	return true;
}

CloseWhile			*CloseWhile::duplicate(void) const {

	return (new CloseWhile(*this));
}
