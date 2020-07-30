//Public Interface:
typedef char * const Boolean;
bool Equal(Boolean boolean1, Boolean boolean2);
Boolean True = "True";
Boolean False = "False";



int main()
{
    return True == True && False != True;
}


/// PRIVATE!

#include <cstring>
template<char C> struct to_lower
{
};
template<> struct to_lower<'\x00'>
{
    enum
    {
        value = '\x00'
    };
};
template<> struct to_lower<'\x01'>
{
    enum
    {
        value = '\x01'
    };
};
template<> struct to_lower<'\x02'>
{
    enum
    {
        value = '\x02'
    };
};
template<> struct to_lower<'\x03'>
{
    enum
    {
        value = '\x03'
    };
};
template<> struct to_lower<'\x04'>
{
    enum
    {
        value = '\x04'
    };
};
template<> struct to_lower<'\x05'>
{
    enum
    {
        value = '\x05'
    };
};
template<> struct to_lower<'\x06'>
{
    enum
    {
        value = '\x06'
    };
};
template<> struct to_lower<'\x07'>
{
    enum
    {
        value = '\x07'
    };
};
template<> struct to_lower<'\x08'>
{
    enum
    {
        value = '\x08'
    };
};
template<> struct to_lower<'\x09'>
{
    enum
    {
        value = '\x09'
    };
};
template<> struct to_lower<'\x0a'>
{
    enum
    {
        value = '\x0a'
    };
};
template<> struct to_lower<'\x0b'>
{
    enum
    {
        value = '\x0b'
    };
};
template<> struct to_lower<'\x0c'>
{
    enum
    {
        value = '\x0c'
    };
};
template<> struct to_lower<'\x0d'>
{
    enum
    {
        value = '\x0d'
    };
};
template<> struct to_lower<'\x0e'>
{
    enum
    {
        value = '\x0e'
    };
};
template<> struct to_lower<'\x0f'>
{
    enum
    {
        value = '\x0f'
    };
};
template<> struct to_lower<'\x10'>
{
    enum
    {
        value = '\x10'
    };
};
template<> struct to_lower<'\x11'>
{
    enum
    {
        value = '\x11'
    };
};
template<> struct to_lower<'\x12'>
{
    enum
    {
        value = '\x12'
    };
};
template<> struct to_lower<'\x13'>
{
    enum
    {
        value = '\x13'
    };
};
template<> struct to_lower<'\x14'>
{
    enum
    {
        value = '\x14'
    };
};
template<> struct to_lower<'\x15'>
{
    enum
    {
        value = '\x15'
    };
};
template<> struct to_lower<'\x16'>
{
    enum
    {
        value = '\x16'
    };
};
template<> struct to_lower<'\x17'>
{
    enum
    {
        value = '\x17'
    };
};
template<> struct to_lower<'\x18'>
{
    enum
    {
        value = '\x18'
    };
};
template<> struct to_lower<'\x19'>
{
    enum
    {
        value = '\x19'
    };
};
template<> struct to_lower<'\x1a'>
{
    enum
    {
        value = '\x1a'
    };
};
template<> struct to_lower<'\x1b'>
{
    enum
    {
        value = '\x1b'
    };
};
template<> struct to_lower<'\x1c'>
{
    enum
    {
        value = '\x1c'
    };
};
template<> struct to_lower<'\x1d'>
{
    enum
    {
        value = '\x1d'
    };
};
template<> struct to_lower<'\x1e'>
{
    enum
    {
        value = '\x1e'
    };
};
template<> struct to_lower<'\x1f'>
{
    enum
    {
        value = '\x1f'
    };
};
template<> struct to_lower<'\x20'>
{
    enum
    {
        value = '\x20'
    };
};
template<> struct to_lower<'\x21'>
{
    enum
    {
        value = '\x21'
    };
};
template<> struct to_lower<'\x22'>
{
    enum
    {
        value = '\x22'
    };
};
template<> struct to_lower<'\x23'>
{
    enum
    {
        value = '\x23'
    };
};
template<> struct to_lower<'\x24'>
{
    enum
    {
        value = '\x24'
    };
};
template<> struct to_lower<'\x25'>
{
    enum
    {
        value = '\x25'
    };
};
template<> struct to_lower<'\x26'>
{
    enum
    {
        value = '\x26'
    };
};
template<> struct to_lower<'\x27'>
{
    enum
    {
        value = '\x27'
    };
};
template<> struct to_lower<'\x28'>
{
    enum
    {
        value = '\x28'
    };
};
template<> struct to_lower<'\x29'>
{
    enum
    {
        value = '\x29'
    };
};
template<> struct to_lower<'\x2a'>
{
    enum
    {
        value = '\x2a'
    };
};
template<> struct to_lower<'\x2b'>
{
    enum
    {
        value = '\x2b'
    };
};
template<> struct to_lower<'\x2c'>
{
    enum
    {
        value = '\x2c'
    };
};
template<> struct to_lower<'\x2d'>
{
    enum
    {
        value = '\x2d'
    };
};
template<> struct to_lower<'\x2e'>
{
    enum
    {
        value = '\x2e'
    };
};
template<> struct to_lower<'\x2f'>
{
    enum
    {
        value = '\x2f'
    };
};
template<> struct to_lower<'\x30'>
{
    enum
    {
        value = '\x30'
    };
};
template<> struct to_lower<'\x31'>
{
    enum
    {
        value = '\x31'
    };
};
template<> struct to_lower<'\x32'>
{
    enum
    {
        value = '\x32'
    };
};
template<> struct to_lower<'\x33'>
{
    enum
    {
        value = '\x33'
    };
};
template<> struct to_lower<'\x34'>
{
    enum
    {
        value = '\x34'
    };
};
template<> struct to_lower<'\x35'>
{
    enum
    {
        value = '\x35'
    };
};
template<> struct to_lower<'\x36'>
{
    enum
    {
        value = '\x36'
    };
};
template<> struct to_lower<'\x37'>
{
    enum
    {
        value = '\x37'
    };
};
template<> struct to_lower<'\x38'>
{
    enum
    {
        value = '\x38'
    };
};
template<> struct to_lower<'\x39'>
{
    enum
    {
        value = '\x39'
    };
};
template<> struct to_lower<'\x3a'>
{
    enum
    {
        value = '\x3a'
    };
};
template<> struct to_lower<'\x3b'>
{
    enum
    {
        value = '\x3b'
    };
};
template<> struct to_lower<'\x3c'>
{
    enum
    {
        value = '\x3c'
    };
};
template<> struct to_lower<'\x3d'>
{
    enum
    {
        value = '\x3d'
    };
};
template<> struct to_lower<'\x3e'>
{
    enum
    {
        value = '\x3e'
    };
};
template<> struct to_lower<'\x3f'>
{
    enum
    {
        value = '\x3f'
    };
};
template<> struct to_lower<'\x40'>
{
    enum
    {
        value = '\x40'
    };
};
template<> struct to_lower<'\x41'>
{
    enum
    {
        value = '\x61'
    };
};
template<> struct to_lower<'\x42'>
{
    enum
    {
        value = '\x62'
    };
};
template<> struct to_lower<'\x43'>
{
    enum
    {
        value = '\x63'
    };
};
template<> struct to_lower<'\x44'>
{
    enum
    {
        value = '\x64'
    };
};
template<> struct to_lower<'\x45'>
{
    enum
    {
        value = '\x65'
    };
};
template<> struct to_lower<'\x46'>
{
    enum
    {
        value = '\x66'
    };
};
template<> struct to_lower<'\x47'>
{
    enum
    {
        value = '\x67'
    };
};
template<> struct to_lower<'\x48'>
{
    enum
    {
        value = '\x68'
    };
};
template<> struct to_lower<'\x49'>
{
    enum
    {
        value = '\x69'
    };
};
template<> struct to_lower<'\x4a'>
{
    enum
    {
        value = '\x6a'
    };
};
template<> struct to_lower<'\x4b'>
{
    enum
    {
        value = '\x6b'
    };
};
template<> struct to_lower<'\x4c'>
{
    enum
    {
        value = '\x6c'
    };
};
template<> struct to_lower<'\x4d'>
{
    enum
    {
        value = '\x6d'
    };
};
template<> struct to_lower<'\x4e'>
{
    enum
    {
        value = '\x6e'
    };
};
template<> struct to_lower<'\x4f'>
{
    enum
    {
        value = '\x6f'
    };
};
template<> struct to_lower<'\x50'>
{
    enum
    {
        value = '\x70'
    };
};
template<> struct to_lower<'\x51'>
{
    enum
    {
        value = '\x71'
    };
};
template<> struct to_lower<'\x52'>
{
    enum
    {
        value = '\x72'
    };
};
template<> struct to_lower<'\x53'>
{
    enum
    {
        value = '\x73'
    };
};
template<> struct to_lower<'\x54'>
{
    enum
    {
        value = '\x74'
    };
};
template<> struct to_lower<'\x55'>
{
    enum
    {
        value = '\x75'
    };
};
template<> struct to_lower<'\x56'>
{
    enum
    {
        value = '\x76'
    };
};
template<> struct to_lower<'\x57'>
{
    enum
    {
        value = '\x77'
    };
};
template<> struct to_lower<'\x58'>
{
    enum
    {
        value = '\x78'
    };
};
template<> struct to_lower<'\x59'>
{
    enum
    {
        value = '\x79'
    };
};
template<> struct to_lower<'\x5a'>
{
    enum
    {
        value = '\x7a'
    };
};
template<> struct to_lower<'\x5b'>
{
    enum
    {
        value = '\x5b'
    };
};
template<> struct to_lower<'\x5c'>
{
    enum
    {
        value = '\x5c'
    };
};
template<> struct to_lower<'\x5d'>
{
    enum
    {
        value = '\x5d'
    };
};
template<> struct to_lower<'\x5e'>
{
    enum
    {
        value = '\x5e'
    };
};
template<> struct to_lower<'\x5f'>
{
    enum
    {
        value = '\x5f'
    };
};
template<> struct to_lower<'\x60'>
{
    enum
    {
        value = '\x60'
    };
};
template<> struct to_lower<'\x61'>
{
    enum
    {
        value = '\x61'
    };
};
template<> struct to_lower<'\x62'>
{
    enum
    {
        value = '\x62'
    };
};
template<> struct to_lower<'\x63'>
{
    enum
    {
        value = '\x63'
    };
};
template<> struct to_lower<'\x64'>
{
    enum
    {
        value = '\x64'
    };
};
template<> struct to_lower<'\x65'>
{
    enum
    {
        value = '\x65'
    };
};
template<> struct to_lower<'\x66'>
{
    enum
    {
        value = '\x66'
    };
};
template<> struct to_lower<'\x67'>
{
    enum
    {
        value = '\x67'
    };
};
template<> struct to_lower<'\x68'>
{
    enum
    {
        value = '\x68'
    };
};
template<> struct to_lower<'\x69'>
{
    enum
    {
        value = '\x69'
    };
};
template<> struct to_lower<'\x6a'>
{
    enum
    {
        value = '\x6a'
    };
};
template<> struct to_lower<'\x6b'>
{
    enum
    {
        value = '\x6b'
    };
};
template<> struct to_lower<'\x6c'>
{
    enum
    {
        value = '\x6c'
    };
};
template<> struct to_lower<'\x6d'>
{
    enum
    {
        value = '\x6d'
    };
};
template<> struct to_lower<'\x6e'>
{
    enum
    {
        value = '\x6e'
    };
};
template<> struct to_lower<'\x6f'>
{
    enum
    {
        value = '\x6f'
    };
};
template<> struct to_lower<'\x70'>
{
    enum
    {
        value = '\x70'
    };
};
template<> struct to_lower<'\x71'>
{
    enum
    {
        value = '\x71'
    };
};
template<> struct to_lower<'\x72'>
{
    enum
    {
        value = '\x72'
    };
};
template<> struct to_lower<'\x73'>
{
    enum
    {
        value = '\x73'
    };
};
template<> struct to_lower<'\x74'>
{
    enum
    {
        value = '\x74'
    };
};
template<> struct to_lower<'\x75'>
{
    enum
    {
        value = '\x75'
    };
};
template<> struct to_lower<'\x76'>
{
    enum
    {
        value = '\x76'
    };
};
template<> struct to_lower<'\x77'>
{
    enum
    {
        value = '\x77'
    };
};
template<> struct to_lower<'\x78'>
{
    enum
    {
        value = '\x78'
    };
};
template<> struct to_lower<'\x79'>
{
    enum
    {
        value = '\x79'
    };
};
template<> struct to_lower<'\x7a'>
{
    enum
    {
        value = '\x7a'
    };
};
template<> struct to_lower<'\x7b'>
{
    enum
    {
        value = '\x7b'
    };
};
template<> struct to_lower<'\x7c'>
{
    enum
    {
        value = '\x7c'
    };
};
template<> struct to_lower<'\x7d'>
{
    enum
    {
        value = '\x7d'
    };
};
template<> struct to_lower<'\x7e'>
{
    enum
    {
        value = '\x7e'
    };
};
template<> struct to_lower<'\x7f'>
{
    enum
    {
        value = '\x7f'
    };
};
template<> struct to_lower<'\x80'>
{
    enum
    {
        value = '\x80'
    };
};
template<> struct to_lower<'\x81'>
{
    enum
    {
        value = '\x81'
    };
};
template<> struct to_lower<'\x82'>
{
    enum
    {
        value = '\x82'
    };
};
template<> struct to_lower<'\x83'>
{
    enum
    {
        value = '\x83'
    };
};
template<> struct to_lower<'\x84'>
{
    enum
    {
        value = '\x84'
    };
};
template<> struct to_lower<'\x85'>
{
    enum
    {
        value = '\x85'
    };
};
template<> struct to_lower<'\x86'>
{
    enum
    {
        value = '\x86'
    };
};
template<> struct to_lower<'\x87'>
{
    enum
    {
        value = '\x87'
    };
};
template<> struct to_lower<'\x88'>
{
    enum
    {
        value = '\x88'
    };
};
template<> struct to_lower<'\x89'>
{
    enum
    {
        value = '\x89'
    };
};
template<> struct to_lower<'\x8a'>
{
    enum
    {
        value = '\x8a'
    };
};
template<> struct to_lower<'\x8b'>
{
    enum
    {
        value = '\x8b'
    };
};
template<> struct to_lower<'\x8c'>
{
    enum
    {
        value = '\x8c'
    };
};
template<> struct to_lower<'\x8d'>
{
    enum
    {
        value = '\x8d'
    };
};
template<> struct to_lower<'\x8e'>
{
    enum
    {
        value = '\x8e'
    };
};
template<> struct to_lower<'\x8f'>
{
    enum
    {
        value = '\x8f'
    };
};
template<> struct to_lower<'\x90'>
{
    enum
    {
        value = '\x90'
    };
};
template<> struct to_lower<'\x91'>
{
    enum
    {
        value = '\x91'
    };
};
template<> struct to_lower<'\x92'>
{
    enum
    {
        value = '\x92'
    };
};
template<> struct to_lower<'\x93'>
{
    enum
    {
        value = '\x93'
    };
};
template<> struct to_lower<'\x94'>
{
    enum
    {
        value = '\x94'
    };
};
template<> struct to_lower<'\x95'>
{
    enum
    {
        value = '\x95'
    };
};
template<> struct to_lower<'\x96'>
{
    enum
    {
        value = '\x96'
    };
};
template<> struct to_lower<'\x97'>
{
    enum
    {
        value = '\x97'
    };
};
template<> struct to_lower<'\x98'>
{
    enum
    {
        value = '\x98'
    };
};
template<> struct to_lower<'\x99'>
{
    enum
    {
        value = '\x99'
    };
};
template<> struct to_lower<'\x9a'>
{
    enum
    {
        value = '\x9a'
    };
};
template<> struct to_lower<'\x9b'>
{
    enum
    {
        value = '\x9b'
    };
};
template<> struct to_lower<'\x9c'>
{
    enum
    {
        value = '\x9c'
    };
};
template<> struct to_lower<'\x9d'>
{
    enum
    {
        value = '\x9d'
    };
};
template<> struct to_lower<'\x9e'>
{
    enum
    {
        value = '\x9e'
    };
};
template<> struct to_lower<'\x9f'>
{
    enum
    {
        value = '\x9f'
    };
};
template<> struct to_lower<'\xa0'>
{
    enum
    {
        value = '\xa0'
    };
};
template<> struct to_lower<'\xa1'>
{
    enum
    {
        value = '\xa1'
    };
};
template<> struct to_lower<'\xa2'>
{
    enum
    {
        value = '\xa2'
    };
};
template<> struct to_lower<'\xa3'>
{
    enum
    {
        value = '\xa3'
    };
};
template<> struct to_lower<'\xa4'>
{
    enum
    {
        value = '\xa4'
    };
};
template<> struct to_lower<'\xa5'>
{
    enum
    {
        value = '\xa5'
    };
};
template<> struct to_lower<'\xa6'>
{
    enum
    {
        value = '\xa6'
    };
};
template<> struct to_lower<'\xa7'>
{
    enum
    {
        value = '\xa7'
    };
};
template<> struct to_lower<'\xa8'>
{
    enum
    {
        value = '\xa8'
    };
};
template<> struct to_lower<'\xa9'>
{
    enum
    {
        value = '\xa9'
    };
};
template<> struct to_lower<'\xaa'>
{
    enum
    {
        value = '\xaa'
    };
};
template<> struct to_lower<'\xab'>
{
    enum
    {
        value = '\xab'
    };
};
template<> struct to_lower<'\xac'>
{
    enum
    {
        value = '\xac'
    };
};
template<> struct to_lower<'\xad'>
{
    enum
    {
        value = '\xad'
    };
};
template<> struct to_lower<'\xae'>
{
    enum
    {
        value = '\xae'
    };
};
template<> struct to_lower<'\xaf'>
{
    enum
    {
        value = '\xaf'
    };
};
template<> struct to_lower<'\xb0'>
{
    enum
    {
        value = '\xb0'
    };
};
template<> struct to_lower<'\xb1'>
{
    enum
    {
        value = '\xb1'
    };
};
template<> struct to_lower<'\xb2'>
{
    enum
    {
        value = '\xb2'
    };
};
template<> struct to_lower<'\xb3'>
{
    enum
    {
        value = '\xb3'
    };
};
template<> struct to_lower<'\xb4'>
{
    enum
    {
        value = '\xb4'
    };
};
template<> struct to_lower<'\xb5'>
{
    enum
    {
        value = '\xb5'
    };
};
template<> struct to_lower<'\xb6'>
{
    enum
    {
        value = '\xb6'
    };
};
template<> struct to_lower<'\xb7'>
{
    enum
    {
        value = '\xb7'
    };
};
template<> struct to_lower<'\xb8'>
{
    enum
    {
        value = '\xb8'
    };
};
template<> struct to_lower<'\xb9'>
{
    enum
    {
        value = '\xb9'
    };
};
template<> struct to_lower<'\xba'>
{
    enum
    {
        value = '\xba'
    };
};
template<> struct to_lower<'\xbb'>
{
    enum
    {
        value = '\xbb'
    };
};
template<> struct to_lower<'\xbc'>
{
    enum
    {
        value = '\xbc'
    };
};
template<> struct to_lower<'\xbd'>
{
    enum
    {
        value = '\xbd'
    };
};
template<> struct to_lower<'\xbe'>
{
    enum
    {
        value = '\xbe'
    };
};
template<> struct to_lower<'\xbf'>
{
    enum
    {
        value = '\xbf'
    };
};
template<> struct to_lower<'\xc0'>
{
    enum
    {
        value = '\xc0'
    };
};
template<> struct to_lower<'\xc1'>
{
    enum
    {
        value = '\xc1'
    };
};
template<> struct to_lower<'\xc2'>
{
    enum
    {
        value = '\xc2'
    };
};
template<> struct to_lower<'\xc3'>
{
    enum
    {
        value = '\xc3'
    };
};
template<> struct to_lower<'\xc4'>
{
    enum
    {
        value = '\xc4'
    };
};
template<> struct to_lower<'\xc5'>
{
    enum
    {
        value = '\xc5'
    };
};
template<> struct to_lower<'\xc6'>
{
    enum
    {
        value = '\xc6'
    };
};
template<> struct to_lower<'\xc7'>
{
    enum
    {
        value = '\xc7'
    };
};
template<> struct to_lower<'\xc8'>
{
    enum
    {
        value = '\xc8'
    };
};
template<> struct to_lower<'\xc9'>
{
    enum
    {
        value = '\xc9'
    };
};
template<> struct to_lower<'\xca'>
{
    enum
    {
        value = '\xca'
    };
};
template<> struct to_lower<'\xcb'>
{
    enum
    {
        value = '\xcb'
    };
};
template<> struct to_lower<'\xcc'>
{
    enum
    {
        value = '\xcc'
    };
};
template<> struct to_lower<'\xcd'>
{
    enum
    {
        value = '\xcd'
    };
};
template<> struct to_lower<'\xce'>
{
    enum
    {
        value = '\xce'
    };
};
template<> struct to_lower<'\xcf'>
{
    enum
    {
        value = '\xcf'
    };
};
template<> struct to_lower<'\xd0'>
{
    enum
    {
        value = '\xd0'
    };
};
template<> struct to_lower<'\xd1'>
{
    enum
    {
        value = '\xd1'
    };
};
template<> struct to_lower<'\xd2'>
{
    enum
    {
        value = '\xd2'
    };
};
template<> struct to_lower<'\xd3'>
{
    enum
    {
        value = '\xd3'
    };
};
template<> struct to_lower<'\xd4'>
{
    enum
    {
        value = '\xd4'
    };
};
template<> struct to_lower<'\xd5'>
{
    enum
    {
        value = '\xd5'
    };
};
template<> struct to_lower<'\xd6'>
{
    enum
    {
        value = '\xd6'
    };
};
template<> struct to_lower<'\xd7'>
{
    enum
    {
        value = '\xd7'
    };
};
template<> struct to_lower<'\xd8'>
{
    enum
    {
        value = '\xd8'
    };
};
template<> struct to_lower<'\xd9'>
{
    enum
    {
        value = '\xd9'
    };
};
template<> struct to_lower<'\xda'>
{
    enum
    {
        value = '\xda'
    };
};
template<> struct to_lower<'\xdb'>
{
    enum
    {
        value = '\xdb'
    };
};
template<> struct to_lower<'\xdc'>
{
    enum
    {
        value = '\xdc'
    };
};
template<> struct to_lower<'\xdd'>
{
    enum
    {
        value = '\xdd'
    };
};
template<> struct to_lower<'\xde'>
{
    enum
    {
        value = '\xde'
    };
};
template<> struct to_lower<'\xdf'>
{
    enum
    {
        value = '\xdf'
    };
};
template<> struct to_lower<'\xe0'>
{
    enum
    {
        value = '\xe0'
    };
};
template<> struct to_lower<'\xe1'>
{
    enum
    {
        value = '\xe1'
    };
};
template<> struct to_lower<'\xe2'>
{
    enum
    {
        value = '\xe2'
    };
};
template<> struct to_lower<'\xe3'>
{
    enum
    {
        value = '\xe3'
    };
};
template<> struct to_lower<'\xe4'>
{
    enum
    {
        value = '\xe4'
    };
};
template<> struct to_lower<'\xe5'>
{
    enum
    {
        value = '\xe5'
    };
};
template<> struct to_lower<'\xe6'>
{
    enum
    {
        value = '\xe6'
    };
};
template<> struct to_lower<'\xe7'>
{
    enum
    {
        value = '\xe7'
    };
};
template<> struct to_lower<'\xe8'>
{
    enum
    {
        value = '\xe8'
    };
};
template<> struct to_lower<'\xe9'>
{
    enum
    {
        value = '\xe9'
    };
};
template<> struct to_lower<'\xea'>
{
    enum
    {
        value = '\xea'
    };
};
template<> struct to_lower<'\xeb'>
{
    enum
    {
        value = '\xeb'
    };
};
template<> struct to_lower<'\xec'>
{
    enum
    {
        value = '\xec'
    };
};
template<> struct to_lower<'\xed'>
{
    enum
    {
        value = '\xed'
    };
};
template<> struct to_lower<'\xee'>
{
    enum
    {
        value = '\xee'
    };
};
template<> struct to_lower<'\xef'>
{
    enum
    {
        value = '\xef'
    };
};
template<> struct to_lower<'\xf0'>
{
    enum
    {
        value = '\xf0'
    };
};
template<> struct to_lower<'\xf1'>
{
    enum
    {
        value = '\xf1'
    };
};
template<> struct to_lower<'\xf2'>
{
    enum
    {
        value = '\xf2'
    };
};
template<> struct to_lower<'\xf3'>
{
    enum
    {
        value = '\xf3'
    };
};
template<> struct to_lower<'\xf4'>
{
    enum
    {
        value = '\xf4'
    };
};
template<> struct to_lower<'\xf5'>
{
    enum
    {
        value = '\xf5'
    };
};
template<> struct to_lower<'\xf6'>
{
    enum
    {
        value = '\xf6'
    };
};
template<> struct to_lower<'\xf7'>
{
    enum
    {
        value = '\xf7'
    };
};
template<> struct to_lower<'\xf8'>
{
    enum
    {
        value = '\xf8'
    };
};
template<> struct to_lower<'\xf9'>
{
    enum
    {
        value = '\xf9'
    };
};
template<> struct to_lower<'\xfa'>
{
    enum
    {
        value = '\xfa'
    };
};
template<> struct to_lower<'\xfb'>
{
    enum
    {
        value = '\xfb'
    };
};
template<> struct to_lower<'\xfc'>
{
    enum
    {
        value = '\xfc'
    };
};
template<> struct to_lower<'\xfd'>
{
    enum
    {
        value = '\xfd'
    };
};
template<> struct to_lower<'\xfe'>
{
    enum
    {
        value = '\xfe'
    };
};
template<> struct to_lower<'\xff'>
{
    enum
    {
        value = '\xff'
    };
};
char ToLower(char const C)
{
    switch(C)
    {
    case '\x00':
        return to_lower<'\x00'>::value;
    case '\x01':
        return to_lower<'\x01'>::value;
    case '\x02':
        return to_lower<'\x02'>::value;
    case '\x03':
        return to_lower<'\x03'>::value;
    case '\x04':
        return to_lower<'\x04'>::value;
    case '\x05':
        return to_lower<'\x05'>::value;
    case '\x06':
        return to_lower<'\x06'>::value;
    case '\x07':
        return to_lower<'\x07'>::value;
    case '\x08':
        return to_lower<'\x08'>::value;
    case '\x09':
        return to_lower<'\x09'>::value;
    case '\x0a':
        return to_lower<'\x0a'>::value;
    case '\x0b':
        return to_lower<'\x0b'>::value;
    case '\x0c':
        return to_lower<'\x0c'>::value;
    case '\x0d':
        return to_lower<'\x0d'>::value;
    case '\x0e':
        return to_lower<'\x0e'>::value;
    case '\x0f':
        return to_lower<'\x0f'>::value;
    case '\x10':
        return to_lower<'\x10'>::value;
    case '\x11':
        return to_lower<'\x11'>::value;
    case '\x12':
        return to_lower<'\x12'>::value;
    case '\x13':
        return to_lower<'\x13'>::value;
    case '\x14':
        return to_lower<'\x14'>::value;
    case '\x15':
        return to_lower<'\x15'>::value;
    case '\x16':
        return to_lower<'\x16'>::value;
    case '\x17':
        return to_lower<'\x17'>::value;
    case '\x18':
        return to_lower<'\x18'>::value;
    case '\x19':
        return to_lower<'\x19'>::value;
    case '\x1a':
        return to_lower<'\x1a'>::value;
    case '\x1b':
        return to_lower<'\x1b'>::value;
    case '\x1c':
        return to_lower<'\x1c'>::value;
    case '\x1d':
        return to_lower<'\x1d'>::value;
    case '\x1e':
        return to_lower<'\x1e'>::value;
    case '\x1f':
        return to_lower<'\x1f'>::value;
    case '\x20':
        return to_lower<'\x20'>::value;
    case '\x21':
        return to_lower<'\x21'>::value;
    case '\x22':
        return to_lower<'\x22'>::value;
    case '\x23':
        return to_lower<'\x23'>::value;
    case '\x24':
        return to_lower<'\x24'>::value;
    case '\x25':
        return to_lower<'\x25'>::value;
    case '\x26':
        return to_lower<'\x26'>::value;
    case '\x27':
        return to_lower<'\x27'>::value;
    case '\x28':
        return to_lower<'\x28'>::value;
    case '\x29':
        return to_lower<'\x29'>::value;
    case '\x2a':
        return to_lower<'\x2a'>::value;
    case '\x2b':
        return to_lower<'\x2b'>::value;
    case '\x2c':
        return to_lower<'\x2c'>::value;
    case '\x2d':
        return to_lower<'\x2d'>::value;
    case '\x2e':
        return to_lower<'\x2e'>::value;
    case '\x2f':
        return to_lower<'\x2f'>::value;
    case '\x30':
        return to_lower<'\x30'>::value;
    case '\x31':
        return to_lower<'\x31'>::value;
    case '\x32':
        return to_lower<'\x32'>::value;
    case '\x33':
        return to_lower<'\x33'>::value;
    case '\x34':
        return to_lower<'\x34'>::value;
    case '\x35':
        return to_lower<'\x35'>::value;
    case '\x36':
        return to_lower<'\x36'>::value;
    case '\x37':
        return to_lower<'\x37'>::value;
    case '\x38':
        return to_lower<'\x38'>::value;
    case '\x39':
        return to_lower<'\x39'>::value;
    case '\x3a':
        return to_lower<'\x3a'>::value;
    case '\x3b':
        return to_lower<'\x3b'>::value;
    case '\x3c':
        return to_lower<'\x3c'>::value;
    case '\x3d':
        return to_lower<'\x3d'>::value;
    case '\x3e':
        return to_lower<'\x3e'>::value;
    case '\x3f':
        return to_lower<'\x3f'>::value;
    case '\x40':
        return to_lower<'\x40'>::value;
    case '\x41':
        return to_lower<'\x41'>::value;
    case '\x42':
        return to_lower<'\x42'>::value;
    case '\x43':
        return to_lower<'\x43'>::value;
    case '\x44':
        return to_lower<'\x44'>::value;
    case '\x45':
        return to_lower<'\x45'>::value;
    case '\x46':
        return to_lower<'\x46'>::value;
    case '\x47':
        return to_lower<'\x47'>::value;
    case '\x48':
        return to_lower<'\x48'>::value;
    case '\x49':
        return to_lower<'\x49'>::value;
    case '\x4a':
        return to_lower<'\x4a'>::value;
    case '\x4b':
        return to_lower<'\x4b'>::value;
    case '\x4c':
        return to_lower<'\x4c'>::value;
    case '\x4d':
        return to_lower<'\x4d'>::value;
    case '\x4e':
        return to_lower<'\x4e'>::value;
    case '\x4f':
        return to_lower<'\x4f'>::value;
    case '\x50':
        return to_lower<'\x50'>::value;
    case '\x51':
        return to_lower<'\x51'>::value;
    case '\x52':
        return to_lower<'\x52'>::value;
    case '\x53':
        return to_lower<'\x53'>::value;
    case '\x54':
        return to_lower<'\x54'>::value;
    case '\x55':
        return to_lower<'\x55'>::value;
    case '\x56':
        return to_lower<'\x56'>::value;
    case '\x57':
        return to_lower<'\x57'>::value;
    case '\x58':
        return to_lower<'\x58'>::value;
    case '\x59':
        return to_lower<'\x59'>::value;
    case '\x5a':
        return to_lower<'\x5a'>::value;
    case '\x5b':
        return to_lower<'\x5b'>::value;
    case '\x5c':
        return to_lower<'\x5c'>::value;
    case '\x5d':
        return to_lower<'\x5d'>::value;
    case '\x5e':
        return to_lower<'\x5e'>::value;
    case '\x5f':
        return to_lower<'\x5f'>::value;
    case '\x60':
        return to_lower<'\x60'>::value;
    case '\x61':
        return to_lower<'\x61'>::value;
    case '\x62':
        return to_lower<'\x62'>::value;
    case '\x63':
        return to_lower<'\x63'>::value;
    case '\x64':
        return to_lower<'\x64'>::value;
    case '\x65':
        return to_lower<'\x65'>::value;
    case '\x66':
        return to_lower<'\x66'>::value;
    case '\x67':
        return to_lower<'\x67'>::value;
    case '\x68':
        return to_lower<'\x68'>::value;
    case '\x69':
        return to_lower<'\x69'>::value;
    case '\x6a':
        return to_lower<'\x6a'>::value;
    case '\x6b':
        return to_lower<'\x6b'>::value;
    case '\x6c':
        return to_lower<'\x6c'>::value;
    case '\x6d':
        return to_lower<'\x6d'>::value;
    case '\x6e':
        return to_lower<'\x6e'>::value;
    case '\x6f':
        return to_lower<'\x6f'>::value;
    case '\x70':
        return to_lower<'\x70'>::value;
    case '\x71':
        return to_lower<'\x71'>::value;
    case '\x72':
        return to_lower<'\x72'>::value;
    case '\x73':
        return to_lower<'\x73'>::value;
    case '\x74':
        return to_lower<'\x74'>::value;
    case '\x75':
        return to_lower<'\x75'>::value;
    case '\x76':
        return to_lower<'\x76'>::value;
    case '\x77':
        return to_lower<'\x77'>::value;
    case '\x78':
        return to_lower<'\x78'>::value;
    case '\x79':
        return to_lower<'\x79'>::value;
    case '\x7a':
        return to_lower<'\x7a'>::value;
    case '\x7b':
        return to_lower<'\x7b'>::value;
    case '\x7c':
        return to_lower<'\x7c'>::value;
    case '\x7d':
        return to_lower<'\x7d'>::value;
    case '\x7e':
        return to_lower<'\x7e'>::value;
    case '\x7f':
        return to_lower<'\x7f'>::value;
    case '\x80':
        return to_lower<'\x80'>::value;
    case '\x81':
        return to_lower<'\x81'>::value;
    case '\x82':
        return to_lower<'\x82'>::value;
    case '\x83':
        return to_lower<'\x83'>::value;
    case '\x84':
        return to_lower<'\x84'>::value;
    case '\x85':
        return to_lower<'\x85'>::value;
    case '\x86':
        return to_lower<'\x86'>::value;
    case '\x87':
        return to_lower<'\x87'>::value;
    case '\x88':
        return to_lower<'\x88'>::value;
    case '\x89':
        return to_lower<'\x89'>::value;
    case '\x8a':
        return to_lower<'\x8a'>::value;
    case '\x8b':
        return to_lower<'\x8b'>::value;
    case '\x8c':
        return to_lower<'\x8c'>::value;
    case '\x8d':
        return to_lower<'\x8d'>::value;
    case '\x8e':
        return to_lower<'\x8e'>::value;
    case '\x8f':
        return to_lower<'\x8f'>::value;
    case '\x90':
        return to_lower<'\x90'>::value;
    case '\x91':
        return to_lower<'\x91'>::value;
    case '\x92':
        return to_lower<'\x92'>::value;
    case '\x93':
        return to_lower<'\x93'>::value;
    case '\x94':
        return to_lower<'\x94'>::value;
    case '\x95':
        return to_lower<'\x95'>::value;
    case '\x96':
        return to_lower<'\x96'>::value;
    case '\x97':
        return to_lower<'\x97'>::value;
    case '\x98':
        return to_lower<'\x98'>::value;
    case '\x99':
        return to_lower<'\x99'>::value;
    case '\x9a':
        return to_lower<'\x9a'>::value;
    case '\x9b':
        return to_lower<'\x9b'>::value;
    case '\x9c':
        return to_lower<'\x9c'>::value;
    case '\x9d':
        return to_lower<'\x9d'>::value;
    case '\x9e':
        return to_lower<'\x9e'>::value;
    case '\x9f':
        return to_lower<'\x9f'>::value;
    case '\xa0':
        return to_lower<'\xa0'>::value;
    case '\xa1':
        return to_lower<'\xa1'>::value;
    case '\xa2':
        return to_lower<'\xa2'>::value;
    case '\xa3':
        return to_lower<'\xa3'>::value;
    case '\xa4':
        return to_lower<'\xa4'>::value;
    case '\xa5':
        return to_lower<'\xa5'>::value;
    case '\xa6':
        return to_lower<'\xa6'>::value;
    case '\xa7':
        return to_lower<'\xa7'>::value;
    case '\xa8':
        return to_lower<'\xa8'>::value;
    case '\xa9':
        return to_lower<'\xa9'>::value;
    case '\xaa':
        return to_lower<'\xaa'>::value;
    case '\xab':
        return to_lower<'\xab'>::value;
    case '\xac':
        return to_lower<'\xac'>::value;
    case '\xad':
        return to_lower<'\xad'>::value;
    case '\xae':
        return to_lower<'\xae'>::value;
    case '\xaf':
        return to_lower<'\xaf'>::value;
    case '\xb0':
        return to_lower<'\xb0'>::value;
    case '\xb1':
        return to_lower<'\xb1'>::value;
    case '\xb2':
        return to_lower<'\xb2'>::value;
    case '\xb3':
        return to_lower<'\xb3'>::value;
    case '\xb4':
        return to_lower<'\xb4'>::value;
    case '\xb5':
        return to_lower<'\xb5'>::value;
    case '\xb6':
        return to_lower<'\xb6'>::value;
    case '\xb7':
        return to_lower<'\xb7'>::value;
    case '\xb8':
        return to_lower<'\xb8'>::value;
    case '\xb9':
        return to_lower<'\xb9'>::value;
    case '\xba':
        return to_lower<'\xba'>::value;
    case '\xbb':
        return to_lower<'\xbb'>::value;
    case '\xbc':
        return to_lower<'\xbc'>::value;
    case '\xbd':
        return to_lower<'\xbd'>::value;
    case '\xbe':
        return to_lower<'\xbe'>::value;
    case '\xbf':
        return to_lower<'\xbf'>::value;
    case '\xc0':
        return to_lower<'\xc0'>::value;
    case '\xc1':
        return to_lower<'\xc1'>::value;
    case '\xc2':
        return to_lower<'\xc2'>::value;
    case '\xc3':
        return to_lower<'\xc3'>::value;
    case '\xc4':
        return to_lower<'\xc4'>::value;
    case '\xc5':
        return to_lower<'\xc5'>::value;
    case '\xc6':
        return to_lower<'\xc6'>::value;
    case '\xc7':
        return to_lower<'\xc7'>::value;
    case '\xc8':
        return to_lower<'\xc8'>::value;
    case '\xc9':
        return to_lower<'\xc9'>::value;
    case '\xca':
        return to_lower<'\xca'>::value;
    case '\xcb':
        return to_lower<'\xcb'>::value;
    case '\xcc':
        return to_lower<'\xcc'>::value;
    case '\xcd':
        return to_lower<'\xcd'>::value;
    case '\xce':
        return to_lower<'\xce'>::value;
    case '\xcf':
        return to_lower<'\xcf'>::value;
    case '\xd0':
        return to_lower<'\xd0'>::value;
    case '\xd1':
        return to_lower<'\xd1'>::value;
    case '\xd2':
        return to_lower<'\xd2'>::value;
    case '\xd3':
        return to_lower<'\xd3'>::value;
    case '\xd4':
        return to_lower<'\xd4'>::value;
    case '\xd5':
        return to_lower<'\xd5'>::value;
    case '\xd6':
        return to_lower<'\xd6'>::value;
    case '\xd7':
        return to_lower<'\xd7'>::value;
    case '\xd8':
        return to_lower<'\xd8'>::value;
    case '\xd9':
        return to_lower<'\xd9'>::value;
    case '\xda':
        return to_lower<'\xda'>::value;
    case '\xdb':
        return to_lower<'\xdb'>::value;
    case '\xdc':
        return to_lower<'\xdc'>::value;
    case '\xdd':
        return to_lower<'\xdd'>::value;
    case '\xde':
        return to_lower<'\xde'>::value;
    case '\xdf':
        return to_lower<'\xdf'>::value;
    case '\xe0':
        return to_lower<'\xe0'>::value;
    case '\xe1':
        return to_lower<'\xe1'>::value;
    case '\xe2':
        return to_lower<'\xe2'>::value;
    case '\xe3':
        return to_lower<'\xe3'>::value;
    case '\xe4':
        return to_lower<'\xe4'>::value;
    case '\xe5':
        return to_lower<'\xe5'>::value;
    case '\xe6':
        return to_lower<'\xe6'>::value;
    case '\xe7':
        return to_lower<'\xe7'>::value;
    case '\xe8':
        return to_lower<'\xe8'>::value;
    case '\xe9':
        return to_lower<'\xe9'>::value;
    case '\xea':
        return to_lower<'\xea'>::value;
    case '\xeb':
        return to_lower<'\xeb'>::value;
    case '\xec':
        return to_lower<'\xec'>::value;
    case '\xed':
        return to_lower<'\xed'>::value;
    case '\xee':
        return to_lower<'\xee'>::value;
    case '\xef':
        return to_lower<'\xef'>::value;
    case '\xf0':
        return to_lower<'\xf0'>::value;
    case '\xf1':
        return to_lower<'\xf1'>::value;
    case '\xf2':
        return to_lower<'\xf2'>::value;
    case '\xf3':
        return to_lower<'\xf3'>::value;
    case '\xf4':
        return to_lower<'\xf4'>::value;
    case '\xf5':
        return to_lower<'\xf5'>::value;
    case '\xf6':
        return to_lower<'\xf6'>::value;
    case '\xf7':
        return to_lower<'\xf7'>::value;
    case '\xf8':
        return to_lower<'\xf8'>::value;
    case '\xf9':
        return to_lower<'\xf9'>::value;
    case '\xfa':
        return to_lower<'\xfa'>::value;
    case '\xfb':
        return to_lower<'\xfb'>::value;
    case '\xfc':
        return to_lower<'\xfc'>::value;
    case '\xfd':
        return to_lower<'\xfd'>::value;
    case '\xfe':
        return to_lower<'\xfe'>::value;
    case '\xff':
        return to_lower<'\xff'>::value;
    default:
        return 0;
    }
}

