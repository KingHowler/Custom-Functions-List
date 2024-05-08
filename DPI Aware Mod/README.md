# DPI Aware Mod
### To enable Auto-Scaling in a Winforms program
#### The Issue
Winforms application have a predefined resolution<br>
They can't know the size of your screen and are hence blurry on most screens
To solve this issue, you let the program use your windows software to find out the DPI of you screen and set it's resolution according to that

#### The Solution
- In the properties of the ```Form``` Set ```Auto Scaling``` to ```DPI```
- Now go to ```program,cs``` and replace the function ```main()``` with the code given in "DPI Aware.cs"

-- NOTE: In Line 10, replace ```Form1``` with the name of the form to be openend first.
