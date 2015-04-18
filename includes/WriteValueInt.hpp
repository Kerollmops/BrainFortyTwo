/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WriteValueInt.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:41:16 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/18 15:20:27 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRITEVALUEINT_HPP
# define WRITEVALUEINT_HPP
# include <iostream>
# include "IInstruction.hpp"

class WriteValueInt : public IInstruction {

public:

//	CONSTRUCTORS

	WriteValueInt();
	WriteValueInt(WriteValueInt const &);
	WriteValueInt			&operator=(WriteValueInt const &);
	virtual ~WriteValueInt();

//	MEMBER FUNCTIONS

	bool			execute(Memory &mem);
	WriteValueInt		*duplicate(void) const;

private:

};

#endif
