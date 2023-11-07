#include "History.h"

void History::push(const EditorState& state)
{
	states.push(state);
}

EditorState History::pop()
{
	EditorState prevState = states.top();
	states.pop();
	return prevState;
}
