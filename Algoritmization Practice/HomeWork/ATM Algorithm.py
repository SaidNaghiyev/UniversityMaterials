while True:
    print("Welcome to the Bank!");
    amount = int(input("Enter cahs here: "));
    if(amount%10 != 0):
        print("ERROR! Enter valid cash!");
    else:
        if(amount<10 or amount>200):
            print("ERROR! Enter valid cash! 10<x<200");
        else:
            notes20 = amount // 20;
            notes10 = (amount%20) // 10;
            print("Collect your money: ");
            print("20$ banknotes: ", notes20);
            print("10$ banknotes: ", notes10);
