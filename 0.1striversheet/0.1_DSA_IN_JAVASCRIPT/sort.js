function kadanesAlgorithm(arr) {
    
  let max_so_far = arr[0];
  let current_max = arr[0];

  for (let i = 1; i < arr.length; i++) {
    current_max = Math.max(arr[i], current_max + arr[i]);

    max_so_far = Math.max(max_so_far, current_max);
  }

  return max_so_far;
}

// Example usage:
const numbers1 = [-2, 1, -3, 4, -1, 2, 1, -5, 4];
console.log(`Maximum subarray sum for [${numbers1}]: ${kadanesAlgorithm(numbers1)}`); // Output: 6

const numbers2 = [1, 2, 3, -2, 5];
console.log(`Maximum subarray sum for [${numbers2}]: ${kadanesAlgorithm(numbers2)}`); // Output: 9

const numbers3 = [-1, -2, -3, -4];
console.log(`Maximum subarray sum for [${numbers3}]: ${kadanesAlgorithm(numbers3)}`); // Output: -1