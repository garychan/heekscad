// PointDrawing.h

#pragma once

#include "Drawing.h"

class PointDrawing: public Drawing{
private:
	std::list<HeeksObj*> temp_object_in_list;
	std::list<HeeksObj*> prev_object_in_list;
	HeeksObj *temp_object;

	// Drawing's virtual functions
	bool calculate_item(DigitizedPoint &end);
	const std::list<HeeksObj*>& GetObjectsMade()const{return temp_object_in_list;}
	void clear_drawing_objects(bool store_as_previous_objects);
	const wxChar* get_drawing_title(){return _T("Point Drawing");}
	int number_of_steps(){return 1;}
	int step_to_go_to_after_last_step(){return 0;}
	bool is_an_add_level(int level){return true;}

public:
	PointDrawing(void);
	virtual ~PointDrawing(void);

	// InputMode's virtual functions
	const wxChar* GetTitle(){return _T("Point drawing");}
};

extern PointDrawing point_drawing;