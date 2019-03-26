#include<iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int n;
struct StaffNode{
    int staffID;
    char staffName[ 15 ];
    int staffAge;
}staff[ 35 ];

bool cmp( StaffNode staff1, StaffNode staff2 ){
    if( staff1.staffAge != staff2.staffAge ){   //如果年龄不相等，按照年龄排序
        return staff1.staffAge  < staff2.staffAge;
    }
    else if( staff1.staffID != staff2.staffID ){
        return staff1.staffID  < staff2.staffID;
    }

    int temp = strcmp( staff1.staffName, staff2.staffName );
    if( temp != 0){
        return temp < 0;
    }
}

int main(){
    while( scanf( "%d", &n ) != EOF ){
        for( int i = 0; i < n; i ++ ){
            scanf( "%d %s %d", &staff[ i ].staffID, &staff[ i ].staffName, &staff[ i ].staffAge );
        }

        sort( staff, staff + n, cmp );

        if( n < 3 ){
            for( int i = 0; i < n; i ++ ){
                printf( "%d %s %d\n", staff[ i ].staffID, staff[ i ].staffName, staff[ i ].staffAge );
            }
        }
        else{
            for( int i = 0; i < 3; i ++ ){
                printf( "%d %s %d\n", staff[ i ].staffID, staff[ i ].staffName, staff[ i ].staffAge );
            }
        }
    }
}
