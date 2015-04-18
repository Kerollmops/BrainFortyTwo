/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorDisp.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:10:28 by crenault          #+#    #+#             */
/*   Updated: 2015/04/18 14:52:09 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ErrorDisp.hpp"

void			ErrorDisp::execution(IInstruction const *instr, Memory const &mem) {

	size_t			maxMem;
	size_t			minMem;

	std::cerr
	<< std::endl
	<< "Instruction: " << typeid(*instr).name()
	<< std::endl
	<< "Memory: "
		<< "offset(" << mem.offset() << ")"
		<< std::endl;

		minMem = (mem.offset() < 10) ? 0 : mem.offset() - 10;
		maxMem = (mem.offset() + 10 > mem.size()) ? mem.size() : mem.offset() + 10;

		for (size_t i = minMem; i < maxMem; ++i) {

			std::cerr
			<< std::setw(1) << " "
			<< std::setw(3) << "'" << char(mem[i]) << "'"
			<< std::setw(1) << " ";
		}
		std::cerr << std::endl;
		for (size_t i = minMem; i < maxMem; ++i) {

			std::cerr
			<< std::setw(0) << " "
			<< std::setw(5) << int(mem[i])
			<< std::setw(1) << " ";
		}
	std::cerr << std::endl;
}
