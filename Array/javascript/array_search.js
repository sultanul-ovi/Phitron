// JavaScript Implementation
// Array Search
// Searching An Element at a specific location


// Search Function
function findElement( arr, n, key)
{
    let i;
    for (i = 0; i < n; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

let array1 = [1, 3, 5, 6, 4];

let n = array1.length;

let search_item = 6;
let position = findElement(array1, n, search_item);


if (position == - 1)
    console.log("Element not found");
else
    console.log('Element Found');


