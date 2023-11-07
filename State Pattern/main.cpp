#include "Canvas.h"
#include "Brush.h"
#include "Selection.h"
#include "Bucket.h"
using namespace std;

int main() {
	Canvas canvas{};

	Brush brush;
	canvas.setCurrentTool(brush);

	canvas.mousePress();
	canvas.mouseRelease();

	Bucket bucket;
	canvas.setCurrentTool(bucket);

	canvas.mousePress();
	canvas.mouseRelease();

	Selection selection;
	canvas.setCurrentTool(selection);

	canvas.mousePress();
	canvas.mouseRelease();


	return 0;
}