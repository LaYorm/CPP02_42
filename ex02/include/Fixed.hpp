/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:20:43 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/16 17:33:42 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_raw_bits;
		static const int	_number_fractional_bits;
		
	public:
		//Constructors abd Destructor
		Fixed();
		~Fixed();
		Fixed(Fixed const &raw);
		Fixed(const int raw);
		Fixed(const float raw);
		
		//Overload operators
		Fixed	&operator=(Fixed const &other);
		
		bool	operator>(Fixed const &other)const;
		bool	operator<(Fixed const &other)const;
		bool	operator>=(Fixed const &other)const;
		bool	operator<=(Fixed const &other)const;
		bool	operator==(Fixed const &other)const;
		bool	operator!=(Fixed const &other)const;

		Fixed	operator+(Fixed const &other)const;
		Fixed	operator-(Fixed const &other)const;
		Fixed	operator*(Fixed const &other)const;
		Fixed	operator/(Fixed const &other)const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		
		//Mumbers fcts
		int		getRawBits(void)const;
		void	setRawBits(int const raw);
		float	toFloat(void)const;
		int		toInt(void)const;
		static Fixed		&min(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &other);

#endif