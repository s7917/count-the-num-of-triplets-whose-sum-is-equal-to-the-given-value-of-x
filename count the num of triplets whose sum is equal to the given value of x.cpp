//count the num of triplets whose sum is equal to the given value of x

#include<iostream>
using namespace std;

int main(){
    int array[]= {3 ,1,2 ,4 ,0,6};
    int size =sizeof(array)/sizeof(array[0]);

    int x;
    cout<<"enter X;";
    cin>>x;

    int count=0;

    for(int i=0 ; i<size ; i++){
        for(int j=i+1 ; j<size ; j++){
            for(int k=j+1; k<size ; k++){

                if(array[i]+array[j]+array[k]==x){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}
