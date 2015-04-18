/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ErrorDisp.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crenault <crenault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/04/18 14:10:28 by crenault          #+#    #+#             */
/*   Updated: 2015/04/18 14:42:46 by crenault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERRORDISP_HPP
# define ERRORDISP_HPP

# include <iostream>
# include <iomanip>
# include "IInstruction.hpp"

namespace ErrorDisp {

	void			execution(IInstruction const *, Memory const &);

};

#endif
