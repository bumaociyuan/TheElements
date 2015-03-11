/*
     File: ElementsSortedBySymbolDataSource.h
 Abstract: Provides the table view data for the elements sorted by atomic symbol.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>
#import "ElementsDataSourceProtocol.h"

@interface ElementsSortedBySymbolDataSource : NSObject <UITableViewDataSource,ElementsDataSource> {
}
 
@end
