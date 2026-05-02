#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>
#include <string>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) // _signGrade = 145 _execGrade = 137
{
	
}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other), _target(other._target) // todo
{

}

void ShrubberyCreationForm::executeAction(Bureaucrat const &executor) const //doit creer un fichier <filename>_shrubbery dans le dir 
{   //et doit ecrire un arbre en ascii
	(void)executor;

	std::string filename = _target + "_shrubbery";
	std::ofstream outfile(filename.c_str());

	if(!outfile.is_open())
	{
		std::cerr << "Error: Could not create file " << filename << "\n";
	}
	outfile <<" ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠒⠉⠉⠉⢢⠤⠤⡀⢀⣀⣀⠀⡠⠖⠋⠉⠉⠒⢄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣄⠀⠀⠀⠀⠀⠀⢀⠎⠀⠀⠀⠙⠄⠀⠀⠀⠀⠀⠈⡇⣀⡀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠤⠐⠠⠄⡀⠀⠀⠀⢀⠄⠈⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠈⡇⠀⠀⠀⠀⠀⠀⠀"  << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⡄⠀⠀⠀⠀⠀⠹⠔⠒⠢⠇⠀⠀⠀⠀⠀⠀⠠⠤⡖⠁⠘⡄⠀⠀⠀⠀⣠⣃⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⢀⡠⠤⠄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⠀⠀⠀⠀⠰⡄⠀⠀⠈⠁⠀⠙⣄⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⡔⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠁⠀⠀⠀⠀⠀⠀⡜⠂⠲⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠸⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠉⠀⠉⢢⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣞⠀⠀⠘⠒⠂⡀" << "\n";
	outfile <<"⠀⢀⡠⠐⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⠁⠘⠂⠈⠆⠀⠀⠀⠀⠀⠀⠈⡆⠀⠀⠀⠀⡝" << "\n";
	outfile <<"⢠⠋⠀⠀⠀⡠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⢄⣀⣀⡠⡂⠀⠀⠀⠠⡄⠀⠀⢀⡀⠀⢀⡰⠃⠀⠀⠀⠺⣅" << "\n";
	outfile <<"⡇⠀⠀⠀⠀⠣⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠀⠀⡄⠀⠰⣀⡠⣀⠀⢀⣠⠎⠉⣹⣀⠀⠀⠀⠀⠀⣸" << "\n";
	outfile <<"⡇⠀⠀⠀⠀⢰⡁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣤⢷⠒⠂⠐⡎⠀⠀⠀⠀⠀⠀⠉⠁⠀⠀⠀⠁⠀⠉⢢⠀⢰⠊⠁" << "\n";
	outfile <<"⠘⢤⡤⠀⠀⠀⠑⠂⠐⢆⠀⣄⣀⣀⠀⠀⡀⢀⡴⠀⠀⡧⣀⠜⠑⠂⢺⢳⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡜⠐⠃⠀⠀" << "\n";
	outfile <<"⠀⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⢎⠀⠡⠀⠀⠱⡀⣠⠀⠀⡏⠈⢱⢲⠂⠀⠀⠀⠀⠀⠀⠀⠀⠱⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠱⣄⡀⣠⠃⠀⠀⠀⠀⠀⠀⠀⠉⢫⣁⢫⡳⢄⢣⠀⠀⠉⠀⠀⢰⠇⢀⠇⢾⡻⠖⢖⠁⠀⡀⡀⠀⢀⡼⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠸⡀⠀⠀⠀⠐⣄⣀⣀⡠⠎⠓⢯⡀⠀⢸⠀⠀⠀⠀⠀⣸⢁⠎⡴⡋⠀⠀⠀⡉⠉⠀⠈⡏⠁⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠉⠒⠒⠒⠋⠀⠀⠀⠀⠀⠀⠀⠹⡄⠀⠀⠀⠀⠀⠀⣿⢏⡾⠝⠓⠢⠤⠊⠈⠑⠒⠊⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣧⠀⠀⠀⡠⠄⣀⣿⡎⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⠀⠀⢸⡜⣉⢿⢿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡿⠀⠀⠸⡱⡻⡸⢸⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⡤⢄⡀⠀⢀⣀⣀⢇⠀⠀⠀⠉⠈⠀⡎⣇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠠⢤⡤⠀⢘⡆⠈⠋⣑⣽⣾⠌⠀⠀⠀⠀⠀⠀⠣⣸⣄⠀⢹⡅⠀⠔⠪⠿⢤⣤⠀⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠐⠈⠉⠀⢀⣤⣖⣋⣁⣀⣋⣀⣀⠀⠒⠒⠄⠀⠀⠈⠈⠓⠦⢤⣀⠀⠀⠀⠀⠀⠑⠀⠀⠀⠀⠀⠀" << "\n";
	outfile <<"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠒⠦⣄⣸⡟⠒⠒⠒⠒⠒⠚⠛⠀⠀⠀⠀⠀⢰⣶⣶⣶⣶⣶" << "\n\n";

	outfile.close();

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) //todo
{
	if(this != &other)
		AForm::operator=(other);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() // todo
{
    
}
