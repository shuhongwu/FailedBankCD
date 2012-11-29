//
//  FBCDMasterViewController.h
//  FailedBankCD
//
//  Created by Alex on 10/31/12.
//  Copyright (c) 2012 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDMasterViewController : UITableViewController


@property (nonatomic,strong) NSManagedObjectContext* managedObjectContext;
@property (nonatomic, strong) NSArray *failedBankInfos;

@end
