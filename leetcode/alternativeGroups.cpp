// 100336. Alternating Groups I
// User Accepted:4387
// User Tried:5104
// Total Accepted:4414
// Total Submissions:5545
// Difficulty:Easy
// There is a circle of red and blue tiles. You are given an array of integers colors. The color of tile i is represented by colors[i]:

// colors[i] == 0 means that tile i is red.
// colors[i] == 1 means that tile i is blue.
// Every 3 contiguous tiles in the circle with alternating colors (the middle tile has a different color from its left and right tiles) is called an alternating group.

// Return the number of alternating groups.

// Note that since colors represents a circle, the first and the last tiles are considered to be next to each other.

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int lastValue = -1;
        int count = 0;
        int size = colors.size();
        for(int i = 0; i< size; i++)
        {
            if(colors[i] != colors[(i+1)%size] && colors[i] != colors[(i-1+size)%size])
            {
                count++;
            }
        }
        return count;
    }
};
