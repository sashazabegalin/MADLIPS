#include <iostream>
#include <string>
using namespace std;

int main() {
    // Note that `#include <string>` is required for using the string type.
    
    // TODO (1): declare string variables here
    string ADVERB;
    string RELATIVE;
    string VERB;
    string VERBSECOND;
    string ADJECTIVE;
    string NOUN;
    string LOCATION;
    
    
    
    
    
    // TODO (2): print game title here
    cout << "** MADLIBS **" << endl;
    // Ask user for input -- but not in the order of the story...
    // TODO (3): capture user input into the string variables here
    cout << "Enter a location (e.g. \"the living room\"): ";
    getline(cin, LOCATION);
    
    cout << "Enter a verb (e.g. \"sing\"): ";
    getline(cin, VERB);
    
    cout << "Enter another verb: ";
    getline(cin, VERBSECOND);
    
    cout << "Enter an adjective (e.g. \"greedy\"): ";
    getline(cin, ADJECTIVE);
    
    cout << "Enter an adverb (e.g. \"noisily\"): ";
    getline(cin, ADVERB);
    
    cout << "Enter a noun (e.g. \"peanut\"): ";
    getline(cin, NOUN);
    
    cout << "Enter a relative (e.g. \"aunt\"): ";
    getline(cin, RELATIVE);
    // Output a blank line
    // TODO (4): output a blank line here
    cout << '\n';
    // Output the story
    //   My ADJECTIVE RELATIVE is convinced that if I VERB ADVERB,
    //   I will be able to VERB the NOUN in LOCATION.
    // TODO (5): output the story (as indicated above) here
    cout << "My "<< ADJECTIVE << " " << RELATIVE << " is convinced that if I " << VERB << " "<< ADVERB << "," << endl << " I will be able to " << VERBSECOND << " the " << NOUN << " in " << LOCATION << "." << endl;
    return 0;
}


