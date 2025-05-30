// void SortInDecreasing(stack<int> &s,int num)
// {
//     if(s.empty() || s.top()<num)
//     {
//         s.push(num);
//         return;
//     }
//     int curr=s.top();
//     s.pop();
//     SortInDecreasing(s,num);
//     s.push(curr);
//     }
// void SortedStack :: sort()
// {
// if(s.empty())
// return;

// int num=s.top();
// s.pop();
// sort();
// SortInDecreasing(s,num);
// }