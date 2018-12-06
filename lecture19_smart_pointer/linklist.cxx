#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <cmath>

#include <memory>
using std::shared_ptr;
using std::make_shared;

class Node {
private:
  int value{0};
  shared_ptr<Node> tail_ptr{nullptr};
public:
  Node(int v) : value(v) {};
  void set_tail( shared_ptr<Node> other ) {
    tail_ptr = other; };
  int length() {
    if (tail_ptr==nullptr) return 1;
    else return 1+tail_ptr->length();
  };
  void append( shared_ptr<Node> tail ) {
    if(has_next()){
      tail_ptr->append(tail);
    }
    else{
      tail_ptr = tail;
    };
  };
  void print() {
    cout << value;
    if (has_next()) {
      cout << ", "; tail_ptr->print();
    };
  };
  bool has_next(){
    if(tail_ptr != nullptr){
      return true;
    }
    else{
      return false;
    };
  };
};

int main() {
  auto 
    first = make_shared<Node>(25),
    second = make_shared<Node>(42),
    third = make_shared<Node>(36);
  first->set_tail(second);
  cout << "length: " << first->length() << endl;
  first->append(third);
  cout << "length: " << first->length() << endl;
  first->print();
  return 0;
}
