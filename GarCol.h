#pragma once
template <typename Type>
class DynamicMemory {
	Type* ptr;

	void operator=(DynamicMemory right) {  //�������� �������� ��� ��� �� � private
		return;
	}
public:
	Type& operator[](int i) {
		return ptr[i];
	}
	DynamicMemory(int i) {
		ptr = new Type[i];
	}
	~DynamicMemory() {
		delete[] ptr;
	}
	Type* GetPtr() {
		return ptr;
	}
};