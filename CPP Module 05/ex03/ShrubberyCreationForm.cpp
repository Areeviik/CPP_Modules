#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("Shrubbery Creation", 145, 137), _target("No target"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    :Form("Shrubbery Creation", 145, 137), _target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oth)
    :Form("Shrubbery Creation", 145, 137), _target(oth._target + "_copy")
{
    *this = oth;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm & ShrubberyCreationForm:: operator=(const ShrubberyCreationForm &val)
{
    if (this != &val)
        *this = val;
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    std::ofstream file;
    std::string fn = this->_target + "_shrubbery";
    file.open(fn.c_str());
    std::cout<<"              _{\\ _{\\{\\/}/}/}__"<<std::endl;
    std::cout<<"             {/{/\\}{/{/\\}(\\}{/\\} _"<<std::endl;
    std::cout<<"            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _"<<std::endl;
    std::cout<<"         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}"<<std::endl;
    std::cout<<"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}"<<std::endl;
    std::cout<<"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}"<<std::endl;
    std::cout<<"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}"<<std::endl;
    std::cout<<"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}"<<std::endl;
    std::cout<<"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}"<<std::endl;
    std::cout<<"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}"<<std::endl;
    std::cout<<"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)"<<std::endl;
    std::cout<<"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}"<<std::endl;
    std::cout<<"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}"<<std::endl;
    std::cout<<"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}"<<std::endl;
    std::cout<<"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)"<<std::endl;
    std::cout<<"            {/{/{\\{\\/}{/{\\{\\{\\(_)/}"<<std::endl;
    std::cout<<"             {/{\\{\\{\\/}/}{\\{\\}/}"<<std::endl;
    std::cout<<"              {){/ {\\/}{\\/} \\}\\}"<<std::endl;
    std::cout<<"              (_)  \\.-'.-/"<<std::endl;
    std::cout<<"          __...--- |'-.-'| --...__"<<std::endl;
    std::cout<<"   _...--;   .-;   |'-.-'|  ' -.  ""--..__"<<std::endl;
    std::cout<<" --    ' .  . '    |.'-._| '  . .  '   ___"<<std::endl;
    std::cout<<" .  '-  '    .--'  | '-.'|    .  '  . '"<<std::endl;
    std::cout<<"          ' ..     |'-_.-|"<<std::endl;
    std::cout<<"  .  '  .       _.-|-._ -|-._  .  '  ."<<std::endl;
    std::cout<<"              .'   |'- .-|   '."<<std::endl;
    std::cout<<"  ..-'   ' .  '.   `-._.-`   .'  '  - ."<<std::endl;
    std::cout<<"   .-' '        '-._______.-'     '  ."<<std::endl;
    std::cout<<"        .      ~,"<<std::endl;
    std::cout<<"    .       .   |\\   .    ' '-."<<std::endl;
    std::cout<<"    ___________/  \\____________"<<std::endl;
    std::cout<<"   /  Why is it, when you want \\"<<std::endl;
    std::cout<<"  |  something, it is so damn   |"<<std::endl;
    std::cout<<"  |    much work to get it?     |"<<std::endl;
    std::cout<<"   \\___________________________/"<<std::endl;
    // std::cout<<""<<std::endl;
    file.close();
}


