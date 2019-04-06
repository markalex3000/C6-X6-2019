// C6-X6-2019.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Exercise 6 Chapter 6 from
"Software - Principles and Practice using C++" by Bjarne Stroustrup
EXERCISE: Write a program that checks if a sentence is correct accoring to the 
English grammar in Section6.4.1 (plus the 'the' modification). Assume that every
sentence is terminated by a full stop (.) surrounded by whitespace. 

For each sentence entered, the program should simply repsond "OK" or "Not OK"

Hint - don't bother with tokens, just read into a string using >>.
*/

#include "pch.h"
#include "C:\Users\mark.alexieff\source\repos\std_lib_facilities.h"


//------------------------------------------------------------------------------

/*	This version of get_sentence takes a reference to a vector of strings and 
	gets input from cin.  Adds each string to the vector.  Stops when it gets to
	a newline character.
*/

bool get_sentence(vector<string>& s) {
	string temp{ "poop" };
	char ch{ NULL };
	bool more_to_read{ true };

	if (s.size() > 0) s.clear();				// This is intended to clear the 
												// vector from a previous run
												// not sure it is the right functio

	while (more_to_read) 	{					// Loop to read strings until newline
		cin.get(ch);
		if(ch != '\n')	{
			cin.putback(ch);
			cin >> temp;
			s.push_back(temp);
		}
		else more_to_read = false;
	}
	return true;								// no real meaning currently
}

/*	sentence as currently written just out put the sentence to cout
	Need to change this to be my out put fucntion	*/

bool sentence(vector<string>& s) {
	for (int i = 0; i < s.size(); i++) {
		cout << s[i];
		cout << ' ';
		}
	cout << '\n';
	return true;
	}

int main()

try
{
	// Variables// 
	vector<string> sentence_to_test;
	bool ret_value{ false };

	cout << "Welcome to the English Grammar Checker V1.0\n";
	cout << "Please enter a senteence to test - end sentence with newline.\n";
	cout << "Enter 'XXX' to terminate program.\n";

	// While Keep Going is True has not been entered //
	ret_value = get_sentence(sentence_to_test);
	ret_value = sentence(sentence_to_test);


	/* Check for exit condition (Vector length is 1 and string 1 == XXX)
		If Exit condition - Output goodbye msg and break out of While loop */
	
	// Intitiate the Vector of strings //

	// Call Sentence Checking Function - pass vector of strings //

	/* Check Return value - TRUE, output Sentence and Is OK  
		If FALSE, output sentence and Is Not Okay */
	
	
	/*
	while (keep_going) {
		cin >> temp_s;
		cin >> temp_i;


		// Check for duplicates //

		for (int i = 0; i < Names.size(); i++) {
			if (temp_s == Names[i].Name) {
				keep_going = false;
				error("Duplicate Names not allowed!\n");
			}
		}
		if (temp_s == "NoName" && temp_i == 0) {
			keep_going = false;
			break;
		}
		tempNameScore = NameScore(temp_s, temp_i);
		Names.push_back(tempNameScore);
	}
	for (int j = 0; j < Names.size(); j++) {
		Names[j].show();
	}								*/
	keep_window_open();
}
catch (exception& e) {
	cerr << "error: " << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	keep_window_open();
	return 2;
}

