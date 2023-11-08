#include "TextBox.h"

TextBox::TextBox(DialogBox* owner) : UIControl(owner) {}

string TextBox::getContent()
{
    return content;
}

void TextBox::setContent(const string& content)
{
    this->content = content;
    this->owner->changed(this);
}
