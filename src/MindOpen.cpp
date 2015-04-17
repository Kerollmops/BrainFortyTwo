/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MindOpen.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:43:07 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 20:55:26 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MindOpen.hpp"

MindOpen::MindOpen() {

	//
}

MindOpen::MindOpen(MindOpen const &src) {

	*this = src;
}

MindOpen::~MindOpen() {

	//
}

MindOpen				&MindOpen::operator=(MindOpen const &rhs) {

	this->_instructions = rhs._instructions;
	this->_charIInstr = rhs._charIInstr;
	this->_toIgnore = rhs._toIgnore;
	return *this;
}

bool					MindOpen::addCharIInstr(char c, IInstruction *instr) {

	// if char to allready exist in ignore list
	if (this->_toIgnore.find(c) != this->_toIgnore.end())
		return false;

	this->_charIInstr[c] = instr;
	return true;
}

bool					MindOpen::addIgnore(char c) {

	// if char to allready exist in char to use
	if (this->_charIInstr.find(c) != this->_charIInstr.end())
		return false;

	this->_toIgnore.insert(c);
	return true;
}

bool					MindOpen::readFile(std::string path) {

	std::ifstream		ifs;
	char				c;

	ifs.open(path.c_str(), std::ifstream::in);
	c = ifs.get();
	while (ifs.good()) {

		if (this->_getIInstr(c) == false) {

			ifs.close();
			return false;
		}
		c = ifs.get();
	}
	ifs.close();
	return true;
}

bool					MindOpen::_getIInstr(char &c) {

	std::set<char>::iterator					itIgnore;
	std::map<char, IInstruction *>::iterator	itInstr;

	if ((itIgnore = this->_toIgnore.find(c)) != this->_toIgnore.end())
		return true;

	if ((itInstr = this->_charIInstr.find(c)) != this->_charIInstr.end()) {

		this->_addIInstr(itInstr->second->duplicate());
		return true;
	}
	return false;
}

bool					MindOpen::_addIInstr(IInstruction *instr) {

	While *				tmp = NULL;

	if (this->_unstackWhile(instr) == true) {

		return true;
	}
	if (this->_whiles.empty() == false) {

		this->_whiles.top()->addInstr(instr);
		if ((tmp = dynamic_cast<While *>(instr)) != NULL) {

			this->_whiles.push(tmp);
		}
		return true;
	}
	this->_instructions.push(instr);
	if ((tmp = dynamic_cast<While *>(instr)) != NULL) {

		this->_whiles.push(tmp);
	}
	return true;
}

bool					MindOpen::_unstackWhile(IInstruction * instr) {

	if (dynamic_cast<CloseWhile *>(instr) != NULL &&
		this->_whiles.empty() == false) {

		this->_whiles.pop();
		return true;
	}
	return false;
}

bool					MindOpen::execute(void) {

	Memory			memory(30000);

	while (this->_instructions.empty() == false) {

		if (this->_instructions.front()->execute(memory) == false) {

			return (false);
		}
		this->_instructions.pop();
	}
	return true;
}
