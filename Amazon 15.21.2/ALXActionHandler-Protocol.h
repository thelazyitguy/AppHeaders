//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALXAction, NSArray;
@protocol ALXAbstractContext;

@protocol ALXActionHandler <NSObject>
- (void)handleAction:(ALXAction *)arg1 withCompletionHandler:(void (^)(struct NSArray *, NSError *))arg2;

@optional
- (NSArray *)transientContexts;
- (id <ALXAbstractContext>)context;
@end
