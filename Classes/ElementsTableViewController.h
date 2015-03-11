/*
     File: ElementsTableViewController.h
 Abstract: Coordinates the tableviews and element data sources. It also responds
 to changes of selection in the table view and provides the cells.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>
#import "ElementsDataSourceProtocol.h"

@interface ElementsTableViewController : UITableViewController

@property (nonatomic,strong) id<ElementsDataSource, UITableViewDataSource> dataSource;

@end
