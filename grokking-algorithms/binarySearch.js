"use strict";
var arr = [2, 4, 5, 6, 7, 8, 9, 23, 56, 78];
var item = process.argv[2];

var binary_search = function (arr, low, high) {
    let mid = Math.floor((low + high) / 2);
    if (low <= high) {
        if (arr[mid] == item) {
            return mid;
        }
        if (arr[mid] > item) {
            return binary_search(arr, low, mid - 1);    // high = mid - 1;
        }
        return binary_search(arr, mid + 1, high);       // low = mid + 1;

    } else {
        return -1;
    }
}

let result = binary_search(arr, 0, arr.length - 1);
console.log('result: ', result);