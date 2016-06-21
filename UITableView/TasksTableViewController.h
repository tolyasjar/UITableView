//
//  TasksTableViewController.h
//  UITableView
//
//  Created by Toleen Jaradat on 6/21/16.
//  Copyright © 2016 Toleen Jaradat. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface TasksTableViewController : UITableViewController

{
     NSMutableArray *tasks;
    
}
@property (nonnull,strong) Task *task1;
@property (nonnull,strong) Task *task2;
@property (nonnull,strong) Task *task3;
@property (nonnull,strong) Task *task4;
@property (nonnull,strong) Task *task5;


@end

