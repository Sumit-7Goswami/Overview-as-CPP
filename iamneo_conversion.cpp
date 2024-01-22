/*

In a magical land, a young wizard named Alex discovers an ancient book that holds the power of words. Fascinated by its abilities, Alex decides to build a WordCounter class capable of counting and displaying the occurrences of magical words.



Using their newfound knowledge of basic to class type conversion, Alex transforms a simple word counter program into a powerful tool that can recognize and tally magical words spoken throughout the kingdom.



With the WordCounter class, Alex embarks on an exciting quest to unlock the secrets hidden within the mystical language of the land, bringing harmony and understanding to the realm.



Write a program to accomplish the above-given scenario.

Input format :
The input consists of a single line of input, representing a sentence containing words separated by spaces.

Output format :
The first line of the output consists of the total number of words.

The next line consists of a series of characters that represent the count of each word.

The next n lines will be the number of words and its count.



Refer to the sample output for further formatting specifications.

Code constraints :
The program supports a maximum of 100 unique words in the input sentence.
The program does not handle punctuation or special characters within words.
Sample test cases :
Input 1 :
Either me or you going to school because we are going to a movie.
Output 1 :
Total words: 12
Word Counts:
Either: 1
me: 1
or: 1
you: 1
going: 2
to: 2
school: 1
because: 1
we: 1
are: 1
a: 1
movie.: 1


*/

/*
#include <iostream>
using namespace std ;

#include <string>

class WordCounter {
private:
    string sentence;
    int totalWords;
    string words[100];
    int counts[100];

public:
    WordCounter(const string& s) : sentence(s), totalWords(0) {
        countWords();
    }

    void countWords() {
        string word;
        int wordIndex;
        for (char c : sentence) 
        {
            if (c == ' ') {
                if (!word.empty()) {
                    wordIndex = findWordIndex(word);
                    if (wordIndex == -1) {
                        words[totalWords] = word;
                        counts[totalWords] = 1;
                        totalWords++;
                    } else {
                        counts[wordIndex]++;
                    }
                    word.clear();
                }
            } else {
                word += c;
            }
        }

        if (!word.empty()) {
            wordIndex = findWordIndex(word);
            if (wordIndex == -1) {
                words[totalWords] = word;
                counts[totalWords] = 1;
                totalWords++;
            } else {
                counts[wordIndex]++;
            }
        }
    }

    operator string() {
        string result = "Total words: " + to_string(totalWords) + "\nWord Counts:\n";
        for (int i = 0; i < totalWords; i++) {
            result += words[i] + ": " + to_string(counts[i]) + "\n";
        }
        return result;
    }

private:
    int findWordIndex(const string& word) {
        for (int i = 0; i < totalWords; i++) {
            if (words[i] == word) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    string sentence;
    getline(cin, sentence);

    WordCounter wordCounter(sentence);
    string result = wordCounter;

    cout << result;

    return 0;
}

*/





  
// #include <iostream>

// class Population {
// private:
//     int currentPopulation;

// public:
//     Population(int population) : currentPopulation(population) {}

//     // Custom power calculation function
//     double customPow(double base, double exponent) const {
//         double result = 1.0;
//         for (int i = 0; i < exponent; i++) {
//             result *= base;
//         }
//         return result;
//     }

//     int projectPopulation(double years) const {
//         double growthRate = 0.02; // 2% annual growth rate
//         double projectedPopulation = currentPopulation * customPow(1 + growthRate, years);
//         return projectedPopulation;
//     }
// };

// int main() {
//     int currentPopulation;
//     double years;

//     // Input current population and number of years
//     std::cin >> currentPopulation >> years;

//     // Create a Population object with the current population
//     Population population(currentPopulation);

//     // Calculate and display the projected population
//     double projectedPopulation = population.projectPopulation(years);
//     std::cout << "Population after " << years << " years: " << projectedPopulation << std::endl;

//     return 0;
// }



/*

#include <bits/stdc++.h>
using namespace std ; 

class matrix{
  private : 
  int row , col ; 
  
  public : 
  
  matrix(int r , int c){
      row = r ; 
      col = c  ; 
  }
  
  void display(){
    //   cout << matrix ;
    int arr[row][col] ; 
      
      for(int i=0 ; i<row ; i++){
          for(int j=0 ; j<col ; j++)
          {
            cin >> arr[i][j] ; 
          }
      }
      
      for(int i=0 ; i<row ; i++)
      {
          for(int j=0 ; j<col ; j++)
          {
              cout << arr[i][j] <<" " ; 
          }
          cout << endl ; 
      }
  }
};

int main(){
    int r , c ;
    cin >> r >> c; 

    matrix obj(r , c) ; 
    obj.display() ; 
}
*/

/*

 #include <bits/stdc++.h>
using namespace std ;

class emp{
  public:
  
  int empld ;
  float salary ; 
  
  emp(int id , float s){
      empld = id ;
      salary = s ; 
  }
  
};

class empLevel : public emp{
    
    public : 
    
    empLevel(int id , float s) : emp(id,s){}
    
    int level(){
    if(salary < 100){
        return 2 ;
    }
    else{
        return 1 ;  
    }
}
  void display(){
    cout << "Employee ID: " << empld <<endl;
    cout<<fixed << "Salary: $"<<setprecision(2)<<salary <<endl ;  
    cout << "Level: "<<level() ; 
  }
    
};

int main()
{
    int id ;
    float s ;
    cin >> id  ;
    cin >> s ; 
    empLevel obj(id , s) ;
    
    obj.display() ; 
    
}
*/

#include <iostream>
#include <iomanip>

class Employee {
public:
    int empId;
    float salary;

    Employee(int id, float sal) : empId(id), salary(sal) {}
};

class empLevel : public Employee {
public:
    empLevel(int id, float sal) : Employee(id, sal) {}

    int categorizeLevel() {
        if (salary > 100) {
            return 1;
        } else {
            return 2;
        }
    }

    void displayInfo() {
        std::cout << "Employee ID: " << empId << std::endl;
        std::cout << "Salary: $" << std::fixed << std::setprecision(2) << salary << std::endl;
        std::cout << "Level: " << categorizeLevel() << std::endl;
    }
};

int main() {
    int empId;
    float salary;
    std::cin >> empId >> salary;

    empLevel employee(empId, salary);
    employee.displayInfo();

    return 0;
}
