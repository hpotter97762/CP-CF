#include<iostream>
using namespace std;

int main(){
    int starti,endi;
    char startj,endj;
    cin>>startj>>starti;
    cin>>endj>>endi;
    int diff1,diff2;
    if(endi>starti){
        diff1=endi-starti;
        if(endj>startj){
            diff2=endj-startj;
            if(diff1>diff2){
	            cout<<diff1<<endl;
            	while(endj!=startj){
            	    starti++,startj++;
            	    cout<<"RU\n";
            	}
            	while(endi!=starti){
            		cout<<"U\n";
            		starti++;
            	}
            }
            else{
            	cout<<diff2<<endl;
            	while(endi!=starti){
            	    starti++,startj++;
            	    cout<<"RU\n";
            	}
            	while(endj!=startj){
            		cout<<"R\n";
            		startj++;
            	}
            }
        }
        else{
        	diff2=startj-endj;
            if(diff1>diff2){
            	cout<<diff1<<endl;
            	while(endj!=startj){
            	    starti++,startj--;
            	    cout<<"LU\n";
            	}
            	while(endi!=starti){
            		cout<<"U\n";
            		starti++;
            	}
            }
            else{
            	cout<<diff2<<endl;
            	while(endi!=starti){
            	    starti++,startj--;
            	    cout<<"LU\n";
            	}
            	while(endj!=startj){
            		cout<<"L\n";
            		startj--;
            	}
            }
        }
    }
    else{
    	diff1=starti-endi;
        if(endj>startj){
            diff2=endj-startj;
            if(diff1>diff2){
        		cout<<diff1<<endl;
            	while(endj!=startj){
            	    starti--,startj++;
            	    cout<<"RD\n";
            	}
            	while(endi!=starti){
            		cout<<"D\n";
            		starti--;
            	}
            }
            else{
            	cout<<diff2<<endl;
            	while(endi!=starti){
            	    starti--,startj++;
            	    cout<<"RD\n";
            	}
            	while(endj!=startj){
            		cout<<"R\n";
            		startj++;
            	}
            }
        }
        else{
        	diff2=startj-endj;
            if(diff1>diff2){
            	cout<<diff1<<endl;
            	while(endj!=startj){
            	    starti--,startj--;
            	    cout<<"LD\n";
            	}
            	while(endi!=starti){
            		cout<<"D\n";
            		starti--;
            	}
            }
            else{
            	cout<<diff2<<endl;
            	while(endi!=starti){
            	    starti--,startj--;
            	    cout<<"LD\n";
            	}
            	while(endj!=startj){
            		cout<<"L\n";
            		startj--;
            	}
            }
        }
    }
}