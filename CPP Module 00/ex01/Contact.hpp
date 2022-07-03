/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <akhachat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:05:31 by akhachat          #+#    #+#             */
/*   Updated: 2022/06/07 18:44:22 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>

class Contact
{
	private:
		std::string name;
		std::string last_name;
		std::string nickname;
		std::string number;
		std::string secret;
	public:
		void set_name(std::string name);
		void set_last_name(std::string last_name);
		void set_nickname(std::string nickname);
		void set_number(std::string number);
		void set_secret(std::string secret);
		std::string get_name() const;
		std::string get_last_name() const;
		std::string get_nickname() const;
		std::string get_number() const;
		std::string get_secret() const;
};

#endif
