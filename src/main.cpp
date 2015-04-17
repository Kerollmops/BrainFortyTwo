/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:42:01 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 21:25:04 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MindOpen.hpp"

int					main(/*int argc, char const *argv[]*/void) {

	MindOpen		mindOpen;

	// instruction creation
	While			whileInst;
	CloseWhile		closeWhileInst;
	DecPointer		decPointerInst;
	IncPointer		incPointerInst;
	DecValue		decValueInst;
	IncValue		incValueInst;
	ReadChar		readCharInst;
	WriteValue		writeValueInst;

	bool			checkCharIInstr = true;
	checkCharIInstr &= mindOpen.addCharIInstr('[', &whileInst);
	checkCharIInstr &= mindOpen.addCharIInstr(']', &closeWhileInst);
	checkCharIInstr &= mindOpen.addCharIInstr('<', &decPointerInst);
	checkCharIInstr &= mindOpen.addCharIInstr('>', &incPointerInst);
	checkCharIInstr &= mindOpen.addCharIInstr('-', &decValueInst);
	checkCharIInstr &= mindOpen.addCharIInstr('+', &incValueInst);
	checkCharIInstr &= mindOpen.addCharIInstr(',', &readCharInst);
	checkCharIInstr &= mindOpen.addCharIInstr('.', &writeValueInst);
	if (checkCharIInstr == false) {

		std::cerr << "Error: adding char instruction" << std::endl;
		return 1;
	}

	// ignore list creation
	bool			checkIgnore = true;
	checkIgnore &= mindOpen.addIgnore(' ');
	checkIgnore &= mindOpen.addIgnore('\t');
	checkIgnore &= mindOpen.addIgnore('\n');
	if (checkIgnore == false) {

		std::cerr << "Error: adding ignore char" << std::endl;
		return 1;
	}

	// launching
	if (mindOpen.readFile("test.bf") == false) {

		std::cerr << "Error: reading file" << std::endl;
		return 1;
	}
	if (mindOpen.execute() == false) {

		std::cerr << "Error: execution" << std::endl;
		return 1;
	}
	return 0;
}
