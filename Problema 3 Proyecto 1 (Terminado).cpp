#include <iostream>

using namespace std;

int main()
{
int amount;
int residualHundred;
int hundredBills;


cout<<"Bienvenido a nuestro Sistema Bancario "<<endl;
cout<<"Ingrese el monto que sea Retirar:";cin>>amount;



if(amount<=99&&amount>89){
    cout<<"Billetes de 50$:1"<<endl;
    cout<<"Billetes de 20$:2"<<endl;

    if((amount-90)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-95<<endl;
        
    }
    if((amount-90)<=4){
        cout<<"Billetes de 1$:"<<(amount-90)<<endl;
    }
    
    
}


if(amount<=89&&amount>79){
    cout<<"Billetes de 50$:1"<<endl;
    cout<<"Billetes de 20$:1"<<endl;
    cout<<"Billetes de 10$:1"<<endl;
    
    if((amount-80)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-85<<endl;
        
    }
    if((amount-80)<=4){
        cout<<"Billetes de 1$:"<<(amount-80)<<endl;
    }
    
    
}

if(amount<=79&&amount>69){
    
    cout<<"Billete de 50$:1"<<endl;
    cout<<"Billete de 20$:1"<<endl;
    
    if((amount-70)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-75<<endl;
        
    }
    if((amount-70)<=4){
        cout<<"Billetes de 1$:"<<(amount-70)<<endl;
    }
}    
    

if(amount<=69&&amount>59){
    
    cout<<"Billetes de 50$:1"<<endl;
    cout<<"Billetes de 10$:1"<<endl;
    
    if((amount-60)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-65;
        
    }
    if((amount-60)<=4){
        cout<<"Billetes de 1$:"<<(amount-60)<<endl;
    
    }
    
    
    
}

if(amount<=59&&amount>49){
    cout<<"Billetes de 50$:1"<<endl;
    
    if((amount-50)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-55;
        
    }
    if((amount-50)<=4){
        cout<<"Billetes de 1$:"<<(amount-50);
    
    }
    
}

if(amount<=49&&amount>39){
    
    cout<<"Billetes de 20$:2"<<endl;
    
    if((amount-40)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-45<<endl;
        
    }
    if((amount-40)<=4){
        cout<<"Billetes de 1$:"<<(amount-40);
    
    }
}

if(amount<=39&&amount>29){
    cout<<"Billetes de 10$:1"<<endl;
    cout<<"Billetes de 20$:1"<<endl;
    
    if((amount-30)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-35<<endl;
        
        
    }
    if((amount-30)<=4){
        cout<<"Billetes de 1$:"<<(amount-30);
    
    }
}    

if(amount<=29&&amount>19){
    cout<<"Billetes de 20$:1"<<endl;
    if((amount-20)>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-25<<endl;

        
    }
    if((amount-20)<=4){
        cout<<"Billetes de 1$:"<<(amount-20);
    
    }
}

if(amount<=19&&amount>9){
    cout<<"Billetes de 10$:1"<<endl;
    
    if(amount-10>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<amount-15<<endl;
    }    
    
    
    if((amount-10)<=4){
        cout<<"Billetes de 1$:"<<((amount-10))<<endl;
            
    }
    
        
    
    

    
}
    
if(amount<=9){
    if(amount>=5){
        cout<<"Billetes de 5$:1"<<endl;
        if((amount-5)>=0){
            cout<<"Billetes de 1$:"<<amount-5<<endl;
            
        }
        
    }
    if(amount<=4){
        cout<<"Billetes de 1$:"<<amount<<endl;
    }
    
    
}    

if(amount>100){
    
    hundredBills=amount/100;
    cout<<"Billetes de 100$:"<<hundredBills<<endl;
    residualHundred=amount%100;
    
    if(residualHundred<=99&&residualHundred>89){
        
        
        cout<<"Billetes de 50$:1"<<endl;
        cout<<"Billetes de 20$:2"<<endl;

    
        if((residualHundred-90)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<residualHundred-95<<endl;
        
        }
         if((residualHundred-90)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-90)<<endl;
        }
    
    
    }


    if(residualHundred<=89&&residualHundred>79){
        
        cout<<"Billetes de 50$:1"<<endl;
        cout<<"Billetes de 20$:1"<<endl;
        cout<<"Billetes de 10$:1"<<endl;
    
        if((residualHundred-80)>=5){
            
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<residualHundred-85<<endl;
        
        }
        if((residualHundred-80)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-80)<<endl;
        }
    
    
    }

    if(residualHundred<=79&&residualHundred>69){
        
    
        cout<<"Billete de 50$:1"<<endl;
        cout<<"Billete de 20$:2"<<endl;
    
        if((residualHundred-70)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<(residualHundred-75)<<endl;
        
        }
        if((residualHundred-70)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-70)<<endl;
        }
    }    
    
 
    if(residualHundred<=69&&residualHundred>59){
        
    
        cout<<"Billetes de 50$:1"<<endl;
        cout<<"Billetes de 10$:1"<<endl;
    
        if((residualHundred-60)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<(residualHundred-65)<<endl;
        
        }
        if((residualHundred-60)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-60)<<endl;
    
        }
    }

    if(residualHundred<=59&&residualHundred>49){
        
        cout<<"Billetes de 50$:1"<<endl;
    
        if((residualHundred-50)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<residualHundred-55;
        
        }
        if((residualHundred-50)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-50);
    
        }
    
    }

    if(residualHundred<=49&&residualHundred>39){
        
        cout<<"Billetes de 20$:2"<<endl;
    
        if((residualHundred-40)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<residualHundred-45<<endl;
        
        }
        if((residualHundred-40)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-40);
    
        }
    }

    if(residualHundred<=39&&residualHundred>29){
        
        cout<<"Billetes de 10$:1"<<endl;
        cout<<"Billetes de 20$:1"<<endl;
    
        if((residualHundred-30)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<residualHundred-35<<endl;
        }
        if((residualHundred-30)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-30);
    
        }
    }    

    if(residualHundred<=29&&residualHundred>19){
        
        cout<<"Billetes de 20$:1"<<endl;
        if((residualHundred-20)>=5){
            
            cout<<"Billetes de 5$:1"<<endl;
            cout<<"Billetes de 1$:"<<residualHundred-25<<endl;

        
        }
        if((residualHundred-20)<=4){
            cout<<"Billetes de 1$:"<<(residualHundred-20);
      
         }
    }

    if(residualHundred<=19&&residualHundred>9){
    cout<<"Billetes de 10$:1"<<endl;
    
    if(residualHundred-10>=5){
        cout<<"Billetes de 5$:1"<<endl;
        cout<<"Billetes de 1$:"<<residualHundred-15<<endl;
    }    
    
    
    if((residualHundred-10)<=4){
        cout<<"Billetes de 1$:"<<((residualHundred-10))<<endl;
            
    }
    
        
    
    

    
}
    
    if(residualHundred<=9){
    if(residualHundred>=5){
        cout<<"Billetes de 5$:1"<<endl;
        if((residualHundred-5)>=0){
            cout<<"Billetes de 1$:"<<residualHundred-5<<endl;
            
        }
        
    }
    if(residualHundred<=4){
        cout<<"Billetes de 1$:"<<residualHundred<<endl;
    }
    
    
}
    
    
}

if(amount==100){
    cout<<"Billetes de 100$:1"<<endl;
    
}
    return 0;
}

