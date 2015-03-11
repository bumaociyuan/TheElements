/*
     File: AtomicElementTileView.m
 Abstract: Draws the small tile view displayed in the tableview rows.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import "AtomicElementTileView.h"
#import "AtomicElement.h"

@implementation AtomicElementTileView

- (id)initWithFrame:(CGRect)frame {
    
    if (self = [super initWithFrame:frame]) {
		_element = nil;
    }
    return self;
}
 
- (void)drawRect:(CGRect)rect {
    
	CGPoint point;
    
	// get the image that represents the element physical state and draw it
	UIImage *backgroundImage = self.element.stateImageForAtomicElementTileView;
	CGRect elementSymbolRectangle = CGRectMake(0,0, [backgroundImage size].width, [backgroundImage size].height);
	[backgroundImage drawInRect:elementSymbolRectangle];
	
	[[UIColor whiteColor] set];
	
	// draw the element number
	UIFont *font = [UIFont boldSystemFontOfSize:11];
	point = CGPointMake(3,2);
	[[self.element.atomicNumber stringValue] drawAtPoint:point withFont:font];
	
	// draw the element symbol
	font = [UIFont boldSystemFontOfSize:18];
	CGSize stringSize = [self.element.symbol sizeWithFont:font];
	point = CGPointMake((elementSymbolRectangle.size.width-stringSize.width)/2, 14.0);
	
	[self.element.symbol drawAtPoint:point withFont:font];
}

@end
