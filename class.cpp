#include <iostream>

// class Test {

// private:
// 	int     *data;
// 	size_t  size;

// public:

// 	Test() : size(0), data(nullptr){ 
// 		std::cout << "Default constructor called" << std::endl;
// 	}
// 	Test(size_t sz) : size(sz) {
// 		std::cout << "constructor called" << std::endl;

// 		data = new int[sz];
// 		for (int i = 0; i < size; ++i) {
// 			data[i] = i * i;
// 		}
// 	}
// 	~Test() {
// 		std::cout << "Destructor called" << std::endl;
// 		delete[] data;
// 	}
	

// 	Test(const Test& rhs) : size(rhs.size) {
// 		std::cout << "copy constructor called" << std::endl;
// 		data = new int[size];
// 		for (int i = 0; i < size; ++i) {
// 			data[i] = rhs.data[i];
// 		}
// 	}

// 	// void print_Array() {
// 	//     for (int i = 0; i < size; ++i) {
// 	//         std::cout << data[i] << std::endl;
// 	//     }
// 	// }
// 	size_t getData() const {
// 	    return size;
// 	}
 
// 	// int setData(int value) {
// 	//     return size;
// 	// }

// 	Test&  operator=(const Test& rhs) {
// 	    std::cout << "copy assignment called" << std::endl;
// 	    if (this != &rhs) {
// 	    delete[] data;
// 		data = new int[size];
// 		this->size = rhs.size;
// 	    }
// 	    return *this;
// 	}

// 	Test& operator-(Test& obj) {
// 		this->size -= obj.size;
// 		std::cout << "operator - called" << std::endl;
//         return *this;
//     }

// 	bool operator<(const Test& rhs) const {
//     	return (this->size < rhs.size);
// 	}

// 	bool operator>(const Test& rhs) const {
// 		return (this->size > rhs.size);
// 	}

// 	bool operator>=(const Test& rhs) const {
// 		return (this->size >= rhs.size);
// 	}

// 	bool operator<=(const Test& rhs) const {
// 		return (this->size <= rhs.size);
// 	}	

// };

#include <iostream>
#include <string>

int main() {
    std::string str = "Hello, worldbnbb bhvghfguvg";
    std::string substr = "world";

    size_t found = str.find(substr);

    if (found != std::string::npos) {
        std::cout << "Substring '" << substr << "' found at position " << found << std::endl;
        // Here, found != std::string::npos evaluates to true
    } else {
        std::cout << "Substring '" << substr << "' not found in the string." << std::endl;
        // Here, found != std::string::npos evaluates to false
    }

    return 0;
}



