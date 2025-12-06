function checkAB(s) {
  let n = s.length;
  let i = 0;

  // Rule 1: must start with 'a'
  if (s[0] !== 'a') return "NO";

  while (i < n) {

    // Case 1: current is 'a'
    if (s[i] === 'a') {

      // If 'a' is last → valid
      if (i + 1 >= n) return "YES";

      // If next is 'a' → move 1 step
      if (s[i + 1] === 'a') {
        i += 1;
      }
      // If next is "bb" → move 3 steps
      else if (i + 2 < n && s[i + 1] === 'b' && s[i + 2] === 'b') {
        i += 3;
      }
      else {
        return "NO"; // illegal single 'b'
      }
    }
    else {
      // No standalone 'b' allowed
      return "NO";
    }
  }

  return "YES";
}
