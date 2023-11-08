/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:36:51 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/08 19:04:34 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
	public:
		Character();
		Character(std::string name);
		Character(const Character &src);
		Caracter &operator=(const Character &src);
		virtual ~Character();
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};