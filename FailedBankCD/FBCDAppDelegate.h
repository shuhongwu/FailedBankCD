//
//  FBCDAppDelegate.h
//  FailedBankCD
//
//  Created by Alex on 10/31/12.
//  Copyright (c) 2012 Alex. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FBCDAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;//执行器
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;//一般都是实体 entities,表结构
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;//连接器

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
