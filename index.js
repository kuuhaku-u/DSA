/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function (l1, l2) {
  let a = parseInt(l1.reverse().join(""));
  let b = parseInt(l2.reverse().join(""));
  let sum = a + b;
  console.log(sum);
  return sum.toString().split("").reverse();
};

/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
var findMedianSortedArrays = function (nums1, nums2) {
    let temp = [...nums1, ...nums2].sort((a, b) => a - b);
    let l = temp.length;
    let m ;
    if (l % 2 !== 0) {
        console.log(temp[parseInt(l/2)]);
        m = temp[l/2]
      } else {
      let f = temp[parseInt(l/2)] + temp[parseInt(l/2)-1];
       m = parseFloat(f/2)
    }
    return m
  }
  // console.log(findMedianSortedArrays((nums1 = [1, 2]), (nums2 = [3,4])));
  
// /**
//  * @param {number[]} nums1
//  * @param {number[]} nums2
//  * @return {number}
//  */
// var findMedianSortedArrays = function (nums1, nums2) {
//   let temp = [...nums1, ...nums2].sort((a, b) => a - b);
//   let l = temp.length;
//   let m ;
//   if (l % 2 !== 0) {
//       console.log(temp[parseInt(l/2)]);
//       m = temp[l/2]
//     } else {
//     let f = temp[parseInt(l/2)] + temp[parseInt(l/2)-1];
//      m = parseFloat(f/2)
//   }
//   return {temp, m}
// };

/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {

    if (x.startsWith("-")){
        return "-" + x.split('').slice(1).reverse().join("")
    }
    else {
        return x.split('').reverse().join("")
    }

};
console.log(reverse("-241"));
