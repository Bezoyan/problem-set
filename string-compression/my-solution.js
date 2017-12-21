function isCompress (str)  {
  let count = 1;
  let N = {};
  let last = str[0];

  for (let i = 1; i <= str.length; ++i) {
    if ( i !== str.length && str[i] == last)
        count++;
    else {
      N += last;
      N.toString(count );
      count = 1;
      last = str [i];
    }
}
    if (N.length < str.length)
    return N;
    else {
      return str;

  }
}

let str1 = "ssskkkkkkkkkkddd";
console.log(isCompress(str1));
