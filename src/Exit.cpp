#ifndef __EXIT_CPP__
#define __EXIT_CPP__

#include "Cmd.cpp"


//Constructors
Exit::Exit()
{}

bool Exit::execute(int in, int out) {
    exit(0);
}

string Exit::get_data() {
    return "Exit";
}

#endif
