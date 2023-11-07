#include "Editor.h"
using namespace std;
EditorState Editor::createState()
{
    EditorState state{ content };
    return state;
    
}

void Editor::restore(const EditorState& state)
{
    this->content = state.getContent();
}

string Editor::getContent() const
{
    return content;
}

void Editor::setContent(const string& content)
{
    this->content = content;
}

