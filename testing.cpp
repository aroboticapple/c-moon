#include <iostream>
#include <vector>
using namespace std;

void print(string mes){
    cout << mes << endl;
}
string input(string mes){
    cin >> mes;
    return mes;
}

void printMessage() {
    std::cout << "===================" << std::endl;
    std::cout << "SIMPLE TASK MANAGER" << std::endl;
    std::cout << "===================" << std::endl;
    std::cout<< "1 view tasks" << std::endl;   
    std::cout << "2 add task" << std::endl;
    std::cout << "3 delete task" << std::endl;
    std::cout << "4 mark task as complete" << std::endl;
}
int a;
int main() {
    printMessage();
    // Create a vector to store tasks
    vector<string> tasks;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number==1){
        for(a=0;a<tasks.size();a++){
            cout << to_string(a+1) + ". ["+"]"+tasks[a]  << endl;
        }
    }else if(number==2){
        tasks.push_back(input("Enter task description: "));
    }else if ( number==3){
        int message = std::stoi(input("Enter task number to delete: "));
     
        tasks.erase(message+1);
 
    }else if (number==4){
        task[input("which task to mark as complete: ")][1]="complete";
    }
    {
        /* code */
    }
    
    return 0;
}