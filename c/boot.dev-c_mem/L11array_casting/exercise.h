#define SIZE_ARRAY 10

typedef struct Graphics {
    int fps;
    int height;
    int width;
} graphics_t;

// function prototype using array notation:
void dump_graphics(graphics_t gsettings[SIZE_ARRAY]);
// ! !             !          !         !
// | |             |          |         |
// | |             |          |         +-----> parameter declared with array syntax,
// | |             |          |                 but actually a pointer to graphics_t
// | |             |          +---------------> parameter name: gsettings
// | |             +--------------------------> type of each element: graphics_t
// | +----------------------------------------> function name
// +------------------------------------------> return type (void)

// ! !             !          !         !
// | |             |          |         |
// | |             |          |         +-----> declared with array syntax;
// | |             |          |                 in function parameters this decays to graphics_t *
// | |             |          +---------------> parameter name: gsettings
// | |             +--------------------------> type of each element: graphics_t
// | +----------------------------------------> function name
// +------------------------------------------> return type (void)

// Identical function prototype using pointer notation:
void dump_graphics2(graphics_t *gsettings);

/*
 * Decays to a pointer?
 * In the C standard this is referred to as:
 * "The Array notation gets converted into an pointer"
 * ????
 */

/*
The C standard describes this under function declarators:

    When you write a parameter like int arr[10],
    the type is adjusted to int *arr.

This is not a runtime conversion.
It is a type adjustment performed at compile time.

So your comment block should use wording like:

“Array notation is adjusted to a pointer type in function parameters.”
*/
