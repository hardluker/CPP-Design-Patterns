#include <iostream>
#include <memory>
#include "Group.h"
using namespace std;

int main() {

	//Creating group 1
	auto group1 = make_unique<Group>();
	//Adding 2 shapes to group 1
	auto shape1 = make_unique<Shape>();
	group1->add(shape1.get());
	auto shape2 = make_unique<Shape>();
	group1->add(shape2.get());

	//Creating group 2
	auto group2 = make_unique<Group>();
	//Adding 2 shapes to group 2
	auto shape3 = make_unique<Shape>();
	group2->add(shape3.get());
	auto shape4 = make_unique<Shape>();
	group2->add(shape4.get());

	//Creating a composite group
	Group group;
	//Adding the first two groups to the composite group
	group.add(group1.get());
	group.add(group2.get());

	//Recursively calling all the render() methods from each class.
	group.render();
}

/*
Console Output:
Render Shape
Render Shape
Render Shape
Render Shape
*/