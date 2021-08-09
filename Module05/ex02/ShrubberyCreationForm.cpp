#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	Form("ShrubberyCreationForm", 25, 5, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& cp):
	Form(cp)
{}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm&		ShrubberyCreationForm::operator=(ShrubberyCreationForm& op)
{
	Form::operator=(op);
	return *this;
}

void						ShrubberyCreationForm::action() const
{
	std::ofstream	file(this->getTarget() + "_shrubbery");

	if(file.is_open())
	{
		file << "                 # #### ####			" << std::endl;
        file << "               ### \\/#|### |/####		" << std::endl;
        file << "              ##\\/#/ \\||/##/_/##/_#	" << std::endl;
        file << "            ###  \\/###|/ \\/ # ###	" << std::endl;
        file << "          ##_\\_#\\_\\## | #/###_/_####" << std::endl;
        file << "         ## #### # \\ #| /  #### ##/##	" << std::endl;
        file << "          __#_--###`  |{,###---###-~	" << std::endl;
        file << "                    \\ }{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     }}{				" << std::endl;
        file << "                     {{}				" << std::endl;
        file << "               , -=-~{ .-^- _			" << std::endl;
        file << "                     `}				" << std::endl;
        file << "                      {				" << std::endl;
		file.close();
	}
}