/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecPointer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 15:47:23 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:41:50 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECPOINTER_HPP
# define DECPOINTER_HPP
# include <iostream>
# include "IInstruction.hpp"

class DecPointer : public IInstruction {

public:

//	CONSTRUCTORS

	DecPointer();
	DecPointer(DecPointer const &);
	DecPointer			&operator=(DecPointer const &);
	virtual ~DecPointer();

//	MEMBER FUNCTIONS

	bool			execute(Memory & instruction);
	DecPointer*		duplicate(void) const;

private:

};

#endif
