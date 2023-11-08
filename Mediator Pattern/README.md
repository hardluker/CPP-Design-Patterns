<p><strong><span style="font-size: 26px;">The Mediator Pattern</span></strong></p>
<p>This design pattern takes the principle of having a mediator that ties various components together and delegates the interaction in one place.</p>
<p>This allows you to be able to have flexible classes that are not having to be constantly updated with new associations with each other.</p>
<p>In this project we have the following classes:<br><br><strong>UIControl:</strong> This class is the parent class that forwards information to the dialog box class.</p>
<p><strong>ListBox:</strong> This is a child class that simulates a list that you select items from.</p>
<p><strong>TextBox:</strong> This simulates a textbox that is auto-populated with the item that is selected in the list.</p>
<p><strong>Button:</strong> This class is a button that is only enabled if the text box contains information.&nbsp;</p>
<p><strong>DialogBox: </strong>This is the purely abstract class that is interacted with by the UIControl (Base Component). This is essentially the parent mediator</p>
<p><strong>ArticlesDialogBox:</strong> This is where all the magic is really happening. This concrete mediator instantiates the objects and facilitates all the interactions. This functions as a single place to change information for new interactions instead of having to update every class.</p>
<p><br></p>