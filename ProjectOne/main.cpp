#include "Pid.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <iostream>
using namespace std;

void main() {

   Pid<int> obj;
   int selection = 0;
	
	//Menu for user selection:
   cout << "Hello user, this is a demonstration of processes and IDs" << endl;
   cout << "Please follow the menu:" << endl;
   cout << "To create a new process enter 1" << endl;
   cout << "To delete a process enter 2" << endl;
   cout << "To display the IDs that currently are occupied enter 3" << endl;

   cout << "\nEnter your selection: ";
   cin >> selection;

   do {
      if (selection == 1)
      {
         obj.allocate_map();
      }
      else if (selection == 2)
      {
         int ans = 0;
         cout << "What process ID would you like to release? ";
         cin >> ans;
         obj.release_pid(ans);
      }
      else if (selection == 3)
      {
         obj.display();
      }
   
      cout << "\nEnter another option from the menu or 0 to exit" << endl;
      cout << "To create a new process enter 1" << endl;
      cout << "To delete a process enter 2" << endl;
      cout << "To display results enter 3" << endl;
   
      cout << "\nEnter your selection: ";
      cin >> selection;
   
   } while (selection == 1 || selection == 2 || selection == 3);

   cout << "\nThank you for your cooperation.\n" << endl;
}