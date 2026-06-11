/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/11 15:02:03 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/11 15:50:24 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "iostream"

class Fixed
{
	private:
		int					_fixed_point_number;
		static const int	number_of_fractional_bits;
		
	public:
		Fixed();  //canonic
		~Fixed();  //canonic
		Fixed(Fixed const &other);  //canonic
		Fixed	&operator=(Fixed const &other);  //canonic

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		
};

#endif