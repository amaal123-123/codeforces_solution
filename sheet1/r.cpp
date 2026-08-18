int main() {
     int N;
 
     if (!(std::cin >> N)) {
        return 1; // إنهاء البرنامج في حال فشل القراءة
    }
 
     const int DAYS_IN_YEAR = 365;
    const int DAYS_IN_MONTH = 30;
 
     int years = N / DAYS_IN_YEAR;
     int remaining_days = N % DAYS_IN_YEAR;
 
     int months = remaining_days / DAYS_IN_MONTH;
 
     int days = remaining_days % DAYS_IN_MONTH;
 
     std::cout << years << " years" << std::endl;
    std::cout << months << " months" << std::endl;
    std::cout << days << " days" << std::endl;
 
    return 0;
}
