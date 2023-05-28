#include <iostream>
class MyClass {
private:
    int value;

public:
	//overloading the ++(prefix)operator
    MyClass(int v) : value(v) {}
     MyClass & operator++() {
        ++value;
		return*this;
		
    }
     MyClass operator++(int) 
	 {
	 	MyClass temp(value);
        ++value;
		return temp;
	}
     MyClass & operator--() {
        --value;
		return*this;
		
    }
      MyClass operator--(int) 
	 {
	 	MyClass temp(value);
        --value;
		return temp;
	}
	void print() 
	{
	std::cout<<"Value :"<<value<<std::endl;
	}
	
};

int main() {
    MyClass n(5);
        std::cout << "n :";
        n.print();
        ++n;
        std::cout<<"n after n++ :";
        n.print();
        --n;
          std::cout<<"n after --n :";
          n.print();
          n--;
            std::cout<<"n after n-- :";
            n.print();
      return 0;
}

