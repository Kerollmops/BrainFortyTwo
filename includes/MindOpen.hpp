/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MindOpen.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/17 14:42:56 by crenault          #+#    #+#             */
/*   Updated: 2015/04/17 18:19:15 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINDOPEN_HPP
# define MINDOPEN_HPP

# include <iostream>
# include <stack>
# include <queue>
# include <map>
# include <set>
# include <fstream>

# include "IInstruction.hpp"
# include "While.hpp"
# include "CloseWhile.hpp"
# include "DecPointer.hpp"
# include "IncPointer.hpp"
# include "DecValue.hpp"
# include "IncValue.hpp"
# include "ReadChar.hpp"
# include "WriteValue.hpp"

class MindOpen {

public:
	MindOpen();
	MindOpen(MindOpen const &);
	virtual ~MindOpen();
	MindOpen					&operator=(MindOpen const &);

	bool						addCharIInstr(char c, IInstruction *);
	bool						addIgnore(char c);

	bool						readFile(std::string path);
	bool						execute(void);

private:
	bool						_getIInstr(char &c);
	bool						_addIInstr(IInstruction *instr);
	bool						_unstackWhile(IInstruction * inst);

	std::queue<IInstruction *>	_instructions;
	std::stack<While *>			_whiles;

	std::map<char, IInstruction *>	_charIInstr;
	std::set<char>				_toIgnore;

};

#endif
