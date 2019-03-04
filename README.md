dataStruct_algo

所有排序算法都是从小到大排序

c_algo
1.冒泡排序：
假设有一个乱序整形序列，取首个数字与相邻数字比较，如果相邻的小于当前数字则交换，然后继续使用大
的数字与相邻数字比较，如此最终最大的数字会被找到并且放在最后这便是一次遍历。如此遍历5
次便可以从小到大找出所有数字。为了提高性能，可以使用一个标志用来判断遍历过程中是否有交
换事件发生，如果没有则表示排序已经完成。

2.插入排序：
假设有一个乱序整形序列，假设首个数字是已排序过的数字，而其他的为未排序的数字，取第一个
未排序数字去以遍历方式比较已排序数字，如果未排序数字大于已排序数字则将已排序数字后移，
继续将未排序数字与已排序数字的前一个数字比较，直到找到比未排序数字小的那个数字，并将未
排序数字放置于已排序数字前。 如此以遍历的方式取所有未排序的数字与已排序数字比较，最终排
序结束。

3.选择排序：
假设有一个乱序整形序列，指定第一个值为最小值，以其为基准记住它的下标值。遍历剩余的数字，
如果有比最小值还小的数字则更新最小值下标，然后继续遍历。直至剩余数字全部遍历完毕，则将
找到的最小值与假设的那个最小值交换。

4.快速排序：
假设有一个乱序整形序列，以最后一个数值为基准，分别从两头开始遍历，如果左边遍历的遇到大于
基准值的数字则停止遍历，右边遍历遇到小于基准值的时候则停止遍历，交换这两个数值，继续遍历
直到左右遍历相遇，则表示遍历完毕，最终将小于基准值的分为一组，大于基准值的为另一组。递归
重复上述操作，最终得到从小到大的有序序列。基准值可以通过某种取平均值的方式尽可能选取中间
值减少递归次数，加快排序速度。

5.基数排序：
假设有一个有重复的乱序整形序列，使用一个数组记录所有数字出现的次数，使用数组下标来表示该
数字。然后遍历这个数组，得到一个有序序列

6.归并排序：
假设有一个乱序整形序列，将其递归均分为2组，直到无法分配为止。对小组逆向排序合并。最终得到
有序数据。

7.队：
一种先进先出的数据结构，对外只提供从后进和从头出的接口。

8.栈：
一种后进先出的数据结构，对外只提供了后进先出的接口。

c++_algo


python_algo

