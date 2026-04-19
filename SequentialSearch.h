//SequentialSearch.h

# ifndef SEQUENTIALSEARCH_H
# define SEQUENTIALSEARCH_H

class SequentialSearch {
  private:
    int array[];
    int targetLocation;

  public:
    SequentialSearch(); //constructor

    int search();
    void display();
};

# endif
