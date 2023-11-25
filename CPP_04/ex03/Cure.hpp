#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(const Cure& Cure);
        Cure &operator=(const Cure& Cure);
        ~Cure();

        Cure(std::string const & type);
        std::string const & getType() const;
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif