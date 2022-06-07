#include "Phonebook.hpp"

void Contact::set_name(std::string name)
{
	this->name = name;
}

void Contact::set_last_name(std::string last_name)
{
	this->last_name = last_name;
}

void Contact::set_nickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::set_number(std::string number)
{
	this->number = number;
}

void Contact::set_secret(std::string secret)
{
	this->secret = secret;
}

std::string Contact::get_name() const
{
	return name;
}

std::string Contact::get_last_name() const
{
	return last_name;
}

std::string Contact::get_nickname() const
{
	return nickname;
}

std::string Contact::get_number() const
{
	return number;
}

std::string Contact::get_secret() const
{
	return secret;
}