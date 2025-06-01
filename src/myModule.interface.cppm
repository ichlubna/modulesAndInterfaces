export module myModule:interface;

export class MyClass
{
	public:
	MyClass() = default;
	virtual void run() = 0;
	virtual ~MyClass() = default;
};