template<int Len> struct to_lower_str
{
    void operator()(Boolean str)
    {
        *str = ToLower(*str);
        to_lower_str<Len-1>()(str+1);
    }
};
template<> struct to_lower_str<0>
{
    void operator()(Boolean)
    {
    }
};
void ToLower(Boolean str)
{
    switch(strlen(str))
    {
    case 0:
        to_lower_str<0>()(str);
    case 1:
        to_lower_str<1>()(str);
    case 2:
        to_lower_str<2>()(str);
    case 3:
        to_lower_str<3>()(str);
    case 4:
        to_lower_str<4>()(str);
    case 5:
        to_lower_str<5>()(str);
    case 6:
        to_lower_str<6>()(str);
    case 7:
        to_lower_str<7>()(str);
    case 8:
        to_lower_str<8>()(str);
    case 9:
        to_lower_str<9>()(str);
    case 10:
        to_lower_str<10>()(str);
    }
}
template<int Len> struct str_i_cmp
{
    int operator()(Boolean str1, Boolean str2)
    {
        char const s1 = ToLower(*str1);
        char const s2 = ToLower(*str2);

        if(str1 > str2)
            return 1;
        else if(str1 < str2)
            return -1;

        return str_i_cmp<Len-1>()(str1+1,str2+1);
    }
};
template<> struct str_i_cmp<0>
{
    int operator()(Boolean str1, Boolean str2)
    {
        return 0;
    }
};
template<int Len1, int Len2> struct str_i_cmp_2
{
    int operator()(Boolean str1, Boolean str2)
    {
        return 0;
    }
};

