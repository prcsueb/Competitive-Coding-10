/*
**Time Complexity (TC):**
- `peek()`: O(1)
- `next()`: O(1)
- `hasNext()`: O(1)

**Space Complexity (SC):** O(1)
*/

class PeekingIterator : public Iterator {
public:
    // Iterator iterator;
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {}
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.	    
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return Iterator(*this).next();
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
        return Iterator::next();
    }
	
	bool hasNext() const {
	    return Iterator::hasNext();
	}
};