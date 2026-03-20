// What is a Vector in C++?

// A vector is a dynamic array provided by the STL.
// 👉 Unlike normal arrays, its size can grow or shrink automatically.

// Dynamic size (no fixed limit)
// Easy to use
// Works with STL algorithms like sort()




// A vector stores elements in contiguous (continuous) memory, just like a normal array.

// So:
// Elements are stored one after another
// You can access them using index (v[0], v[1], etc.)
// Very fast access:


// When the vector is full:

// 👉 It does this internally:

// Allocates a new bigger memory block (usually double size)
// Copies all old elements into new memory
// Deletes old memory
// Adds the new element

// Yes, it copies the whole array when full
// But it doesn’t happen every time → so overall still efficient
// That’s why push_back() is amortized O(1)


// #include <vector>
// vector<data_type> name;