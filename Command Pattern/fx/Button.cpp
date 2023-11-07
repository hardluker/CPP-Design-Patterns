#include "Button.h"

Button::Button(Command& command) : command(command)
{
}

//We are delegating or forwarding the work to the command object.
void Button::click()
{
    command.execute();
}

