/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yait-kad <yait-kad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 15:33:04 by yait-kad          #+#    #+#             */
/*   Updated: 2022/01/06 20:46:52 by yait-kad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "karen.hpp"

int main()
{
    karen *msg=new karen();
    std::string level;
    std::cout << "enter a level: ";
    std::cin >> level;

    msg->complain(level);
    return (0);
}