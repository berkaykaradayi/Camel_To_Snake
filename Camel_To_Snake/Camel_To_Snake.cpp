#include <iostream>
#include <string>
#include <cstring>

#define bosluk endl

using namespace std;

void camel_to_snake(char char_array[]);

int main()
{
	string str;

	cout << "Please enter a string" << bosluk;
	//cin >> str; it only takes 1 word at a time, but we need to take whole sentence. 
	   //To get get:

	getline(cin, str);

	const int length = str.length();

	// declaring character array (+1 for null terminator) 

	char* char_array = new char[length + 1];
	//char *temp= new char[length + 1];		

	char_array = &str[0]; // converting string to char array for operation

	cout << bosluk << "Entered string: " << char_array << bosluk;

	cout << "Here is your output: ";
	camel_to_snake(char_array);
	return 0;
}

void camel_to_snake(char char_array[])
{	
	int i = 0;
	while (char_array[i]!='\0')
	{
		if (char_array[i] != ' ')
		{
			if (islower(char_array[i]))
			{
				cout << char_array[i];
				i++;
			}
			else
			{
				cout << "_" << (char)tolower(char_array[i]);
				i++;
			}

		}

		else
			i++; // incrementing of i, if there is a blank char in sentence.
		
	}


}