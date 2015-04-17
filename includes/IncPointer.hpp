/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncPointer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:46:24 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:42:02 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCPOINTER_HPP
# define INCPOINTER_HPP
# include <iostream>
# include "IInstruction.hpp"

class IncPointer : public IInstruction {

public:

//	CONSTRUCTORS

	IncPointer();
	IncPointer(IncPointer const &);
	IncPointer			&operator=(IncPointer const &);
	virtual ~IncPointer();

//	MEMBER FUNCTIONS

	bool			execute(Memory & instruction);
	IncPointer*		duplicate(void) const;

private:

};

#endif
