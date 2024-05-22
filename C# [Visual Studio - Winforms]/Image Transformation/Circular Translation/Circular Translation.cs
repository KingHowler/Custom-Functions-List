private void CircularTranslation(int degrees, int radius, Point centre)
{
    double radians = degrees * Math.PI / 180.0;

    // Calculate new coordinates
    double newX = centre.X - radius * Math.Cos(radians);
    double newY = centre.Y - radius * Math.Sin(radians);

    obj.Location = new Point((int)newX - (obj.Width / 2),(int)newY - (obj.Height / 2));
}
