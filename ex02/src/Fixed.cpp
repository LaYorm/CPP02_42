/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 12:20:25 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/16 17:36:03 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int	Fixed::_number_fractional_bits = 8;

Fixed::Fixed(): _raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
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
	this->_raw_bits = raw << _number_fractional_bits;
	return ;
}
Fixed::Fixed(const float raw)
{
	std::cout << "Float constructor called" << std::endl;
	this->_raw_bits = roundf(raw * 256.0f);
	return ;
}

int		Fixed::getRawBits(void)const
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
	return ((float)this->_raw_bits / (float)(1 << _number_fractional_bits));
}
int		Fixed::toInt(void)const
{
	return (this->_raw_bits >> _number_fractional_bits);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &other)
{
	o << other.toFloat();
	return (o);
}

Fixed	&Fixed::operator=(Fixed const &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(other.getRawBits());
	return (*this);
}

bool	Fixed::operator>(Fixed const &other)const
{
	return (this->getRawBits() > other.getRawBits());
}

bool	Fixed::operator<(Fixed const &other)const
{
	return (this->getRawBits() < other.getRawBits());
}

bool	Fixed::operator>=(Fixed const &other)const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool	Fixed::operator<=(Fixed const &other)const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool	Fixed::operator==(Fixed const &other)const
{
	return (this->getRawBits() == other.getRawBits());
}

bool	Fixed::operator!=(Fixed const &other)const
{
	return (this->getRawBits() != other.getRawBits());
}

Fixed	Fixed::operator+(Fixed const &other)const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator-(Fixed const &other)const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator*(Fixed const &other)const
{
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed	Fixed::operator/(Fixed const &other)const
{
	return Fixed(this->toFloat() / other.toFloat());
}

Fixed	&Fixed::operator++(void)
{
	this->_raw_bits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp;

	temp.setRawBits(this->_raw_bits++);
	return (temp);
}

Fixed	&Fixed::operator--(void)
{
	this->_raw_bits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp;

	temp.setRawBits(this->_raw_bits--);
	return (temp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{

	if (a < b)
		return (a);
	else
		return (b);
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{

	if (a < b)
		return (a);
	else
		return (b);
}

Fixed		&Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{

	if (a > b)
		return (a);
	else
		return (b);
}
