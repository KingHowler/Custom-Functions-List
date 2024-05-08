// This function Rotates an image(set as parameter bmp) at a specific angle from a specific Center of rotation


private Bitmap RotateImage(Bitmap bmp, float angle, Point Centre_WRT_picBox, Point Centre_WRT_IMG, Size picBox_size)
{
    Bitmap rotatedImage = new Bitmap(picBox_size.Width, picBox_size.Height);
    rotatedImage.SetResolution(bmp.HorizontalResolution, bmp.VerticalResolution);

    using (Graphics g = Graphics.FromImage(rotatedImage))
    {
         //move object so that the point which it actually rotates from (which is the top left corner) is at the centre of rotation in the picture box / container
        g.TranslateTransform(Centre_WRT_picBox.X, Centre_WRT_picBox.Y);
        // Rotate
        g.RotateTransform(angle);
        // move obeject back so that the centre of rotation of the image is in the location of the centre of roatation in the picture box
        g.TranslateTransform(-Centre_WRT_IMG.X, -Centre_WRT_IMG.Y);
        // Draw the image on the bitmap
        g.DrawImage(bmp, new Point(0, 0));
    }

    return rotatedImage;
}



// Parameters
// bmp : the image to be rotateted, it is suggested to give the image source file
// angle : the angle the is to be rotated at from 0
// Centre_WRT_picbox : the location of the centre of rotation inside the Picture box
// Centre_WRT_IMG : the location of the center of rotation on the Image
// pic_Box_size : the size of the image

// NOTE: you need modifications for allignment of the image
