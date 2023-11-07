#include <iostream>
#include "Editor.h"
#include "EditorState.h"
#include "History.h"
using namespace std;

int main(){
	Editor editor;
	History history;

	editor.setContent("a");
	history.push(editor.createState());

	editor.setContent("b");
	history.push(editor.createState());

	editor.setContent("c");
	editor.restore(history.pop());

	cout << editor.getContent();



	return 0;
}