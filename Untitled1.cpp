/* Assume that n is greater than or equal to 0 */
void fun2(int n)
{
if(n == 0)
	return;

fun2(n/2);
cout << n%2 << endl;
}

//This code is contributed by shubhamsingh10

