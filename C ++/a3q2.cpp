#include<iostream>  //header file
#include<fstream>   //header file for file handling

using namespace std;    //using namespace

int main()  //main function
{
    int i , nol = 0;    //declaring variables
    char ch[300];   //character for reading from file
    fstream f1; //object of file stream for opening the file
    f1.open("STORY.txt");
    while(!f1.eof())    //loop for reading the characters from the file until the end of the file
    {
        f1.getline(ch,100); //reading the characters of the file
        if(ch[0] != 'A')    //checking if the value of the character is a space value1
        {
            ++nol;//increasing the value of the spaces integer
        }
    }
    f1.close();
    cout << "The number of lines not starting from A is " << nol;
    return 0;
}
