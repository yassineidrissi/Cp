/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 12:27:08 by yaidriss          #+#    #+#             */
/*   Updated: 2023/11/09 15:19:51 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria *materia[4];
		int count;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &src);
		MateriaSource &operator=(const MateriaSource &src);
		virtual ~MateriaSource();
		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};
