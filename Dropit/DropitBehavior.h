//
//  DropitBehavior.h
//  Dropit
//
//  Created by Albert on 09/11/17.
//  Copyright © 2017 Albert. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropitBehavior : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>)item;
- (void)removeItem:(id <UIDynamicItem>)item;

@end
