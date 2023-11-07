#pragma once
#include <string>
#include "EditorState.h"
using namespace std;
class Editor
{
public:
	string getContent() const;
	void setContent(const string& content);

	EditorState createState();
	void restore(const EditorState& state);

private:
	string content;
};

