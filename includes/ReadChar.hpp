/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReadChar.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:44:02 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 18:26:28 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READCHAR_HPP
# define READCHAR_HPP
# include <iostream>
# include "IInstruction.hpp"

class ReadChar : public IInstruction {

public:

//	CONSTRUCTORS

	ReadChar();
	ReadChar(ReadChar const &);
	ReadChar			&operator=(ReadChar const &);
	virtual ~ReadChar();

//	MEMBER FUNCTIONS

	bool			execute(Memory &mem);
	ReadChar*		duplicate(void) const;

private:

};

#endif
