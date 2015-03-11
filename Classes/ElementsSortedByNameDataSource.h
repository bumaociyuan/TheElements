/*
     File: ElementsSortedByNameDataSource.h
 Abstract: Provides the table view data for the elements sorted by name.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>
#import "ElementsDataSourceProtocol.h"

@interface ElementsSortedByNameDataSource : NSObject <UITableViewDataSource, ElementsDataSource> {
}

@end
