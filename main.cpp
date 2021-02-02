#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::string;
using std::istringstream;

int main() {
	int n = 0;
	string text;
	string input;

	while(n <= 0){
		cout << "Please enter an int greater than 0 and some text: ";
		getline(cin, input);
		istringstream strIn(input);
		strIn >> n >> text;
	}

	for(;0 < n; n--)
	{
		ofstream out("example.txt",std::ios::app);
		out << text << endl;
	}

}
