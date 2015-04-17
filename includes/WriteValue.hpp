/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteValue.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:41:16 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 18:27:34 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITEVALUE_HPP
# define WRITEVALUE_HPP
# include <iostream>
# include "IInstruction.hpp"

class WriteValue : public IInstruction {

public:

//	CONSTRUCTORS

	WriteValue();
	WriteValue(WriteValue const &);
	WriteValue			&operator=(WriteValue const &);
	virtual ~WriteValue();

//	MEMBER FUNCTIONS

	bool			execute(Memory &mem);
	WriteValue		*duplicate(void) const;

private:

};

#endif
