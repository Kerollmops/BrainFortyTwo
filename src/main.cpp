/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:42:01 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 18:23:21 by crenault         ###   ########.fr       */
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

	mindOpen.addCharIInstr('[', &whileInst);
	mindOpen.addCharIInstr(']', &closeWhileInst);
	mindOpen.addCharIInstr('<', &decPointerInst);
	mindOpen.addCharIInstr('>', &incPointerInst);
	mindOpen.addCharIInstr('-', &decValueInst);
	mindOpen.addCharIInstr('+', &incValueInst);
	mindOpen.addCharIInstr(',', &readCharInst);
	mindOpen.addCharIInstr('.', &writeValueInst);

	// ignore list creation
	mindOpen.addIgnore(' ');
	mindOpen.addIgnore('\n');

	// launching
	if (mindOpen.readFile("test.bf") == true) {

		if (mindOpen.execute() == false) {

			std::cerr << "Error: execution" << std::endl;
		}
	}
	else {

		std::cerr << "Error: reading file" << std::endl;
	}

	return 0;
}
