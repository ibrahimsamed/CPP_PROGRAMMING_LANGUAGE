#include <iostream>
#include <fstream>
using namespace std;

/*int main()
{   
    int a;
    a=10;
    cin >> a;
    if (a<50){
    }
        cout<<"nounuz f"<<endl;
    else if (50<=a &&a<70) {
        cout<<"notunu c"<<endl;
    }
    else if (70<=a&& a<90) {
        cout<<"notunu d"<<endl;
    }
    else {
        cout<<" notunuz a"<<endl;
    }
}
int main ()
{
    cout<<"bir işçi işi kaç günde bitirmektedir"<< endl;
    int gun,isci;
    cin >>gun;
    cout <<"kaç işçi çalışacak"<<endl;
    cin>>isci;
    cout<<"işin bitirlmes süresi " << (float)gun/isci<<endl;
}
int main()
{
    int toplam =0;
    int sayi=1;
    int okunan=0;

    for(int i=0;okunan!=-1;i++){
       
        cout<<"sayı giriniz"<<endl;
        cin>>okunan;
        toplam+=okunan;
        sayi++;
    }
    cout <<"avg:"<<toplam/sayi<<endl;
}
int main ()
{
    int i,n,k;
    cout<<"değer girini<"<<endl;
    cin>>n;
    for (i=0;i<=n;i++)
    {
        for(k=i;k>=0;k--)
        {
            while (n<k-i){
                cout<<" ";
            }
            cout<<"*";
        }  
        cout<<endl;     
    }
    for (i=n;i>=0;i--)
    {
        for(k=0;k<=i;k++)
        {
            cout<<"*";
        }  
        cout<<endl; 
    }
}
//fonksiyonlar
bool asalmi(int x)
{
    for(int i=2;i<x;i++)
    {
        if (x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    for (int i=2;i<1000;i++)
    {
        if (asalmi(i))
        {
            cout<<i<<endl;
        }
    }
}
int main()
{
    int a[7]={2,3,5,6,9,1,8};
    int as =a[0];
    for (int i=1;i<7;i++)
    {
        if(as<a[i])
        {
            as=a[i];
        }
    }
    cout<<as<<endl;
}
int dizilerle_toplama()
{
    int a[8]={4,7,6,5,4,6,7,8,};
    int toplam=0;
    int çarpım =1;
    for (int i=0;i<8;i++)
    {
        toplam+=a[i];
        çarpım*=a[i];
    }
    cout<<toplam<<"toplam"<<çarpım<<endl;
}
int deneme()
{
    int n ;
    cin >>n;
    int toplam=0;
    for (int i=0;i<n;i++)
    {
        int g;
        cin>>g;
        toplam +=g;      
    }
    cout<<toplam<<endl;
}
int denemea ()
{
    int a[5];
    cout <<"lütfen 5 sayı giriniz"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];1
    }
}*
int main ()
{
    int n;
    cin>>n;
    int skor=0;
    srand(time(NULL));
    for (int i=0;i<n;i++)
    {
        int z= rand()%6+1;
        int z1=rand()%6+1;
        cout <<z<<"\t"<<z1<<endl;
    if (z1>z)
    {
        skor ++;
    }
    else if (z>z1)
    {
        skor--;
    }
    }
    cout<<skor;
}
// pointers
int main()
{
    int a =10;
    int *p;
    p=&a;
    cout<< "a:"<<a<<endl;
    cout<< "*p:"<<*p<<endl;
    cout<< "&a"<<&a<<endl;
    cout<< "p:"<<p<<endl;
}
int deneme()
{
    cout<<"lütfen 5 adet sayı giriniz"<<endl;
    int a,b,c,d,e;
    cin >>a>>b>>c>>d>>e;
    cout <<a<<b<<c<<d<<e;
}
int denem1()
{
    cout<<"lütfen 5 adet sayı giriniz"<<endl;
    int a[5];
    for (int i=0;i<5;i++)
    {
        cin>>a[i];       
    }
    for (int i=0;i<5;i++)
    {
        cout<<a[i];       
    }
}
int denme2()
{   
    cout<<"lütfen 5 adet sayı giriniz"<<endl;
    int *p;
    p=(int*)malloc(sizeof(int)*5);
    for (int i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    for (int i=0;i<5;i++)
    {
        cout<<*(p+i);       
    }
}int denenm()
{
    char *s="evren";
    cout<<s<<endl;;
    cout<<s[1]<<endl;
}
int deneme3()
{
    cout<<"bir saat dilimi gir"<<endl;
    char s[11];
    cin>>s;
    if(s[8]=='P')
    {
        s[1]=s[1]+2;
        s[0]=s[0]+1;
        s[8]='\0';
        cout<<s<<endl;
    }
    else 
    {
        s[8]='\0';
        cout<<s<<endl;
    }
}
//pollindrome oyunu
int poli()
{
    cout<<"lütfen bir şeyler yazın"<<endl;
    char c[100];
    cin>>c;
    char *p,*q;
    p=c;
    q=c;
    while (*q!='\0')
    {
        q++;
    }
    q--;
    bool polin=true;
    while(q>p)
    {
        if(*p!=*q)
        {
            polin=false;
        }
        p++;
        p--;
    }
    if(polin)
    {
        cout<<"poli"<<endl;
    }
    else 
        cout<<"poli değil"<<endl;
}
int main()
{
    ifstream dosya("adsiz.txt");
    string s;
    while (getline(dosya,s))
    {
        cout<<s<<endl;
    }
    dosya.close();

}
// OBJECT ORIENTED PROGRAMMING
class insan
{
    public:
        int boy;
        int kilo;
        int yas;
        int yemek ()
        {
            kilo =kilo+2;
        }
        int f(int x)
        {
            return x+10;
        }
};
int denem()
{
    insan ali;// class object oldu
    ali.boy=180;
    ali.kilo=80;
    ali.yas=24;
    cout<<ali.boy<<ali.yas<<ali.kilo<<endl;
    insan ibrahim;
    ibrahim.kilo=95;
    ibrahim.yas=23;
    ibrahim.boy=185;
    cout<<" ibrahim yaş:"<<ibrahim.kilo<<endl;
    ali.yemek();
    ibrahim.yemek();
    cout<<ibrahim.kilo<<endl;
}
class dikdörtgen 
{
    public:
        int en,boy,cevresi,alanı;
        int cevre()
        {
            cevresi=2*(en+boy);
        }
        int alan()
        {
            alanı = en*boy;
        }
};
int deneme21 ()
{
    dikdörtgen deneme1,deneme2;
    deneme1.en=50,
    deneme1.boy=100; 
    deneme2.en=150;
    deneme2.boy=200;
    deneme1.cevre();
    deneme2.cevre();
    deneme1.alan();
    deneme2.alan();
    cout<<"diktörgen 1 alanı: "<<deneme1.alanı<<"  dikdörtgen 1 çevresi  "<<deneme1.cevresi<<"  dikdörtgen2 alan:  "<<deneme2.alanı<<"  diktörgen 2 çevre :  "<<deneme2.cevresi<<endl; 
}
class yemek
{
    public:
        int kalori,fiyat,gram;
        int isitmak(int sure)
        {
            if (sure<3000){
                kalori += sure;
            }
            else 
                kalori=0;            
        }
};
class insan
{
    public :
        int boy,yas;
        float kilo;
        int yemek(yemek y)
        {
            kilo +=y.kalori/(float)7000;
        }
};
int main()
{
    yemek sandvic;
    sandvic.kalori=233;
    sandvic.fiyat=10;
    sandvic.gram=100;
    insan ali;// class object oldu
    ali.boy=180;
    ali.kilo=80;
    ali.yas=24;
    cout<<ali.boy<<"    "<<ali.yas<<"   "<<ali.kilo<<endl;
    ali.yemek(sandvic);
    cout<<ali.boy<<"    "<<ali.yas<<"   "<<ali.kilo<<endl;
    sandvic.isitmak(50);
    ali.yemek(sandvic);
    cout<<ali.boy<<"    "<<ali.yas<<"   "<<ali.kilo<<endl;
}
// encapsulation
class dortgen
{
    private:
        int boy,en;
        public:
        int alan();
        int cevre()
        {
            return 2*(en+boy);
        }
        int getboy()
        {
            return boy;
        }
        int geten()
        {
            return en;
        }
        int setboy(int b )
        {
            boy=b;
        }
        int seten(int b )
        {
            if(b>0)
            {
                boy=b;
            }
            else
                boy=0;
        }
};
int dortgen::alan()
{
    return en*boy;
}
int main()
{
    dortgen a;
    a.setboy(2 );
    a.seten (-2);
    cout<<a.alan()<<"   cevre   "<<a.cevre()<<" en"<<endl;
}
//interitance
class insan
{
    private:
        int boy,kilo;
        char *adres;
    public :
        void setboy(int x)
        {
            boy=x;
        }
        int getboy()
        {
            return boy;
        }
        void setboy(float x)
        {
            boy=x*100;
        }
};
class calisa:public insan 
{
    public:
    int maas;
    int zam(int x)
    {
        maas+=x;
    }
};
int main(void)
{   
    insan ali;
    ali.setboy(180);  
    cout<<ali.getboy()<<endl;  
    float b=1.85 ;
    ali.setboy(b);
    cout<<ali.getboy()<<endl;
    return 0;
}
// overloading
class dortgen 
{
    private:
        int boy;
        int en;
    public:
        void setboy(int boy)
        {
            this -> boy=boy;
        }
        void seten(int en)
        {
            this -> en=en;
        }
        int getboy()
        {
            return boy;
        }
        int geten()
        {
            return en;
        }
        dortgen operator+(cons dortgen & d)
        {
            dortgen ddortgen;
            ddortgen.en=this->en+d.en;
            ddortgen.boy=this->boy+d.boy;
            return ddortgen;
        }
};
int main (void)
{
    dortgen d;
    d.setboy(180);
    d.seten(20);
    dortgen x;
    x.setboy(150);
    x.geten(30);
    cout<<d.getboy()<<endl;   
    dortgen toplam=x+d;
    cout<<d.getboy()<<endl;
    return 0;
}
// constructor
class insan 
{
    private:
        int boy,kilo;
        public:
        insan()
        {
            boy =10;
            kilo =1;
        }
        insan(int b )
        {
            boy=b;
        }
        insan (int b, int k)
        {
            boy=b;
            kilo=k;
        }
        void setboy(int b)
        {
            boy=b;
        }
        int getboy ()
        {
            return boy;
        }
};
int main(void)
{
    insan ali;
    insan veli(170,70);
    cout<<ali.getboy()<<" velinin boyu  "<<veli.getboy();
    return 0;
}
// polymorphism
class sekil
{
    protected:
    int en,boy;
    public:
    int getboy()
    {
        return boy;
    }
    int geten()
    {
        return en;
    }
    sekil & setboy(int boy)
    {
        this -> boy=boy;
        return *this;
    }
    sekil & seten(int en)
    {
        this -> en=en;
        return *this;
    }
    virtual int alan()
    {
        cout<<"şekilde alan"<<endl;
        return 0;
    }
    sekil(int a,int b)
    {
        if (a<0)
        {
            en=0;
        }
        else 
        en =a;
        boy=b;
    }
};
class dortgen : public sekil
{
    public :
        dortgen(int a,int b):sekil(a,b) {}
    int alan() //override
    {
        cout<<"dörtgende alan  ";
        return en*boy;
    }
};
class ucgen : public sekil
{
    public:
    ucgen (int a,int b):sekil(a,b){}
    int alan()//override
    { 
        cout<<"  üçgende alan   ";
    return en*boy/2;
    }
};
int main()
{
    ucgen u(4,5);
    dortgen d(4,5);
    cout<<"üçgen alanı "<<u.alan()<<endl;
    cout <<"dortgen alanı"<<d.alan()<<endl;
    sekil *s;
    s= &u;
    cout<<"seklin alanı (ucgen)"<<s->alan()<<endl;
    s=&d;
    cout<<"sekil alanı(dortgen)"<<s->alan()<<endl;
}*/
//exception handling
class istisna :public exception
{
    public : char * hata(){
        return "hata oluştu";
    }
};
class deneme
{
    public: int f(int x){
        if(x==0){
            throw istisna();
        }
    }
};
int main(){
    deneme d;
    try
    {
        {
            d.f(0);
        }
    }
    catch(istisna i) {
        cout<<i.hata()<<endl;
    }
    
}
