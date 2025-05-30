//   void deleteMid(stack<int>& s,int mid,int sizeOfStack)
//   {
//       if(mid==(sizeOfStack/2))
//       {
//          s.pop();
//          return;
//       }
//       int element = s.top();
//       s.pop();
//       deleteMid(s,mid+1,sizeOfStack);
//       s.push(element);
//   }
//     // Function to delete middle element of a stack.
//     void deleteMid(stack<int>& s, int sizeOfStack) {
  
//        {
//           int mid=0;
//           deleteMid(s,mid,sizeOfStack);
//        }
//     }
// };