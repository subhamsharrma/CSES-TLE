// // let write code to sort a string in js 


// function sortString(str) {
//     // Convert the string to an array of characters
//     let charArray = str.split('');
//     // Sort the array of characters
//     charArray.sort();
//     // Join the sorted characters back into a string
//     return charArray.join('');
// }
// // Example usage:
// let inputString = "javascript";
// let sortedString = sortString(inputString);
// console.log(sortedString); // Output: "aacijprstv"


// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------


// what if the string looks like this -- > ant mant xant rent

// function sortWordsInString(sentence) {
//     // Split the sentence into words
//     let wordsArray = sentence.split(' ');
//     // Sort the array of words
//     wordsArray.sort();
//     // Join the sorted words back into a sentence
//     return wordsArray.join(' ');
// }   
// // Example usage:
// let inputSentence = "ant mant xant rent";
// let sortedSentence = sortWordsInString(inputSentence);
// console.log(sortedSentence); // Output: "ant mant rent xant"

// --------------------------------------------------------------------------------
// --------------------------------------------------------------------------------


// write in same code in brute appraoch without using inbuilt sort function
function bruteForceSortWordsInString(sentence) {
    // Split the sentence into words
    let wordsArray = sentence.split(' ');   
    // Implementing bubble sort to sort the array of words
    let n = wordsArray.length;
    for (let i = 0; i < n - 1; i++) {
        for (let j = 0; j < n - i - 1; j++) {
            if (wordsArray[j] > wordsArray[j + 1]) {
                // Swap wordsArray[j] and wordsArray[j + 1]
                let temp = wordsArray[j];
                wordsArray[j] = wordsArray[j + 1];
                wordsArray[j + 1] = temp;
            }
        }
    }
    // Join the sorted words back into a sentence
    return wordsArray.join(' ');
}
// Example usage:
let inputSentence2 = "ant mant xant rent";
let sortedSentence2 = bruteForceSortWordsInString(inputSentence2);
console.log(sortedSentence2); // Output: "ant mant rent xant"


/*
#include <iostream>
#include <sstream>
#include <vector>
using namespace std;    

void bubbleSort(vector<string>& words) {
    int n = words.size();
    for (int i = 0; i < n - 1; i++) {   
        for (int j = 0; j < n - i - 1; j++) {
            if (words[j] > words[j + 1]) {
                // Swap words[j] and words[j + 1]
                swap(words[j], words[j + 1]);
            }
        }
    }
}   

string bruteForceSortWordsInString(const string& sentence) {
    // Split the sentence into words
    stringstream ss(sentence);
    string word;
    vector<string> wordsArray;
    while (ss >> word) {
        wordsArray.push_back(word);
    }   
    // Sort the array of words using bubble sort
    bubbleSort(wordsArray);
    // Join the sorted words back into a sentence
    string sortedSentence;
    for (size_t i = 0; i < wordsArray.size(); i++) {
        sortedSentence += wordsArray[i];
        if (i != wordsArray.size() - 1) {
            sortedSentence += " ";
        }
    }
    return sortedSentence;
}
int main() {
    string inputSentence = "ant mant xant rent";
    string sortedSentence = bruteForceSortWordsInString(inputSentence);
    cout << sortedSentence << endl; // Output: "ant mant rent xant"
    return 0;
}
*/