/*
     File: AtomicElementTableViewCell.h
 Abstract: Draws the tableview cell and lays out the subviews.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>

@class AtomicElement;

@interface AtomicElementTableViewCell : UITableViewCell

@property (nonatomic,strong) AtomicElement *element;

@end
