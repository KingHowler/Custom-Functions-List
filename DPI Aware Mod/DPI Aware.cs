// In Form's properties, Set Auto Scalling to DPI
// Then in program.cs replace static void main() with the following code
// Note: In line 6, Replace Form1 with the name of the first winform the program runs

static void Main()
{
    if (Environment.OSVersion.Version.Major >= 6) SetProcessDPIAware();
    Application.EnableVisualStyles();
    Application.SetCompatibleTextRenderingDefault(false);
    Application.Run(new Form1());
}

[System.Runtime.InteropServices.DllImport("user32.dll")]
private static extern bool SetProcessDPIAware();
