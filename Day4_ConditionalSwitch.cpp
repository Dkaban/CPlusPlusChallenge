// THE PROBLEM
// ***************************
//  If (1<= n <= 9), then print the lowercase English word 
//  corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.
// Solution Created By: Dustin Kaban
// Date: May 30th, 2020
// ***************************

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Write Your Code Here
    if(n <= 9)
    {
        switch(n)
        {
            case 1: printf("one");
            break;
            case 2: printf("two");
            break;
            case 3: printf("three");
            break;
            case 4: printf("four");
            break;
            case 5: printf("five");
            break;
            case 6: printf("six");
            break;
            case 7: printf("seven");
            break;
            case 8: printf("eight");
            break;
            case 9: printf("nine");
            break;
            default: printf("Something went wrong here!");
            break;
        }
    }
    else
    {
        printf("Greater than 9");
    }

    return 0;
}
