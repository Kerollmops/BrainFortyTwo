/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Memory.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:49:05 by crenault          #+#    #+#             */
/*   Updated: 2015/04/18 14:43:35 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Memory.hpp"

Memory::Memory(size_t memSize)
	: _memSize(memSize),
	_offset(0),
	_mem(new char[this->_memSize]) {

	for (size_t i = 0; i < this->_memSize; ++i) {
		this->_mem[i] = 0;
	}
}

Memory::Memory(Memory const &src) {

	*this = src;
}

Memory::~Memory() {

	if (this->_mem != NULL)
		delete this->_mem;
}

Memory				&Memory::operator=(Memory const &rhs) {

	if (this->_mem != NULL)
		delete this->_mem;

	this->_memSize = rhs._memSize;
	this->_mem = new char[this->_memSize];
	for (size_t i = 0; i < this->_memSize; ++i) {
		this->_mem[i] = 0;
	}

	return *this;
}

char const			&Memory::operator[](size_t pos) const {

	return this->_mem[pos];
}

char const			&Memory::data(void) const {

	return *(this->_mem + this->_offset);
}

size_t const		&Memory::offset(void) const {

	return this->_offset;
}

size_t const		&Memory::size(void) const {

	return this->_memSize;
}

char				&Memory::data(void) {

	return *(this->_mem + this->_offset);
}

size_t				&Memory::offset(void) {

	return this->_offset;
}
