#include<iostream>
using namespace std;
void swap(long double **arr,int n,int row1,int row2) {
	for(int col=0;col<2*n;++col) {
		*(*(arr+row1)+col)=*(*(arr+row1)+col)+*(*(arr+row2)+col);
		*(*(arr+row2)+col)=*(*(arr+row1)+col)-*(*(arr+row2)+col);
		*(*(arr+row1)+col)=*(*(arr+row1)+col)-*(*(arr+row2)+col);
	}
}
bool inverse(long double **arr,int n) {
	for(int row=0;row<n;++row) {
		int flag=0;
		for(int col=0;col<n;++col) {
			if(*(*(arr+row)+col)==0) 
				++flag;
			else
				break;
			if(flag==n)
				return false;
		}
	}
	for(int row=0;row<n;++row) {
		for(int col=n;col<2*n;++col) {
			if(row==(col-n))
				*(*(arr+row)+col)=1;
			else
				*(*(arr+row)+col)=0;
		}
	}
	for(int row1=0;row1<n;++row1) {
		if(*(*(arr+row1)+row1)==0) {
			for(int row2=(row1+1);row2<n;++row2) {
				if(*(*(arr+row2)+row1)!=0) {
					swap(arr,n,row1,row2);
					break;
				}
			}
		}
		long double temp=*(*(arr+row1)+row1);
		for(int col=0;col<2*n;++col)
			*(*(arr+row1)+col)/=temp;
		for(int row2=0;row2<n;++row2) {
			if(row2!=row1 && *(*(arr+row2)+row1)!=0) {
				int temp2=*(*(arr+row2)+row1);
				for(int col=0;col<2*n;++col)
					*(*(arr+row2)+col)=*(*(arr+row2)+col)-(*(*(arr+row1)+col))*temp2;
			}
		}
	}
	return true;
}
int main() {
	int n,t;
	cout<<"Enter the number of testcases:";
	cin>>t;
	while(t-->0) {
		cout<<"Enter the dimensions of the matrix:";
		cin>>n;
		long double **arr;
		arr=new long double*[n];
		for(int i=0;i<n;++i)
			*(arr+i)=new long double[2*n];
		cout<<"Enter the elements of matrix:\n";
		for(int i=0;i<n;++i) {
			cout<<"|";
			for(int j=0;j<n;++j)
				cin>>*(*(arr+i)+j);
		}
		if(inverse(arr,n)) {
			cout<<"The inverse of the matrix is:\n";
			for(int i=0;i<n;++i) {
				cout<<"|";
				for(int j=n;j<2*n;++j) {
					cout<<*(*(arr+i)+j)<<" ";
				}
				cout<<"|"<<endl;
			}
		}
		else {
			cout<<"Inverse of matrix doesnt exist.\n";
		}
		for(int i=0;i<n;++i)
			delete[] *(arr+i);
		delete[] arr;
	}
	return 0;
}