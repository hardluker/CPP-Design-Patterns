#pragma once
#include <stack>
#include "EditorState.h"
class History
{
public:
	void push(const EditorState& state);
	EditorState pop();
private:
	stack<EditorState> states;
};

