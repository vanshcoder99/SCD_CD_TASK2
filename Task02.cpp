#include<iostream>
#include<math.h>

using namespace std;

int main(){

    //Initializing a random number generator
    srand(time(0));

    //generating the random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do{
        cout<<"Guess the number : ";
        cin>>guessed_number;

        if(guessed_number > randomNumber){
            cout<<"Guess Lower number please!"<<endl;
        }

        else if(guessed_number<randomNumber){
            cout<<"Guess Higher number please!"<<endl;
        }

        else{
            cout<<"Congrats you guessed the correct number!"<<endl;
        }

        no_of_guesses++;

    }while(guessed_number != randomNumber);


    cout<<"You guessed the number in "<<no_of_guesses<<" attempts\n";

    return 0;

}