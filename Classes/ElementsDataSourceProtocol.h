/*
     File: ElementsDataSourceProtocol.h
 Abstract: Protocol that defines information each Element tableview datasource must provide.
  Version: 1.12
 
 
 
 Copyright (C) 2013 Apple Inc. All Rights Reserved.
 
 */

#import <UIKit/UIKit.h>
#import "AtomicElement.h"

@protocol ElementsDataSource <NSObject>
 
@required

// these properties are used by the view controller
// for the navigation and tab bar
@property (readonly) NSString *name;
@property (readonly) NSString *navigationBarName;
@property (readonly) UIImage *tabBarImage;

// this property determines the style of table view displayed
@property (readonly) UITableViewStyle tableViewStyle;

// provides a standardized means of asking for the element at the specific
// index path, regardless of the sorting or display technique for the specific
// datasource
- (AtomicElement *)atomicElementForIndexPath:(NSIndexPath *)indexPath;

@optional

// this optional protocol allows us to send the datasource this message, since it has the 
// required information
- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section;

@end
