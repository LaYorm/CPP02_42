/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorimek <yorimek@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 09:52:21 by yorimek           #+#    #+#             */
/*   Updated: 2026/06/24 10:48:58 by yorimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Point.hpp"

int main( void ) 
{
	Point const A(1.0, 1.0);
	Point const B(2.0, 6.0);
	Point const C(4.0, 3.0);
	Point const Point(2.0, 3.0);

	if (!bsp(A, B, C, Point))
	{
		std::cout << "Le point n'est pas dans le triangle" << std::endl;
		return (1);
	}
	std::cout << "Le point est bien strictement dans le triangle" << std::endl;
	return (0);
}