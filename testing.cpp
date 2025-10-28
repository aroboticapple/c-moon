#include <iostream>      // For input/output operations
#include <cstring>       // For string manipulation (e.g., memset)
#include <sys/socket.h>  // For socket functions
#include <netinet/in.h>  // For internet address structures
#include <unistd.h>      // For close() function
using namespace std;

void print(string mes){
    cout << mes << endl;
}
string input(string mes){
    cin >> mes;
    return mes;
}

int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
if (serverSocket == -1) {
    perror("Error creating socket");
    // Handle error
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
sockaddr_in serverAddress;
serverAddress.sin_family = AF_INET;
serverAddress.sin_port = htons(8080); // Port number, converted to network byte order
serverAddress.sin_addr.s_addr = INADDR_ANY; // Listen on all available interfaces
// Or specify a specific IP address: inet_addr("127.0.0.1")
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
