#include <iostream>

#include <stdio.h>



using namespace std;



struct socket{
    string SK_num;//stock 代码
    string SK_ChNam;// stock 中文名
    int SK_HoldYear;//how many year of hold this stock 

};

struct Data_pass{
    int Dp_Year;
    float Dp_JZC;//净资产
    float Dp_ROE;//ROE
    float Dp_PB;//
    float Dp_PE;//净资产
    float Dp_JLR;//净利润
    float Dp_PXL;//派现率
    float Dp_FH;//分红

    float Dp_LC;//净利润未分红的留存
    float Dp_ZXL;//折现率
    float Dp_ZXZ;//折现值
    /*
     *
     *    float Dp_;//净资产
     *    float Dp_PE;//净资产
     *    float Dp_PE;//净资产
     */
};

struct Data_estimate{
    float De_PB;//预测PB
    float De_PE;//预测PE
    float De_ROE;//预测ROE
    float De_JZC;//计算后净资产
    float De_BJ;//计算后，本金
    float Dp_BXH;//计算后，本息和



    /*
     *float Dp_PE;//净资产
     *float Dp_PE;//净资产
     *float Dp_PE;//净资产
     *float Dp_PE;//净资产
     *float Dp_PE;//净资产
     *float Dp_PE;//净资产
     */

};


void Init();

int main() {  
    char str[]="Hello,this is a project of revalue stock in your pool \n "; 

    printf("%s",str);
    //socket SK;
    //Data_pass DP;
    //Data_estimate DE;
    Init();

    return 0;  
}

void insert(){

}

void Init(){

    socket SK;
    Data_pass DP;
    //SK.SK_num = 
    cout<<"请输入估值股票名(代码)："<<endl;
    cin>>SK.SK_num; 
    cout<<"请输入估值股票名(中文名)："<<endl;
    cin>>SK.SK_ChNam; 
    cout<<"请输入估值年数："<<endl;
    cin>>SK.SK_HoldYear; 
    
    
    cout<<"请按照格式输入多个值，中间用　’ ‘　隔开："<<endl;
    cin>>DP.Dp_Year>>DP.Dp_JZC>>DP.Dp_ROE>>DP.Dp_PXL>>DP.Dp_ZXL>>DP.Dp_PB;
    
    cout<<"the socket information you input are:\n"<<"股票代码: "+SK.SK_num+"\n"<<"股票名称: "+SK.SK_ChNam+"\n"<<"估值年数: "<<SK.SK_HoldYear<<"  |"<<endl;
    
    
    
    /*
     *cin>>xinxi.lname;
     *cout<<"What latter grade do you deserve ?"<<endl;
     *cin>>xinxi.gread;
     *cout<<"What's your age ?"<<endl;
     *cin>>xinxi.age;
     *cout<<"Name: "<<xinxi.lname<<','<<xinxi.fname<<endl;
     *cout<<"Grade: "<<xinxi.gread<<endl;
     *cout<<"Age: "<<xinxi.age<<endl;
     */
    //return 0;


}




/*
 *#define __DEBUG__  
 *#ifdef __DEBUG__  
 *#define DEBUG(format,...) printf("File:%s, Line:  %05d,Function:%s ,%s", __FILE__, __LINE__,__FUNCTION__, ##__VA_ARGS__)  
 * #define DEBUGi(format,...) printf("File: "__FILE__", Line: %05d: "format"/n", __LINE__, ##__VA_ARGS__)  
 *#else  
 *#define DEBUG(format,...)  
 *#endif  
 *int main() {  
 *    char str[]="Hello World";  
 *    //DEBUG("A ha, check me: %s /n",str); 
 *    //DEBUGi("A ha, check me: %s/n",str); 
 *    DEBUGi(); 
 *    DEBUG(); 
 *    return 0;  
 *}
 */

/*
 *using namespace std;
 *
 *class Person{
 *public:virtual char *getname() = 0;
 *};
 *
 *class  heiren{
 *public: virtual char *getname();
 *private:char *name;
 *};
 *
 *[>char * Person::getname(){
 *  cout<<"Person is called"<<endl;
 *  }
 *  */
/*char * heiren::getname(){
 *    cout<<"heiren is called"<<endl;
 *}
 *
 *
 *int main()
 *{
 *    //Person *p = new heiren();
 *    heiren *p = new heiren();
 *    p->getname();
 *    int a,b,c;
 *    a=1;
 *    b=2;
 *    c=a+b;
 *    printf("damn it!\n\n\n");
 *    printf("damn it!++++%d\n",c);
 *    //haha;
 *    //return 0;
 *    delete  p;
 *    p=NULL;
 *}
 */
