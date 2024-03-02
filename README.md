# CircularQueue

The Circular Queue is a FIFO Data-Type that is better than the basic queue data type as it works on changable start and end points of the queue and therefore is more easily reuseable and self sustaining.

Included Functions:

Check_Empty(CQName): Checks if **front** is equal to **end** if this is true then the queue is empty.
Check_Full(CQName): Checks if **end** is equal to **MAX** or **front-1** this would mean the queue is full.
EnQueue(CQName, value): If Queue is not full, add **value** to the index that **end** points to and increment **end** by 1.
DeQueue(CQName): if queue is not empty increment **front** by 1 or if **front** is equal to **MAX** make it 0.
Peak(CQName): returns value at index that **front** points to without changing any pointer or removing any values.


