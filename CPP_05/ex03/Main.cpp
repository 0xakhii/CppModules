
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        std::cout << "CREATION:" << '\n';
        Bureaucrat a("Bur1", 1);
        Bureaucrat b("Bur2", 1);
        std::cout << a << '\n' << b << '\n';
        std::cout << "----------------------------\n";
        PresidentialPardonForm p("President");
        ShrubberyCreationForm s("test");
        RobotomyRequestForm r("Robot");
        std::cout << p << '\n' << s << '\n' << r << '\n';
        std::cout << "----------------------------\n";
        std::cout << "SIGNING:" << '\n';
        p.beSigned(a);
        p.beSigned(b);
        s.beSigned(a);
        s.beSigned(b);
        r.beSigned(a);
        r.beSigned(b);
        std::cout << "-----------------------------\n";
        std::cout << p << '\n' << s << '\n' << r << '\n';
        std::cout << "----------------------------\n";
        std::cout << "POSSIBILITY TO SIGN:" << '\n';
        a.signForm(p);
        a.signForm(s);
        a.signForm(r);
        b.signForm(p);
        b.signForm(s);
        b.signForm(r);
        std::cout << "------------------------------\n";
        std::cout << "EXECUTING:" << '\n';
        s.execute(a);
        s.execute(b);
        r.execute(a);
        r.execute(b);
        p.execute(a);
        p.execute(b);
        std::cout << "-------------------------------\n";
        std::cout << "POSSIBILITY TO EXECUTING:" << '\n';
        a.executeForm(s);
        b.executeForm(s);
        a.executeForm(r);
        b.executeForm(r);
        a.executeForm(p);
        b.executeForm(p);
        std::cout << "--------------------------------\n";
        std::cout << "DISTRUCTORS:" << '\n';
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << '\n';
    }
}