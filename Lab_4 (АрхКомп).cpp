
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
    //Example:
    //Source : C:\Users\Костя\Sou\
    //Destination: C:\Users\Костя\Dest\
    //File name: File.txt

    string sourceDirectory, destinationDirectory, fileName;
    cout << "Source:";
    cin >> sourceDirectory;
    cout << "Destination:";
    cin >> destinationDirectory;
    cout << "File name:";
    cin >> fileName;

    string moveCommand = "move " + sourceDirectory + fileName + " " + destinationDirectory;
    cout << moveCommand;

    int result = system(moveCommand.c_str());
    if (result == 0) {
        cout << "File moved successfully!" << std::endl;
    }
    else {
        cout << "Error moving file." << std::endl;
    }

    return 0;
}
