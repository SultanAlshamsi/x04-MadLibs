//Authors: 
#include <iostream>
#include <string>

int main()
{

std::string name;

int model;

double Price;

int Horsepower; 
/////////////

std::cout<< "Enter a name" << std::endl; 

std::cin >> name;

std::cout << "Enter a Car model"<< std::endl;

std::cin >> model;

std::cout << "Enter a Car Price in dollars "<< std::endl;

std::cin >> Price;

std::cout << "Enter a Car Horsepower unit " << std::endl;

std::cin >> Horsepower;

///////////////


std::cout << " On 21st of January " << name << " bought a brand new car. " <<std::endl;  

std::cout << " it's a Nice looking car its model " << model <<std::endl;

std::cout << "He say that he bought it for " << Price << " $  ,i think it's cheap " << std::endl;

std::cout << " the car has " << Horsepower << " HP. This is an insane power !! " << std::endl;

  return 0;
}
