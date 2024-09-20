#pragma once

#include <iostream>

#define LOWEST_GRADE 150
#define HIGHEST_GRADE 1

class Bureaucrat {
    private:
        const std::string   name;
        int                 grade;
    public:
        Bureaucrat();
        Bureaucrat(std::string   name, int grade);
        Bureaucrat(const Bureaucrat& rhs);
        Bureaucrat& operator=(const Bureaucrat& rhs);
        ~Bureaucrat();

        const   std::string& getName() const;
        int     getGrade() const;

        void    incrementGrade();
        void    decrementGrade();

        // Custom exceptions
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };

 };
 std::ostream& operator<<(std::ostream& os, Bureaucrat& obj);