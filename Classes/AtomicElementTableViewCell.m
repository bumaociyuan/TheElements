/*
     File: AtomicElementTableViewCell.m
 Abstract: Draws the tableview cell and lays out the subviews.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import "AtomicElementTableViewCell.h"
#import "AtomicElement.h"
#import "AtomicElementTileView.h"

@implementation AtomicElementTableViewCell

// the element setter
// we implement this because the table cell values need to be updated when this property
// changes, and this allows for the changes to be encapsulated
//
- (void)setElement:(AtomicElement *)anElement {
    
    if (anElement != _element) {
		_element = anElement;
	}
	
    AtomicElementTileView *elementTileView = (AtomicElementTileView *)[self.contentView viewWithTag:1];
    elementTileView.element = _element;
    
	UILabel *labelView = (UILabel *)[self.contentView viewWithTag:2];
    labelView.text = _element.name;
    
	[elementTileView setNeedsDisplay];
	[labelView setNeedsDisplay];
}

@end
