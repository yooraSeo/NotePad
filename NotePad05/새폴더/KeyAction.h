//KeyAction.h
/*
���ϸ� : KeyAction.h
�ۼ����� : 2018�� 05�� 03��
�ۼ��� : ������
��� : Ű���� ��� Ű���� �Է��� ����Ͽ� �ش� ����� ó��
���� : -
*/

#ifndef _KEYACTION_H
#define _KEYACTION_H
#include <afxwin.h>
typedef signed long int Long;
class NotePad;
class Positioner;
class KeyAction{
public:
	KeyAction();	
	KeyAction(NotePad* notePad);
	~KeyAction();
	void Action(UINT nChar);
private:
	NotePad * notePad;
	Positioner* positioner;
	Long column;
	Long row;
};

#endif // !_KEYACTION_H