/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbino <ealbino@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 10:36:02 by ealbino           #+#    #+#             */
/*   Updated: 2026/10/16 10:36:05 by ealbino          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest: " << sp.longestSpan() << std::endl;

    try {
        sp.addNumber(42);
    } catch (std::exception& e) {
        std::cout << "Full: " << e.what() << std::endl;
    }

    Span empty(5);
    try {
        empty.shortestSpan();
    } catch (std::exception& e) {
        std::cout << "Empty: " << e.what() << std::endl;
    }

    Span big(10000);
    std::vector<int> manyNumbers;
    for (int i = 0; i < 10000; i++) {
        manyNumbers.push_back(i);
    }
    big.addNumber(manyNumbers.begin(), manyNumbers.end());

    std::cout << "Big shortest: " << big.shortestSpan() << std::endl;
    std::cout << "Big longest: " << big.longestSpan() << std::endl;

    return (0);
}
