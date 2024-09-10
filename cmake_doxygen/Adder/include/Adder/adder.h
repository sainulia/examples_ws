
/*!
     @file adder.h
*/

//! A math class.
class mymath {
    public:

    //! A member adding two arguments and returning an integer value.
    /*!
      \param a an integer argument.
      \param b an integer argument.
      \return the sum of a and b.
    */
    int add(int a, int b);

    //! A member adding two arguments and returning an float value.
    /*!
      \param a an float argument.
      \param b an float argument.
      \return the sum of a and b.
    */
    float add(float a, float b);

};


//! A member adding two arguments and returning an integer value.
/*!
    \param a an integer argument.
    \param b an integer argument.
    \return the sum of a and b.
*/
int add(int a, int b);
