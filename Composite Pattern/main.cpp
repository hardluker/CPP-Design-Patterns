#include <iostream>
#include <memory>
#include "Group.h"
using namespace std;

int main() {

	auto group1 = make_unique<Group>();

	auto shape1 = make_unique<Shape>();
	group1->add(shape1.get());
	auto shape2 = make_unique<Shape>();
	group1->add(shape2.get());

	auto group2 = make_unique<Group>();

	auto shape3 = make_unique<Shape>();
	group2->add(shape3.get());
	auto shape4 = make_unique<Shape>();
	group2->add(shape4.get());

	Group group;
	group.add(group1.get());
	group.add(group2.get());

	group.render();
	

}