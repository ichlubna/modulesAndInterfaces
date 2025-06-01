import myModule;

// Can be replaced with import std; which is experimental currently in CMake
#include <memory>

int main(int argc, char **argv)
{
	std::unique_ptr<MyClass> ptr = std::make_unique<MyInheritedClass1>();
	ptr->run();
}
