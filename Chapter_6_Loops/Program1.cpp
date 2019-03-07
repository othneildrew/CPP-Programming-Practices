// Chapter 6: Program 1

/***
Write a C++ program to read ten students' names and display them.
**/ 

# include <iostream>
# include <string>
using namespace std;

int main(void)
{   
    string Name;
    int LCV, Size = 10;
    
    for(LCV = 0; LCV < Size; LCV++)
    {
        if(LCV == 0)
            cout <<"\n\t Please enter student's name:\n";
        else
            cout <<"\n\t Please enter another student's name: \n";
        
        cin >> Name;
        cout <<"Student #" << LCV + 1 << " is " << Name << endl;
    }

    system("pause");
    return 0;
}

// Code written by: Othneil Drew
