<p><strong><span style="font-size: 26px;">The Command Pattern</span></strong></p>
<p>This design pattern uses a compilation of some polymorphism and inheritance.</p>
<p>The classes are broken into two categories: framework and application.</p>
<p>The framework contains the Button and Command classes. The button is the class we want to always stay the same despite different underlying functions. Therefore, the button method is essentially forwarded to the command class through the use of aggregation and executing the command class with an instantiation of it within the button class.</p>
<p>The Command class is an abstract class that is inherited by the AddCustomerCommand. The AddCustomerCommand then contains customerService objects to execute the method in accordance with customerService.</p>
<p><br></p>