#include <iostream>
#include <vector>

/**REQ: vector must be sorted already
    Alyssa Ma
    A binary search repeatedly divides the interval in half to find the element
*/


void b_search(std::vector<int> vec, int element)
{
    int currmin = 0; // current min index
    int currmax = vec.size() - 1; // current max index
    int mid = ((currmin + currmax) / 2); // the middle of the current indexes
    bool found = false; //for the while loop

    while((currmin <= currmax) && (found == false))
    {
        if(vec[mid] == element) // if element is found
        {
            std::cout << std::endl << "Element found at index " << mid << "." << std::endl;
            found = true;
        }
        else if(vec[mid] < element) // if the middle is less than the element, we know the element is in the second half
        {
            currmin = mid + 1;
        }
        else if (vec[mid] > element) // if the middle is greater than the element, we know the element is in the first half
        {
            currmax = mid - 1;
        }
        mid = ((currmin + currmax) / 2); //adjust the middle of the indexes again
        std::cout << mid << " ";

    }
}


int main()
{
    std::vector<int> vec= {10, 20, 30, 40, 56, 78, 80, 93, 103};
    int element = 20;

    b_search(vec, element);

    return 0;
}
