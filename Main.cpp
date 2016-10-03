#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<stdio.h>
#include <algorithm> 

using namespace std;


void InsertionSort(int *array, int begin, int end){
	for (int i = begin + 1; i < end; i++){
		int temp = i;
		while (temp > 0 && array[temp - 1] > array[temp]){
			swap(array[temp - 1], array[temp]);
			temp--;
		}
	}
}

int main(){
	int n;
	cin >> n;
	int *array = new int[n];
	for (int i = 0; i < n; i++){
		array[i] = rand() % n;
	}
	InsertionSort(array, 0, n);

	system("pause");

	delete[]array;

	return 0;
}