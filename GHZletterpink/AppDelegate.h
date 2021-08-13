//
//  AppDelegate.h
//  GHZletterpink
//
//  Created by 高浩哲 on 2021/8/13.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;
@property (nonatomic, strong)UIWindow *window;

@end

