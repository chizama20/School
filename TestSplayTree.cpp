    #include <iostream>
    #include "SplayTree.h"
    using namespace std;

        // Test program
    int main( )
    {
        SplayTree<int> t;
        int NUMS = 35;
        const int GAP  =   37;
        int i;

        cout << "Checking... (no more output means success)" << endl;

        for( i = GAP; i != 0; i = ( i + GAP ) % NUMS )
            t.insert( i );

        for( i = 1; i < NUMS; i+= 2 )
            t.remove( i );

        if( NUMS < 40 )
            t.printTree( );

        for( i = 1; i < NUMS; i+=2 )
        {
            if( t.contains( i ) )
                cout << "Find error1!" << endl;
        }

        SplayTree<int> t2;
        t2 = t;

        for( i = 1; i < NUMS; i+=2 )
        {
            if( t2.contains( i ) )
                cout << "Find error2!" << endl;
        }

        cout << "Max element in the list: " << t2.findMax() << endl;
        cout << "Min element in the list: " << t2.findMin() << endl;

        cout << "Test completed." << endl;
        return 0;
}
