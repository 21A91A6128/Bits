class Bank_Account:
    def _init_(self, account_holder, account_number, initial_balance=0):
        self.account_holder = account_holder
        self.account_number = account_number
        self.balance = initial_balance

    def deposit(self, amount):
        if amount > 0:
            self.balance += amount
            print(f"Deposit of Rupees {amount}  is successful. New balance: {self.balance}/-")
        else:
            print("Invalid deposit amount. Please deposit a positive amount.")

    def withdraw(self, amount):
        if amount > 0:
            if amount <= self.balance:
                self.balance -= amount
                print(f"Withdrawal of Rupees {amount}  is successful. New balance: {self.balance}/-")
            else:
                print("Insufficient funds. Withdrawal unsuccessful.")
        else:
            print("Invalid withdrawal amount. Please withdraw a positive amount.")

    def display_balance(self):
        print(f"Current balance for account {self.account_number}: {self.balance}/-")
bank=new Bank_Account('Jay',1234,10000)
bank.display_balance()
bank.deposit(5000)
bank.withdraw(2000)
bank.display_balance()
