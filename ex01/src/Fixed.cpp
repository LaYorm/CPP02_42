/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 12:00:57 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/12 16:02:38 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::_number_of_fractional_bits = 8;

Fixed::Fixed(): _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" <<std::endl;
}

Fixed::Fixed(Fixed const &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
	return ;
}

Fixed::Fixed(const int raw)
{
	std::cout << "Int constructor called" << std::endl;
	this->_raw_bits = raw << _number_of_fractional_bits;
	return ;
}

Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(raw * 256.0f);
	return ;
}

Fixed &Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_raw_bits = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &other)
{
	o << other.toFloat();
	return (o);
}


int	Fixed::getRawBits(void) const
{
	return (this->_raw_bits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_raw_bits = raw;
	return ;
}

float	Fixed::toFloat(void)const
{
	 return ((float)this->_raw_bits / (float)(1 << _number_of_fractional_bits));
}

int		Fixed::toInt(void)const
{
	return (this->_raw_bits >> _number_of_fractional_bits);
}
