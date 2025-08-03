// #include <iostream>
// #include <cmath>
// using namespace std;


// int main (){

//    int arr [4];
//    arr[0]=1;
//    arr[1]=3;
// cout << arr[1];
//     return 0;
// }





////////////////////////inplisit type conversion
// int main (){
// char ch;
// cout <<"Enter charactor: ";
// cin >>ch;

// int value = ch;
// cout <<value <<endl;

// if(ch>=65 && ch<=90){
//   cout <<"uppercase\n";
// }
// else{
//   cout << "lowercase\n";
// }

// }

// int main (){

//   int n =45;
//   cout <<(n>=0 ?"positive":"nagetive");
// }



// int main (){
// int n = 100000000;
// int addSum=0;
// for (int i=1 ; i<=n; i++)
// {
// if ((i%2)!=0)
// {
//   addSum=addSum+i;
// }
// }

// cout <<addSum;
// return 0;

// }
//  void factorial(int n){
// int sum ;
// int fac=n;
// for (int i=1; i<=(n-1);i++)
// {
//   sum = (n-i);
//   fac=fac*sum;

// }
// cout <<fac<<endl;
//  }
// int main (){

// factorial(12);

// return 0;
// }


// int main (){

//   int n =11;
//   bool isPrime = true;
// for (int i=2; i<=(n-1);i++){
 

// if (n%i==0){
//   isPrime=false;
//   break;
// }

// }

// cout<<isPrime<<endl;

//   return 0;

// }

///////////////////////////////////Pattern
// int main(){
// int n=10  ;
// for (int i =1; i<=n;i++){
// for(int j=1;j<=i;j++){
// cout<<"*"<<" ";
// }
// cout <<endl;
// }
//   return 0;
// }

// 


// int  main (){
// int n=4;
// char ch ='A';
// for (int i =0;i<n;i++){
//   for(int j=0;j<n;j++){
//     cout<<ch<<" ";
//     ch++;
//   }
//   cout <<endl;
// }
//   return 0;

// }

// 

// int main (){


// int n=4;
// for (int i=1;i<=n;i++)
// {
//   int j=1;
//   for(j;j<=i;j++){
//     cout <<i;
//   }
//   cout <<endl;
// }
// return 0;
// }

// int main (){

// int n=3;
// char ch='A';

// for (int i=1;i<=n;i++){
// for(int j=1;j<=i;j++ ){
// cout <<ch<<" ";
// }
// ch++;
// cout <<endl;
// }


//   return 0;

// }


// int main (){

// int n =4;
// for (int i =1;i<=n;i++){

// for(int j=i;j>=1;j--){

// cout <<j<<" ";
// }
// cout<<endl;
// }

//   return 0;
// }

// int main (){
//   int n=4;
//   int num=1;

// for (int i=0;i<=n;i++){
// for(int j=1; j<i+1;j++){

//   cout<<num;
//   num++;
 
// }
// cout <<endl;
// }
//   return 0;
// }
// int main (){

// int n=4;
// char ch ='A';
// for(int i=0;i<=n;i++){
//   for(int j=1;j<i+1;j++){
//     cout <<ch;
//     ch++;
//   }
//   cout <<endl;
// }

//   return 0;

// }
// int main(){
// int n=4;
 
// for(int i=0;i<n;i++){
//   for(int k=0;k<=i;k++){
//       cout<<" ";
//     }
//   for(int j=n-i;j>=1;j--){
//     cout <<""<<i+1;
//   }
//   cout <<endl;
// }
//   return 0;

// }

// int main(){
// int n=200;
// for(int i=0;i<n;i++){
// for(int j=n-(i+1);j>=1;j--){
// cout<<" ";}
// for(int k=0;k<=i;k++){
// cout<<k+1;}
// for(int l=i;l>=1;l--){
// cout<<l;}
// cout<<endl;}
// return 0;}

