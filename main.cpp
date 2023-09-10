#include <iostream>

using namespace std;

// Maybe use the swap function next time, but this is just as simple.
void reverseString(string stringToReverse) {
    for(int i = stringToReverse.length() - 1; i >= 0; --i) {
        cout << stringToReverse[i];
    }
    cout << endl;
}

int largestNumber(int userInputOne, int userInputTwo, int userInputThree) {
    int firstNum = userInputOne;
    int secondNum = userInputTwo;
    int thirdNum = userInputThree;

    if(firstNum > secondNum && firstNum > thirdNum) {
        return firstNum;
    }
    else if(secondNum > firstNum && secondNum > thirdNum) {
        return secondNum;
    }
    else {
        return thirdNum;
    }
}

int factorial(int userInput) {
    int factorialResult;

    if(userInput == 1) {
        return 1;
    }
    else {
        /* storeNumber = userInput * (userInput - 1);  First Attempt, I forgot the RECURSION */
        factorialResult = userInput * factorial(userInput - 1);
    }
    return factorialResult; // I could just have done return userInput * factorial(userInput - 1)
}

int fib(int userInput) {

    int fibResult;

    if(userInput == 1 || userInput == 2) { //In the first one I forgot to include userInput == 2
        return 1;
    }
    else {
        fibResult = fib(userInput - 1) + fib(userInput - 2);
    }
    return fibResult;
}

int main() {

    cout << "This is Part One" << endl;

    string reverseThis = "BYU";
    string biggerWord = "Challanges";
    string hugeWord = "Hippopotomonstrosesquippedaliophobia";

    reverseString(reverseThis);
    reverseString(biggerWord);
    reverseString(hugeWord);

    cout << endl <<  "This is Part Two" << endl;

    cout << largestNumber(3,2,1) << endl; //Basic
    cout << largestNumber(98, 104, 51) << endl; //Bigger Numbers
    cout << largestNumber(49282, 42048, 35827) << endl; //Even Bigger Numbers

    cout << endl << "This is Part Third" << endl;

    cout << factorial(3) << endl; // 6
    cout << factorial(10) << endl; // 3,628,800

    cout<< endl << "This is Part Four" << endl;

    cout << fib(1) << endl;
    cout << fib(2) << endl;
    cout << fib(3) << endl;
    cout << fib(4) << endl;
    cout << fib(5) << endl;

    return 0;
}