template<int Len1> struct str_i_cmp_2<Len1, Len1>
{
    int operator()(Boolean str1, Boolean str2)
    {
        return str_i_cmp<Len1>()(str1, str2);
    }
};
bool Equal(Boolean boolean1, Boolean boolean2)
{
    int boolean1len = strlen(boolean1);
    int boolean2len = strlen(boolean2);
    
    switch(boolean1len)
    {
    case 0:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<0, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<0, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<0, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<0, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<0, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<0, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<0, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<0, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<0, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<0, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<0, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 1:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<1, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<1, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<1, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<1, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<1, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<1, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<1, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<1, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<1, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<1, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<1, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 2:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<2, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<2, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<2, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<2, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<2, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<2, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<2, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<2, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<2, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<2, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<2, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 3:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<3, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<3, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<3, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<3, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<3, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<3, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<3, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<3, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<3, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<3, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<3, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 4:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<4, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<4, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<4, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<4, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<4, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<4, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<4, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<4, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<4, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<4, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<4, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 5:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<5, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<5, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<5, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<5, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<5, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<5, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<5, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<5, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<5, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<5, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<5, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 6:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<6, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<6, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<6, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<6, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<6, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<6, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<6, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<6, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<6, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<6, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<6, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 7:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<7, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<7, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<7, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<7, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<7, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<7, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<7, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<7, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<7, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<7, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<7, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 8:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<8, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<8, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<8, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<8, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<8, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<8, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<8, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<8, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<8, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<8, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<8, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 9:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<9, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<9, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<9, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<9, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<9, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<9, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<9, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<9, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<9, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<9, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<9, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    case 10:
        switch(boolean2len)
        {
        case 0:
            return str_i_cmp_2<10, 0>()(boolean1, boolean2) == 0;
        case 1:
            return str_i_cmp_2<10, 1>()(boolean1, boolean2) == 0;
        case 2:
            return str_i_cmp_2<10, 2>()(boolean1, boolean2) == 0;
        case 3:
            return str_i_cmp_2<10, 3>()(boolean1, boolean2) == 0;
        case 4:
            return str_i_cmp_2<10, 4>()(boolean1, boolean2) == 0;
        case 5:
            return str_i_cmp_2<10, 5>()(boolean1, boolean2) == 0;
        case 6:
            return str_i_cmp_2<10, 6>()(boolean1, boolean2) == 0;
        case 7:
            return str_i_cmp_2<10, 7>()(boolean1, boolean2) == 0;
        case 8:
            return str_i_cmp_2<10, 8>()(boolean1, boolean2) == 0;
        case 9:
            return str_i_cmp_2<10, 9>()(boolean1, boolean2) == 0;
        case 10:
            return str_i_cmp_2<10, 10>()(boolean1, boolean2) == 0;
        default:
            return false;
        }
    default:
        return false;
    }
}
