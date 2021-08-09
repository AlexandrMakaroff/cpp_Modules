#include "RobotomyRequestForm.hpp"
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	Form("RobotomyRequestForm", 25, 5, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& cp):
	Form(cp)
{}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm&		RobotomyRequestForm::operator=(RobotomyRequestForm& op)
{
	Form::operator=(op);
	return *this;
}

void						RobotomyRequestForm::action() const
{
	srand(static_cast<unsigned int>(time(0)));
	std::cout << "*sounds of robotics*" << std::endl;
	if ((rand() % 100) > 50)
		std::cout << this->getTarget() << " has been robotomized successfully 50 of the time." << std::endl;
	else
		std::cout << this->getTarget() << " robotization failure" << std::endl;
}