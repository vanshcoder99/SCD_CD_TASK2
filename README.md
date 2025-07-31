# SCD_CD_TASK2

🎯 Random Number Guessing Game in C++
This is a fun and interactive command-line game written in C++ that challenges the user to guess a randomly generated number between 1 and 100. The program provides real-time feedback for each guess — whether it's too high or too low — and tracks the number of attempts until the correct number is guessed.

📋 Features
🔹 Game Mechanics:

Generates a random number between 1 and 100

Takes user input to guess the number

Provides helpful hints:

“Guess Lower” if guess is too high

“Guess Higher” if guess is too low

Tracks and displays number of attempts

🔹 User Experience:

Simple and engaging console-based interaction

Encourages logical thinking and decision-making

Ends with a congratulatory message on guessing correctly

⚙️ How It Works
The program initializes a random number using rand() and srand(time(0)).

It enters a loop where:

The user is prompted to guess the number.

Feedback is given based on the comparison.

The number of attempts is incremented with each guess.

The loop continues until the user guesses the correct number.

The program ends by displaying the total number of attempts.

🛠 Technologies Used
C++

Standard input/output (cin, cout)

Control structures (do-while, if-else)

Random number generation (rand(), srand() from <cstdlib> and time(0))