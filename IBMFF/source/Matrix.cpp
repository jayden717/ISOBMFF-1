/*******************************************************************************
 * The MIT License (MIT)
 * 
 * Copyright (c) 2017 Jean-David Gadina - www.xs-labs.com / www.imazing.com
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/*!
 * @file        Matrix.hpp
 * @copyright   (c) 2017, Jean-David Gadina - www.xs-labs.com / www.imazing.com
 */

#include <IBMFF/Matrix.hpp>

template<>
class XS::PIMPL::Object< IBMFF::Matrix >::IMPL
{
    public:
        
        IMPL( void );
        IMPL( uint32_t a, uint32_t b, uint32_t u, uint32_t c, uint32_t d, uint32_t v, uint32_t x, uint32_t y, uint32_t w );
        IMPL( const IMPL & o );
        ~IMPL( void );
        
        uint32_t _a;
        uint32_t _b;
        uint32_t _u;
        uint32_t _c;
        uint32_t _d;
        uint32_t _v;
        uint32_t _x;
        uint32_t _y;
        uint32_t _w;
};

#define XS_PIMPL_CLASS IBMFF::Matrix
#include <XS/PIMPL/Object-IMPL.hpp>

namespace IBMFF
{
    Matrix::Matrix( void ):
        XS::PIMPL::Object< Matrix >()
    {}
    
    Matrix::Matrix( uint32_t a, uint32_t b, uint32_t u, uint32_t c, uint32_t d, uint32_t v, uint32_t x, uint32_t y, uint32_t w ):
        XS::PIMPL::Object< Matrix >( a, b, u, c, d, v, x, y, w )
    {}
    
    uint32_t Matrix::GetA( void ) const
    {
        return this->impl->_a;
    }
    
    uint32_t Matrix::GetB( void ) const
    {
        return this->impl->_b;
    }
    
    uint32_t Matrix::GetU( void ) const
    {
        return this->impl->_u;
    }
    
    uint32_t Matrix::GetC( void ) const
    {
        return this->impl->_c;
    }
    
    uint32_t Matrix::GetD( void ) const
    {
        return this->impl->_d;
    }
    
    uint32_t Matrix::GetV( void ) const
    {
        return this->impl->_v;
    }
    
    uint32_t Matrix::GetX( void ) const
    {
        return this->impl->_x;
    }
    
    uint32_t Matrix::GetY( void ) const
    {
        return this->impl->_y;
    }
    
    uint32_t Matrix::GetW( void ) const
    {
        return this->impl->_w;
    }
    
    void Matrix::SetA( uint32_t value )
    {
        this->impl->_a = value;
    }
    
    void Matrix::SetB( uint32_t value )
    {
        this->impl->_b = value;
    }
    
    void Matrix::SetU( uint32_t value )
    {
        this->impl->_u = value;
    }
    
    void Matrix::SetC( uint32_t value )
    {
        this->impl->_c = value;
    }
    
    void Matrix::SetD( uint32_t value )
    {
        this->impl->_d = value;
    }
    
    void Matrix::SetV( uint32_t value )
    {
        this->impl->_v = value;
    }
    
    void Matrix::SetX( uint32_t value )
    {
        this->impl->_x = value;
    }
    
    void Matrix::SetY( uint32_t value )
    {
        this->impl->_y = value;
    }
    
    void Matrix::SetW( uint32_t value )
    {
        this->impl->_w = value;
    }
    
    std::ostream & operator << ( std::ostream & os, const Matrix & matrix )
    {
        os << "{ a = " << matrix.GetA()
           << ", b = " << matrix.GetB()
           << ", u = " << matrix.GetU()
           << ", c = " << matrix.GetC()
           << ", d = " << matrix.GetD()
           << ", v = " << matrix.GetV()
           << ", x = " << matrix.GetX()
           << ", y = " << matrix.GetY()
           << ", w = " << matrix.GetW()
           << " }";
       
        return os;
    }
}

XS::PIMPL::Object< IBMFF::Matrix >::IMPL::IMPL( void ):
    IMPL( 0, 0, 0, 0, 0, 0, 0, 0, 0 )
{}

XS::PIMPL::Object< IBMFF::Matrix >::IMPL::IMPL( uint32_t a, uint32_t b, uint32_t u, uint32_t c, uint32_t d, uint32_t v, uint32_t x, uint32_t y, uint32_t w ):
    _a( a ),
    _b( b ),
    _u( u ),
    _c( c ),
    _d( d ),
    _v( v ),
    _x( x ),
    _y( y ),
    _w( w )
{}

XS::PIMPL::Object< IBMFF::Matrix >::IMPL::IMPL( const IMPL & o ):
    _a( o._a ),
    _b( o._b ),
    _u( o._u ),
    _c( o._c ),
    _d( o._d ),
    _v( o._v ),
    _x( o._x ),
    _y( o._y ),
    _w( o._w )
{}

XS::PIMPL::Object< IBMFF::Matrix >::IMPL::~IMPL( void )
{}

