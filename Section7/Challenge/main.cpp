#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vector1 {};
    vector<int> vector2 {};
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "Print vector1: " << endl;
    int size_vector1 = vector1.size();
    for (int i=0; i < size_vector1; i++) {
        cout << vector1.at(i) << endl;
    }
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "Print vector2: " << endl;
    int size_vector2 = vector2.size();
    for (int i=0; i < size_vector2 ; i++) {
        cout << vector2.at(i) << endl;
    }
    
    vector <vector <int>>  vector_2d;
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "Print vector_2d: " << endl;
    int size_row_vector_2d = vector_2d.size();
    int size_column_vector_2d = vector_2d.at(0).size();
//    cout << size_row_vector_2d << endl;
//    cout << size_column_vector_2d << endl;
    for (int i=0; i < size_row_vector_2d ; i++) {
        for (int j=0; j < size_column_vector_2d; j++){
            cout << vector_2d [i] [j] << endl;
        }
    }
    
    vector1.at(0) = 1000;
    
    cout << "Print vector_2d: " << endl;
    size_row_vector_2d = vector_2d.size();
    size_column_vector_2d = vector_2d.at(0).size();
    for (int i=0; i < size_row_vector_2d ; i++) {
        for (int j=0; j < size_column_vector_2d; j++){
            cout << vector_2d [i] [j] << endl;
        }
    }
    
    cout << "Print vector1: " << endl;
    size_vector1 = vector1.size();
    for (int i=0; i < size_vector1; i++) {
        cout << vector1.at(i) << endl;
    }
    
    

    
    
	return 0;
}
