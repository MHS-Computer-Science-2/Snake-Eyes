#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(unsigned(time(0))); //Randomize the random #s
    
    //Start your loop here
    
    //Roll 2 dice
    int d1 = rand() % 6 + 1;
    int d2 = rand() % 6 + 1;
    //Display roll
    cout << "You rolled: " << d1 << " " << d2 << endl;
    
    
    system("pause");
}
