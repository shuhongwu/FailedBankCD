//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by Alex on 10/31/12.
//  Copyright (c) 2012 Alex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class FailedBankDetails;

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details;

@end
