/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:15:24 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/14 12:12:20 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <exception>

class  Bureaucrat
{
private:
    const std::string _name;
    int _grade;
public:
    Bureaucrat();
    Bureaucrat(const Bureaucrat &b);
    Bureaucrat(std::string name, int grade);
    Bureaucrat & operator=(const Bureaucrat &b);
    ~Bureaucrat();
    
    class GradeTooHighException : public std::exception
    {
        const char* what() throw();
    };
    class GradeTooLowException : public std::exception
    {
        const char* what() throw();
    };
    
    const std::string & getName() const;
    const int & getGrade() const;
    void increment();
    void decrement();
    
};

#endif
