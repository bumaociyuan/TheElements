/*
     File: AtomicElementTileView.h
 Abstract: Draws the small tile view displayed in the tableview rows.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>

@class AtomicElement;

@interface AtomicElementTileView : UIView

@property (nonatomic, strong) AtomicElement *element;

@end
