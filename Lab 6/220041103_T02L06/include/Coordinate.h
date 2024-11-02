#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
    public:
        Coordinate();
        Coordinate(float f1, float f2);
        ~Coordinate();
        void display();
        float operator -(Coordinate c);
        float getDistance()const;
        void move_x(float val);
        void move_y(float val);
        void move(float x_val, float y_val);
        void setx(int v);
        void sety(int v);
        bool operator >(const  Coordinate &obj) const;
        bool operator <(const  Coordinate &obj) const;
        bool operator >=(const  Coordinate &obj) const;
        bool operator <=(const  Coordinate &obj) const;
        bool operator ==(const  Coordinate &obj) const;
        bool operator !=(const  Coordinate &obj) const;

    protected:

    private:
        float abscissa;
        float ordinate;

};

#endif // COORDINATE_H
