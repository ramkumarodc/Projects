#include <iostream>
#include <utility>  // For std::move

template <typename T>
class my_unique_ptr {
private:
    T* ptr;  // Raw pointer to the dynamically allocated object

public:
    // Constructor: takes ownership of the resource
    explicit my_unique_ptr(T* p = nullptr) : ptr(p) {}

    // Destructor: deallocates the resource
    ~my_unique_ptr() {
        delete ptr;  // Free the resource when the unique_ptr is destroyed
    }

    // Move Constructor: transfers ownership
    my_unique_ptr(my_unique_ptr&& other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr;  // Nullify the other pointer
    }

    // Move Assignment Operator: transfers ownership
    my_unique_ptr& operator=(my_unique_ptr&& other) noexcept {
        if (this != &other) {
            delete ptr;           // Release any resource we're holding
            ptr = other.ptr;      // Transfer ownership
            other.ptr = nullptr;  // Nullify the other pointer
        }
        return *this;
    }

    // Deleted Copy Constructor: prevents copying
    my_unique_ptr(const my_unique_ptr& other) = delete;

    // Deleted Copy Assignment Operator: prevents copying
    my_unique_ptr& operator=(const my_unique_ptr& other) = delete;

    // Access the raw pointer (dereference operator)
    T& operator*() {
        return *ptr;
    }

    // Access the raw pointer (pointer operator)
    T* operator->() {
        return ptr;
    }

    // Get the raw pointer (if needed)
    T* get() const {
        return ptr;
    }

    // Release ownership and return the raw pointer
    T* release() {
        T* temp = ptr;
        ptr = nullptr;
        return temp;
    }

    // Reset the unique_ptr to manage a new resource
    void reset(T* p = nullptr) {
        delete ptr;  // Delete the current resource
        ptr = p;     // Take ownership of the new resource
    }

    // Check if the unique_ptr is managing any resource
    bool is_null() const {
        return ptr == nullptr;
    }
};

int main() {
    // Create a custom unique_ptr
    my_unique_ptr<int> p1(new int(10));

    // Dereferencing to access the value
    std::cout << "Value: " << *p1 << std::endl;

    // Move p1 to p2
    my_unique_ptr<int> p2 = std::move(p1);
    std::cout << "Value after move: " << *p2 << std::endl;

    // p1 is now null
    if (p1.is_null()) {
        std::cout << "p1 is null after move." << std::endl;
    }

    // Reset p2 to a new value
    p2.reset(new int(20));
    std::cout << "Value after reset: " << *p2 << std::endl;

    return 0;
}
