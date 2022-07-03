/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/16 14:50:28 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/16 14:50:28 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    public:
        Karen();
        ~Karen();
        void complain(std::string level);
};

#endif