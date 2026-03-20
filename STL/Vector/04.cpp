/* 2. reserve() vs resize() (VERY IMPORTANT)
🔹 reserve(n)

👉 Changes capacity only, not size

vector<int> v;
v.reserve(5);

Size = 0

Capacity = 5

No elements added

📌 Use Case

Avoid repeated copying when you know size in advance

🔹 resize(n)

👉 Changes size AND initializes elements

vector<int> v;
v.resize(5);

Size = 5

Capacity ≥ 5

Elements = 0 0 0 0 




shrink_to_fit() is used to:

👉 reduce the capacity of a vector to match its size

You add many elements → capacity becomes large

Then you remove elements → size becomes small
❗ But capacity remains large (wasted memory)

👉 shrink_to_fit() helps free that extra memory


v.shrink_to_fit();


*/






