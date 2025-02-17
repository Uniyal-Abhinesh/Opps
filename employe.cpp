  #include<iostream>
  using namespace std;
  class employe
  { //count is static member of class employe
    int id;
    static int count;
    public:
    void setdata()
    {
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getdata()
    {

        cout<<"The employe id is : "<<id<<"this is employe id : "<<count<<endl;
    }
  };
  int employe ::count; //default value is 0
  int main()
  {
    employe abhi,rohan,sarthak;
    abhi.setdata();
    abhi.getdata();
    sarthak.setdata();
    sarthak.getdata();
    rohan.setdata();
    rohan.getdata();
    return 0;
  }