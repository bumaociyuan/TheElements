/*
     File: AtomicElementViewController.h
 Abstract: Controller that manages the full tile view of the atomic information,
 creating the reflection, and the flipping of the tile.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>

@class AtomicElement;

@interface AtomicElementViewController : UIViewController

@property (nonatomic,strong) AtomicElement *element;

- (void)flipCurrentView;

@end
