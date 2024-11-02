#ifndef COUNTER_H
#define COUNTER_H


class Counter
{
    public:
        Counter();
        Counter(int v);
        void setIncrementStep(int step_val);
        int getCount() const;
        void resetCount(int step);
        void increment();
        Counter operator +(const Counter &obj) const;
    protected:
        bool operator >(const Counter &obj) const;
        bool operator <(const Counter &obj) const;
        bool operator >=(const Counter &obj) const;
        bool operator <=(const Counter &obj) const;
        bool operator ==(const Counter &obj) const;
        bool operator !=(const Counter &obj) const;
        Counter operator +=(const Counter &obj);
        Counter operator ++() ;
        Counter operator ++(int) ;

    private:
        int count;
        int increment_step;
};

#endif // COUNTER_H
