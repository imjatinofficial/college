#include<iostream>  //header files
#include<fstream>   //header file for file handling

using namespace std;    //using namespace

int main()  //main function
{
    int spaces = 0 , i; //declaring variables
    char ch[300];   //taking character to read from the file
    ifstream f1;    //creating the object of the file to open the text file we need
    f1.open("a3q1.txt");    //opening the file a3q1.txt
    while(!f1.eof())    //loop for reading the characters from the file until the end of the file
    {
        f1.getline(ch,100); //reading the characters of the file
        for(i = 0 ; ch[i] != '\0' ; ++i)    //for loop for checking the number of spaces in the file
        {
            if(ch[i] == ' ')    //checking if the value of the character is a space value
                ++spaces;   //increasing the value of the spaces integer
        }
    }
    cout << spaces << " spaces" ;   //printing the output
    return 0;
}
