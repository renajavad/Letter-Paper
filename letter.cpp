#include <unordered_map>
#include <iostream>
#include <string>
#include <utility>
	
int Blackmail( std::string lettersOfLetter, std::string lettersOfpaper )
{	std::unordered_map < char, int > freqsOfLetter, freqsOfpaper;
	for( char Lletter: lettersOfLetter )
	{
		++freqsOfLetter[Lletter];
	}
	
	for( char pletter: lettersOfpaper )
	{
		++freqsOfpaper[pletter];
	}
	for(const std::pair<char, int>&p : freqsOfLetter) 
	{
		char letters = p.first;
		int quantity = p.second;
		if( freqsOfpaper[letters] < quantity )   return 0; 
		//else return 1;
	}
	return 1;
}

int main()
{
	std::string lettersOfLetter ;
	std::string lettersOfpaper ;
	std::cin >> lettersOfLetter;  
	std::cin >> lettersOfpaper;
	int res = Blackmail( lettersOfLetter, lettersOfpaper );
	if( res ) std::cout << "True" << "\n";
	else std::cout << "False" << "\n";
	
return 0;
}
