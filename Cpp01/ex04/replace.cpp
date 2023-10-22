/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 21:53:54 by yaidriss          #+#    #+#             */
/*   Updated: 2023/10/20 18:36:52 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"


void ft_replace(std::ofstream &newfd, std::ifstream &inf, std::string s1, std::string s2) {
    std::string line;
    while (std::getline(inf, line)) {
        std::string new_line;
        std::size_t pos = 0;
        std::size_t found = line.find(s1, pos);

        while (found != std::string::npos) {
            new_line += line.substr(pos, found - pos);  // Append characters before the match.
            new_line += s2;  // Append the replacement string.
            pos = found + s1.length();  // Move the position past the match.
            found = line.find(s1, pos);  // Find the next match.
        }

        // Append the remaining characters in the line.
        new_line += line.substr(pos);
        
        newfd << new_line << std::endl;
    }
}
