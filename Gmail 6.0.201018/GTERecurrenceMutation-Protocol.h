//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTEDataMutation-Protocol.h"

@class GTETaskListIdentity;
@protocol GTENetworkTasksService;

@protocol GTERecurrenceMutation <GTEDataMutation>
@property(readonly, nonatomic) GTETaskListIdentity *taskListID;
- (void)executeOnNetworkService:(id <GTENetworkTasksService>)arg1 completionHandler:(void (^)(GTERecurrence *, NSString *, NSError *))arg2;
@end

