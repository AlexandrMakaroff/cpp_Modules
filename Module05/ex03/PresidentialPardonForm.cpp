#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	Form("PresidentialPardonForm", 25, 5, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& cp):
	Form(cp)
{}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm&		PresidentialPardonForm::operator=(PresidentialPardonForm& op)
{
	Form::operator=(op);
	return *this;
}

void						PresidentialPardonForm::action() const
{
	std::cout << this->getTarget() << "has been pardoned by Zafod Beeblebrox." << std::endl;
}