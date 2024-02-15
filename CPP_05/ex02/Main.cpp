
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("Bur1", 1);
        Bureaucrat b("Bur2", 1);
        PresidentialPardonForm p("President");
        ShrubberyCreationForm s("shrubbery");
        RobotomyRequestForm r("Robotomy");
        p.beSigned(a);
        s.beSigned(b);
        r.beSigned(a);
        a.signForm(p);
        b.signForm(p);
        b.signForm(s);
        s.execute(a);
        r.execute(a);
        p.execute(a);
        a.executeForm(p);
        b.executeForm(r);
        b.executeForm(s);
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
}