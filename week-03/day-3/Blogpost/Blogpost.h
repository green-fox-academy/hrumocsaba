#ifndef BLOGPOST_BLOGPOST_H
#define BLOGPOST_BLOGPOST_H

#include <string>
#include <vector>
using namespace std;

class BlogPost {
    public:
    void john();
    void tim();
    void will();

    private:
    vector<string> _authorname={"John Doe,", "Tim Urban","William Turton"};
    vector<string> _title={"Lorem Ipsum","Wait but why","One Engineer Is Trying to Get IBM to Reckon With Trump"};
    vector<string> _text={"Lorem ipsum dolor sit amet.","A popular long-form, stick-figure-illustrated blog about almost everything.","Daniel Hanley, a cybersecurity engineer at IBM, doesn’t want to be the center of attention. When I asked to take his picture outside one of IBM’s New York City offices, he told me that he wasn’t really into the whole organizer profile thing."};
    vector<string> _publicationDate={"2000.05.04.","2010.10.10.","2017.03.28"};

};


#endif //BLOGPOST_BLOGPOST_H
