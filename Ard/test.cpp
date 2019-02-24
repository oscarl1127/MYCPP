/***************
 * Created by: Oscar Lugo 
 * 
 * Purpose: Arduino Controlling Tower Light Handling
 * 
 * Requires Arduino Uno
 **********************/

#include <iostream>
#include <fstream>
#include <unistd.h>
#include <string.h>

using namespace std;

/* Named according to Arduino Programming */
const char RED_LED = 'A';
const char YELLOW_LED = 'B';
const char GREEN_LED = 'C';
const char RED_BLINK = 'D';


int main(int argc, char *argv[])
{

    ofstream Arduino;

    Arduino.open("/dev/ttyACM0"); //Open Arduino

    if (!Arduino.is_open() ) {
        /* code */
        perror("No Arduino Found");
        Arduino.close();
        return(1);
    }
    
    sleep(2); //Sleep to allow reset, must have

    if(argc < 2)
    {
        cout << "Must include Argument\n";
        cout << "Use: test [RED_BLINK| RED | YELLOW | GREEN] \n";
        Arduino.close();
        return(1);
    }

    if( strcmp(argv[1],"RED") == 0)
    {
        Arduino << RED_LED;
    }
    else if ( strcmp(argv[1], "YELLOW") == 0)
     {
        Arduino << YELLOW_LED;
        /* code */
    }
    else if ( strcmp(argv[1], "GREEN") == 0)
    {
        Arduino << GREEN_LED;
        /* code */
    }
    else if (strcmp(argv[1],"RED_BLINK") == 0)
    {
        Arduino << RED_BLINK;
        /* code */
    }
    
    else
    {
        cout << "Invalid command entered\n";
        cout << "Use: test [RED_BLINK| RED | YELLOW | GREEN] \n";
        Arduino.close();
        return(1);
    }
    
    cout << "Complete " << argv[1] << endl;

    Arduino.close();

    return (0);
}