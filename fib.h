#ifndef FIB_H  // if this library doesnt already exist
#define FIB_H

// This is the content of the .h file.
//---------------------------------------------------------------------------



int fib(int range) {

    int first = 0, second = 1, fibonicci=0;

    for ( int c = 0 ; c < range ; c++ ) {
        if ( c <= 1 )
            fibonicci = c;
        else {
            fibonicci = first + second;
            first = second;
            second = fibonicci;
        }
        std::cout << fibonicci <<" ";
    }
    return 0;
}

//---------------------------------------------------------------------------
// This is the end of the header guard
#endif
