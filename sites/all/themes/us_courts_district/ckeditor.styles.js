CKEDITOR.addStylesSet( 'drupal',
[

/* Block Styles */
{ name : 'Heading 1' , element : 'h1' },
{ name : 'Heading 2' , element : 'h2' },
{ name : 'Heading 3', element : 'h3' },
{ name : 'Heading 4', element : 'h4' },
{ name : 'Heading 5', element : 'h5' },
{ name : 'Heading 6', element : 'h6' },

/* Back to default */

{ name : 'Normal Paragraph', element : 'p', attributes : { 'class' : ''} },


/* Object Styles */
{
     name : 'Left Aligned Image',
     element : 'img',
     attributes :
     {
        'class' : 'img-right'
     }
},
{
    name : 'Right Aligned Image',
    element : 'img',
    attributes :
    {
         'class' : 'img-left'
    }
}
]);