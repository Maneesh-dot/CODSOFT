#include<bits/stdc++.h>
using namespace std;
int main(){
    int random;
    srand(time(0));
    random = rand() % 100 + 1;
    int guess = 0;

while(random != guess){
    cout <<"Guess the number between 1 to 100:";
    cin >> guess;
    if(guess>random) cout <<"Please guess lower Number" << endl;
    else if(guess < random) cout << "Please guess higher number" << endl;
    else cout <<"You guessed right!!! YOU WON" << endl;
}

    

    return 0;
}

