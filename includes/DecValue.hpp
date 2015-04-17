/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DecValue.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/16 16:32:38 by cchevall          #+#    #+#             */
/*   Updated: 2015/04/17 17:41:58 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DECVALUE_HPP
# define DECVALUE_HPP
# include <iostream>
# include "IInstruction.hpp"

class DecValue : public IInstruction {

public:

//	CONSTRUCTORS

	DecValue();
	DecValue(DecValue const &);
	DecValue			&operator=(DecValue const &);
	virtual ~DecValue();

	bool			execute(Memory & instruction);
	DecValue*		duplicate(void) const;

private:

};

#endif
