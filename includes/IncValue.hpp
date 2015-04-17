/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncValue.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:16:49 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:42:06 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INCVALUE_HPP
# define INCVALUE_HPP
# include <iostream>
# include "IInstruction.hpp"

class IncValue : public IInstruction {

public:

//	CONSTRUCTORS

	IncValue();
	IncValue(IncValue const &);
	IncValue			&operator=(IncValue const &);
	virtual ~IncValue();

//	MEMBER FUNCTIONS

	bool			execute(Memory & instruction);
	IncValue*		duplicate(void) const;

private:

};

#endif
