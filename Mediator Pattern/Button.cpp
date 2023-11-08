#include "Button.h"

Button::Button(DialogBox* owner) : UIControl(owner) {}

bool Button::isEnabled()
{
    return enabled;
}

void Button::setEnabled(bool enabled)
{
    this->enabled = enabled;
    this->owner->changed(this);
}
