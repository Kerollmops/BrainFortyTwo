/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   While.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 15:15:56 by crenault          #+#    #+#             */
/*   Updated: 2015/04/18 15:03:15 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/While.hpp"

While::While() {

	//
}

While::While(While const &src) {

	*this = src;
}

While::~While() {

	//
}

While				&While::operator=(While const &rhs) {

	static_cast<void>(rhs);
	return *this;
}

bool				While::execute(Memory &mem) {

	while (mem.data() != 0) {

		for (std::deque<IInstruction *>::iterator it = this->_instructions.begin();
			it != this->_instructions.end(); ++it) {

			if ((*it)->execute(mem) == false) {

				ErrorDisp::execution(*it, mem);
				return false;
			}
		}
	}
	return true;
}

While				*While::duplicate(void) const {

	return new While(*this);
}

void				While::addInstr(IInstruction *instr) {

	this->_instructions.push_back(instr);
}
