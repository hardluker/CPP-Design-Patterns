#include "ListBox.h"

ListBox::ListBox(DialogBox* owner) : UIControl(owner) {}

string ListBox::getSelection() const
{
    return selection;
}


void ListBox::setSelection(const string& selection)
{
    this->selection = selection;
    this->owner->changed(this);
}
