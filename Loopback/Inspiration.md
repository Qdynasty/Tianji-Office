** 避免越界相邻比较**

```C++
在这个表达式中，ss是一个二维列表，[(i + 1) % n][0]是对该列表的一个索引操作。具体来说，[(i + 1) % n]表示取ss列表中的第(i + 1) % n个元素（即下标为(i + 1) % n的元素），[0]表示取该元素的第0个元素（即该元素的第一个值）。

整个表达式的作用是取ss列表中下标为(i + 1) % n的元素的第一个值，并将其作为表达式的返回值。需要注意的是，由于取模运算符%的优先级比加法运算符+的优先级要高，因此表达式中的(i + 1) % n会先计算出(i + 1)的值，再对n取模。
```