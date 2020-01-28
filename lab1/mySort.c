void mySort(int d[],unsigned int n)
{
	int i,value,hole;
	for( i=1; i<n; i++)
	{
		value = d[i];
		hole = i;
		while( hole>0 && d[hole-1]>value)
		{
			d[hole] = d[hole-1];
			hole--;
		}
		d[hole] = value ;
	}
}
