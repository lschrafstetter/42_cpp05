/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lschrafs <lschrafs@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:04:49 by lschrafs          #+#    #+#             */
/*   Updated: 2022/10/06 10:37:58 by lschrafs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat abby("Abby", 2);
	Bureaucrat ben("Ben", 149);
	std::cout << abby << std::endl;
	std::cout << ben << GREEN << std::endl;
	abby.incrementGrade();
	
	try {
		abby.incrementGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl;
	} 
	
	ben.decrementGrade();

	try {
		ben.decrementGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << DEFAULT << abby << std::endl;
	std::cout << ben << std::endl;
}