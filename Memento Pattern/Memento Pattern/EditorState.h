#pragma once
#include <string>
using namespace std;
class EditorState
{
public:
	explicit EditorState(const string& content);

	string getContent() const;
private:
	string content;
};

