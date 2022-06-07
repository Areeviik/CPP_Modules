#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook
{
	public:
		Contact cntcs[8];
		int 	count;
		void	add(int i);
		void	search();
};

#endif
