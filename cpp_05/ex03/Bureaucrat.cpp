#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
    // std::cout << "Default constructor called" << std::endl;
    this->grade = LOWEST_GRADE;
}

Bureaucrat::Bureaucrat(std::string   name, int grade) : name(name) {
    // std::cout << "Constructor called" << std::endl;
    if (grade < HIGHEST_GRADE)
       throw  Bureaucrat::GradeTooHighException();
    if (grade > LOWEST_GRADE)
       throw  Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = rhs;

}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
    if (this != &rhs) {
        this->grade = rhs.grade;
    }
    return *this;
}

Bureaucrat::~Bureaucrat() {
    // std::cout << "Destructor called" << std::endl;
}

const std::string& Bureaucrat::getName() const {
    return this->name;
}

int Bureaucrat::getGrade() const {
    return this->grade;
}

void    Bureaucrat::incrementGrade() {
        if ((grade - 1) < HIGHEST_GRADE )
            throw Bureaucrat::GradeTooHighException();
        this->grade--;
}

void    Bureaucrat::decrementGrade() {
        if ((grade + 1) > LOWEST_GRADE )
            throw Bureaucrat::GradeTooLowException();
        this->grade++;
}  

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "TooHighException";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "TooLowException";
}

void Bureaucrat::executeForm(AForm const & form) {
    try {
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e) {
        std::cout << this->getName() << " cannot execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
std::ostream& operator<<(std::ostream& os, Bureaucrat& rhs) {
    //    std::cout << "Overloading operator called" << std::endl;
    os << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
    return os;
}

