#include "EditorState.h"
EditorState::EditorState(const string& content) : content(content){}

string EditorState::getContent() const
{
	return content;
}
