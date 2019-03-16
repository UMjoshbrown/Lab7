/**
 * test.cpp
 *
 * EECS 183, Fall 2018
 * Lab 7
 *
 * <#Name(s)#>
 * <#uniqname(s)#>
 *
 * <#A description of the lab here#>
 */

#include <iostream>
#include <fstream>
#include "Question.h"
#include "Answer.h"

void test_Question_constructor();

/**
 * Declare more test functions here
 * It is a good idea to test all getters and setters
 * It is a good idea to test constructors
 */

int main() {
    test_Question_constructor();

    // Add calls to test functions that you create here

    return 0;
}


void test_Question_constructor() {
    Question q1;

    // expected to return 0
    if (q1.getNumAnswers() != 0) {
        cout << "bug in Question default constructor: numAnswers" << endl;
    }

    // expected to return empty string
    if (q1.getQuestionPrompt() != "") {
        cout << "bug in Question default constructor: questionPrompt" << endl;
    }
}

// define more test functions here
