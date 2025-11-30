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
class encdec {
    int key;

    // File name to be encrypt
    string file = "geeksforgeeks.txt";
    char c;

public:
    void encrypt();
    void decrypt();
};

// Definition of encryption function
void encdec::encrypt()
{
    // Key to be used for encryption
    cout << "key: ";
    cin >> key;

    // Input stream
    fstream fin, fout;

    // Open input file
    // ios::binary- reading file
    // character by character
    fin.open(file, fstream::in);
    fout.open("encrypt.txt", fstream::out);

    // Reading original file till
    // end of file
    while (fin >> noskipws >> c) {
        int temp = (c + key);

        // Write temp as char in
        // output file
        fout << (char)temp;
    }

    // Closing both files
    fin.close();
    fout.close();
}

// Definition of decryption function
void encdec::decrypt()
{
    cout << "key: ";
    cin >> key;
    fstream fin;
    fstream fout;
    fin.open("encrypt.txt", fstream::in);
    fout.open("decrypt.txt", fstream::out);

    while (fin >> noskipws >> c) {

        // Remove the key from the
        // character
        int temp = (c - key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
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
