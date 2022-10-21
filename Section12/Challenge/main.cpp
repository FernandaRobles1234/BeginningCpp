#include <iostream>

int* apply_all(const int * const arr1, size_t arr1_size, const int * const arr2, size_t arr2_size){
    
    int *p_array = new int [arr1_size*arr2_size];
    
    int position {0};
    for(size_t i{}; i< arr1_size; i++){
        for(size_t j{}; j<arr2_size; j++){
            p_array[position]= arr1[i]*arr2[j];
            position++;
        }
    }
    
    return p_array;
}

void print (const int * const arr, size_t arr_size){
    for(size_t i{}; i<arr_size; i++){
        std::cout << arr[i] << std::endl;
    }
    
}

int main()
{
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    std::cout << "Array 1: ";
    print(array1, array1_size);
    
    std::cout << "Array 2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    std::cout << "Result: ";
    
    print(results, results_size);
    
    std::cout << std::endl;
    
    delete [] results;

	return 0;
}
