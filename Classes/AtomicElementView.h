/*
     File: AtomicElementView.h
 Abstract: Displays the Atomic Element information in a large format tile.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>

@class AtomicElement;
@class AtomicElementViewController;

@interface AtomicElementView : UIView

@property (nonatomic,strong) AtomicElement *element;
@property (nonatomic, weak) AtomicElementViewController *viewController;

+ (CGSize)preferredViewSize;
- (UIImage *)reflectedImageRepresentationWithHeight:(NSUInteger)height;

@end
