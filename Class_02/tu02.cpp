#include<iostream>
// Mistake 1: Using std::cout every time is correct but verbose
// Solution: Can use 'using namespace std;' to avoid typing std:: every time
using namespace std;

int main(){

     // Mistake 2: Forgetting quotes for string literals
    // string name = agrojit;  <-- WRONG

    string name = "agrojit"; // Correct: use double quotes for text
 // Mistake 3: No space between texts in cout
    // cout << "Hello World"<< name; <-- WRONG

    cout<< "Hello World " << name;  // Correct: add space inside quotes
 // Mistake 4: Optional: using std::cout with 'using namespace std;' is redundant
    // std::cout << "Hi";  <-- still works, but you can just write cout << "Hi";

    return 0;
}