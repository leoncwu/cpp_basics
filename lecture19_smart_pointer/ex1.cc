#include <iostream>
#include <memory>

using std :: cout;
using std :: endl;
using std :: shared_ptr;
using std :: make_shared;

class Note{
private:
  int data_value{0};
  shared_ptr<Note> tail_ptr{nullptr};
public:
  Node() {}
  Node(int value) { datavalue = value; }; 
  void set_tail( shared_ptr<Node> tail ) {
    tail_ptr = tail;
  };
  list_length() {
    if (!has_next()) return 1;
    else return 1+tail_ptr->list_length();
  };
  void print() {
    cout << datavalue;
    if (has_next()) {
      cout << ", "; tail_ptr->print();
    }
  }
}

int mian(){

  auto
    first = make_shared<Node>(23),
    second = make_shared<Node>(45),
    third = make_shared<Node>(32);
  first->append(second);
  first->append(third);
  first->print();  

  return 0;
}
