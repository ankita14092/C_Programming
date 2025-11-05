class Logic
{
    void checkLeapYear(int year)
    {
        if(year % 4 == 0 && year % 100 != 0)
        {
            System.out.println("It is leap year");
        }
        else
        {
            System.out.println("It is not leap year");
        }

    }

}

class program_1
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.checkLeapYear(2024);
        
    }
}