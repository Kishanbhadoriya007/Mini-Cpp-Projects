// Q-137) Declare a pointer and initialize it to nullptr. Write an if condition to check if the pointer is null before trying to dereference it.

int main(){
    long *ptr = nullptr;
    if(ptr==0){
        cout<<"it is null\n";
    }
    cout<<"Enter the value to be  assigneed  \n";
    long b;
    cin>>b;
    ptr = &b;
    cout<<ptr;
    return 0; }