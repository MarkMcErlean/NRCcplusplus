// AlgorithmChoiceApp.cpp
// Program will allow you to select two different algorithms and sort 6 numbers into order

#include <iostream> 
#include <string>
#include <algorithm>
#include <cctype>


using namespace std;

// Calling the functions early so that the program recognises them

void bubbleSort();
void selectionSort();
void oiFunction();
bool continueInput();
void algorithmChoice();
void toUpperCase(string& str);


int main()
{
         // Start a do while loop 
        do
        {
         // runs algorithm choice function to let user choose the algorithm
         algorithmChoice();
        } 

        // while continueInput remains true, program will loop
        while (continueInput());
        return 0;
}



// Creating the function for bubblesort
void bubbleSort()
{
    // accept user input
    cout << endl << "Please input numbers to be sorted:\n";			

    // Array to store the numbers to be sorted; Taking inputs for numbers
    int numbers[6] = { 0,0,0,0,0,0 };  
    for (int i = 0; i < 6; i++)
    {
        cin >> numbers[i]; // User inputs numbers to the array 
        while (cin.fail())  //while the data type declared doesn't match data type entered
        {
            cout << "Invalid Input.  Please try again: ";  //error msg
            cin.clear();   //clear previous input
            cin.ignore(std::numeric_limits<int>::max(), '\n');  //ignores everything on problem line
            cin >> numbers[i]; //get user input again
        }
      
    }

    //looping through the numbers
    for (int a = 0; a < 6 - 1; a++)	  
    {								  
        for (int b = 0; b < 6 - a - 1; b++)  
        {
            // sorting to put the larger adjacent number to the right
            if (numbers[b] > numbers[b + 1]) 
            {
                int temp = numbers[b]; 
                numbers[b] = numbers[b + 1]; 
                numbers[b + 1] = temp;		
            }							  
        }
    }
    
    // output of the sorted numbers
    cout << "\nOutput numbers in order of smallest to largest:\n";	
    for (int o = 0; o < 6; o++)
    {
        cout << numbers[o] << endl;
    }
    
}
    void selectionSort() // Defining the function for selectionSort
    {   
    int numbers[6] = { 0, 0, 0, 0, 0, 0 }; // This creates the array with 0 as the defaulted inputs

    cout <<endl << "Please input numbers to be sorted:\n";

    cin >> numbers[0];  // Accepting Inputs and placing input into the previous array
        for (int i = 0; i < 6; i++)  // Looping through each integer of the array 
        {                            // used i to show this is input loop
        cin >> numbers[i];           // to input a number
        while (cin.fail())  //while the data type declared doesn't match data type entered
        {
            cout << "Invalid Input.  Please try again: ";  //error msg
            cin.clear();   //clear previous input
            cin.ignore(std::numeric_limits<int>::max(), '\n');  //ignores everything on problem line
            cin >> numbers[i]; //get user input again
        }
        }

    for (int x = 0; x < 6; x++)             // Beginning the selection sort loop
    {
        int smallest = numbers[x];          // smallest number is defaulted to x
        int smallestId = x;                 // it will be replaced with any subsequent smaller numbers
            for (int y = x+1; y < 6; y++)
            {            
             if (numbers[y] < smallest)    // when the number stored as Y is smaller than stored in
             {                             // value "smallest", 
                smallest = numbers[y];     // the value "smallest" will be replaced with Y
                smallestId = y;            
             }
            }
            int temp = numbers[x];          // swapping numbers around using a temporary value
            numbers[x] = smallest;          // this means we can always store the smallest value
            numbers[smallestId] = temp;     // as x
    }
    cout << "\nOutput numbers in order of smallest to largest:\n";
    for (int o = 0; o < 6; o++)             // Looping through the array - used to to show this is the output loop
    {
        cout << numbers[o] << endl;
    }
}

void oiFunction()   // function to use as an error message
{
    cout << endl << "Oi! that wasn't an option, sort yourself out!" << endl;
}

bool continueInput()
{
    // Ask for input
    cout << "Would you like to sort some more? (Y/N) ";
    string str = "Y";
    // Get string
    cin >> str;
       
    // Data validate string
    toUpperCase(str);
    // Check for yes or no
       if (str[0] == 'Y')
        {
            return true;
        }
        else
        {
            return false;  
        }
}

void  toUpperCase(string& str)
{
    transform(str.begin(), str.end(), str.begin(), ::toupper);
}


void algorithmChoice() {
    // ask for input

    cout << "How would you like to sort your numbers, Bubblesort or Selectionsort?" << endl;

    // get string

    string inputStr = "";
    cin >> inputStr; 
    
    
    // data validate string

        toUpperCase(inputStr);

     // run the bubblesort function  

        if (inputStr == "BUBBLESORT") 
    {
        bubbleSort();
    }
    // run the selectionsort code

    else if (inputStr == "SELECTIONSORT")
    {
        selectionSort();
    }

    // run the error code - in this case the Oi function

    else
    {
        oiFunction();
    }
   
}


// in the future - separate into objects so that easier to upgrade and maintain
