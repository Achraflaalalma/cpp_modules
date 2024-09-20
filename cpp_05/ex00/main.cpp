#include "Bureaucrat.hpp"

int main()
{
    try {
        Bureaucrat bureaucrat("achraf", 2);
        std::cout << bureaucrat << std::endl;
        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;
        bureaucrat.decrementGrade();
        std::cout << bureaucrat << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << "exception caught: " << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << "exception caught: " << e.what() << std::endl;
    }
    return (EXIT_SUCCESS);
}


