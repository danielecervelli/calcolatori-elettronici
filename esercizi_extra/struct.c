struct rgb_color
{
    short red;
    short green;
    short blue;
};

struct rgb_color c1 = {130, 45, 90};

typedef struct
{
    short red;
    short green;
    short blue;
} rgb_color;

rgb_color c1 = {130, 45, 90};

struct rgb_color
{
    short red;
    short green;
    short blue;
};

typedef struct rgb_color COLOR;
COLOR c1 = {130, 45, 90};
