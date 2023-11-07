<p><span style="font-size: 26px;"><strong>Memento Design Pattern</strong></span></p>
<p>This design pattern implements an undo or restore function. A &quot;memento&quot; is an object kept as a reminder. This is certainly the case here.</p>
<p>This implementation applies the single responsibility principle: Every class should have a single responsibility.&nbsp;</p>
<p>In this implementation, we have an Editor, EditorState, and History Class. The Editor sets the content. However, the EditorState holds the current state of the editor. Finally, the History class holds the history of the EditorStates in a stack and will retrieve and add them on demand.</p>
<p>A common real-world example of this is the ctrl-z function used in many applications.</p>
