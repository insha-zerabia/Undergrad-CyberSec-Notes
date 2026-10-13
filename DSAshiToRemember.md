# Iterator

class Iterator {
			Node* ptr;
			Iterator(Node* p): ptr(p) {}
public:
			Iterator& operator++() {
					ptr = ptr->next;
					return *this;
			}
			Iterator& operator++(int) {
					Iterator temp = *this;
					ptr = ptr->next;
					return temp;
			}

			bool operator==(const Iterator& other) {
					return this->ptr == other.ptr;
			}


			bool operator!=(const Iterator& other) {
					return this->ptr != other.ptr;
			}

			string& operator*() {
					return ptr->data;
			}

			Iterator begin(){
					return Iterator(head);
			}

			Iterator end() {
					return Iterator(tail->next);
			}

};