//top
// int main(){
// int n=4;
// for(int i=0;i<n;i++){
// for(int j=n-(i+1);j>=1;j--){
// cout<<" ";}
// cout<<"*";
// if(i!=0){
// for(int j=0;j<2*i-1;j++){
// cout<<" ";}
// cout<<"*";}
// cout<<endl;}
// //bottom
// for(int i=0;i<n-1;i++){
// for(int j=0;j<i+1;j++){
// cout<<" ";}
// cout<<"*";
// if(i !=n-2){
// for(int j=0;j<2*(n-i)-5;j++){
// cout<<" ";}
// cout<<"*";}
// cout<<endl;}
// return 0;}


// void sumN (int n){
//     int sum=0;
// for(int i=1;i<=n;i++){
//   sum=sum+i;
// }
// cout<<sum;
// }
// int main (){
// sumN(5);
//     return 0;
// }

// void fac(int  n){
// int mul =1;
// for(int i=1;i<=n;i++){

//     mul=mul*i;
// }
// cout<<mul;
// }

// int main(){
// fac(4);
// return 0;
// }
// int sumOfDigits(int num){

// int digSum=0;
// while(num>0){
// int lastDig=num%10;
// num=num/10;
// digSum+=lastDig;
// }
// return digSum;
// }
// int main(){
// cout <<"Sum = "<<sumOfDigits(99999999)<<endl;
//     return 0;
// }

// void Comb(int n,int r){
// int facN=1;
// int facR=1;
// int facRN=1;
// int combi;
// if(n>r){
//     for(int i=1;i<=n;i++)
// {
//    facN=facN*i; 
// }
// for(int i=1;i<=r;i++)
// {
//    facR=facR*i; 
// }
// for(int i=1;i<=(n-r);i++)
// {
//    facRN=facRN*i; 
// }
//  combi=(facN)/((facR)*(facRN));
//  cout<<combi<<endl;
// }
// else{

//     cout<<"Error:r con't be greater then n"<<endl;
// }

// }
// int main (){
// Comb(8,10);
//     return 0; 
// }
///////////////////////////////////////////purmu and combi
//  int factorial (int num){
// int fac=1;
// for(int i=1;i<=num;i++)
// {fac=fac*i;}
// return fac;}

// int combina(int n,int r){
// int fact_n =factorial(n);
// int fac_r =factorial(r);
// int fac_nr =factorial((n-r));
// int combi =(fact_n)/((fac_r)*(fac_nr));
// return combi;}

// int main(){
// cout<<combina(8,2);
// return 0;}



// void fibina(int n){
// int num =0;
// int se =0;

// for(int i=0;i<=n;i++){

// se =se+num;
// num=num+i;
// cout <<se<<endl;
// }



// }

// int main(){
// fibina(3);


//     return 0;
// }


//////////////////////////////////////////decimal to binary;
// int binaryToDeci(int decNum){
// int ans = 0,pow = 1;
// while (decNum>0){

//     int rem =decNum%2;
//     decNum =decNum/2;
//     ans+=(rem*pow);
//     pow*=10;
// }
// return ans;

// }
// int main(){
// int decNum =26;
// cout <<binaryToDeci(decNum);

//     return 0;

// }

////////////////////////////////////////////binary to decimal;

// int binaryToDecimal(int binum){
// int ans=0,pow=1;
// while (binum>0){

//     int rem =binum%10;
//     ans += rem*pow;
//     binum /= 10;
//     pow *= 2;
// }
// return ans;
// }
// int main (){
// cout<<binaryToDecimal(10110)<<endl; 
//     return 0;
// }


   
// int main (){

// for (int i=1;i<=222;i++){
//     double e = pow((1+(1/i)),i);
//     cout <<e<<endl;
// }
//     return 0;



// }
// //
// int main (){
//     int n=5;
// for (int i=1;i<=n;i++){
//     for (int j=1;j<=n;j++){
//         cout <<j;
//     }
//     cout<<endl<<endl;
// }
//     return 0;

// }
