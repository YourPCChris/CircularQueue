/*
 * Christopher Bennett
 * Circular Queue in C++ 
 *
*/


#include <iostream>


using namespace std;


class Queue
{
	const int MAX = 10;
	const int MIN = 0;
	int front;
	int end;
	double arr[10];
	int size = sizeof(arr) / sizeof(double);

	public:
		void make()
		{
			//variables
			this->front = 0;
			this->end = 8;
			
		}

		void show()
		{
			for (int i=0; i < size ;i++)
			{
				cout << this->arr[i] << endl;
			}

			//cout << "method called" << endl;
			//this->Dequeue();
			//this->Enqueue();
			//cout << this->CheckFull() << endl;
			//cout << this->CheckEmpty() << endl;
		}
	
		int Dequeue()
		{
			cout << "Dequeue" << endl;

			return 0;
		}

		void Enqueue(double value)
		{
			cout << "Enqueue" << endl;

			if (CheckFull() == 0){
				this->arr[this->end] = value;
				if (this->end == this->MAX){
					this->end == this->MIN;
				}else {this->end ++;}
			}

		}

		public:

			bool CheckFull()
			{
				cout << "Check Full" << endl;

				return (this->end == this->MAX && this->front == this->MIN || this->end == (this->front - 1));
			}

			bool CheckEmpty()
			{
				cout << "Check Empty" << endl;
				
				return (this->front == this->end);
			}
};



int main()
{
	cout << "We Ball" << endl;

	Queue myQ;
	myQ.make();
	myQ.show();
	myQ.Enqueue(2.2);
	myQ.Enqueue(3);
	myQ.Enqueue(-3);
	myQ.Enqueue(21);
	myQ.Enqueue(-32.1);

	myQ.show();

	return 0;
}


