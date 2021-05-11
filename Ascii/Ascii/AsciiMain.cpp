#include <iostream>
#include <string>
#include <conio.h>

using namespace std;


void ascii_art()
{

    //Text that is typed will be converted to ascii art
    string input;
    cout << "   Enter text: "; getline(cin, input);

    //Pronts first layer letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"( ________     )";    
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"( ________     )";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"( ________     )";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"(        )";
    }

    cout << endl;

    //Prints second layer of letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"(|\   __  \    )";
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"(|\   __  \    )";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"(|\   ____\    )";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"(   _    )";
    }

    cout << endl;

    //Prints Third layer of letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"(\ \  \|\  \   )";
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"(\ \  \|\ /_   )";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"(\ \  \___|    )";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"( _| |_  )";
    }

    cout << endl;

    //Prints Fourth layer of letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"( \ \   __  \  )";
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"( \ \   __  \  )";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"( \ \  \       )";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"(|_   _| )";
    }

    cout << endl;

    //Prints Fifth layer of letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"(  \ \  \ \  \ )";
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"(  \ \  \|\  \ )";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"(  \ \  \____  )";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"(  |_|   )";
    }

    cout << endl;

    //Prints Sixth layer of letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"(   \ \__\ \__\)";
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"(   \ \_______\)";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"(   \ \_______\)";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"(        )";
    }

    cout << endl;

    //Prints Seventh layer of letter
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == 'A' || input[i] == 'a')
            cout << R"(    \|__|\|__|)";
        if (input[i] == 'B' || input[i] == 'b')
            cout << R"(    \|_______|)";
        if (input[i] == 'C' || input[i] == 'c')
            cout << R"(    \|_______|)";
        if (input[i] == ' ')
            cout << R"(  )";
        if (input[i] == '+')
            cout << R"(        )";
    }

    cout << endl;

}


int main()
{

    //Some nice art as a title
        cout << R"(
    _____/\\\\\\\\\________/\\\\\\\\\\\__________/\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_        
     ___/\\\\\\\\\\\\\____/\\\/////////\\\_____/\\\////////__\/////\\\///__\/////\\\///__       
      __/\\\/////////\\\__\//\\\______\///____/\\\/_______________\/\\\_________\/\\\_____      
       _\/\\\_______\/\\\___\////\\\__________/\\\_________________\/\\\_________\/\\\_____     
        _\/\\\\\\\\\\\\\\\______\////\\\______\/\\\_________________\/\\\_________\/\\\_____    
         _\/\\\/////////\\\_________\////\\\___\//\\\________________\/\\\_________\/\\\_____   
          _\/\\\_______\/\\\__/\\\______\//\\\___\///\\\______________\/\\\_________\/\\\_____  
           _\/\\\_______\/\\\_\///\\\\\\\\\\\/______\////\\\\\\\\\__/\\\\\\\\\\\__/\\\\\\\\\\\_ 
            _\///________\///____\///////////___________\/////////__\///////////__\///////////__
        )" << endl;

        cout << "" << endl;


    while (1)
    {
        ascii_art();
        cout << endl;
    }
    return 0;
}