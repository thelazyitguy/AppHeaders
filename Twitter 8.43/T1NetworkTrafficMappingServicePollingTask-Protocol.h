//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/TFSTwitterRecurringTask-Protocol.h>

@class NSObject, TFSTwitterAPICommandService;
@protocol OS_dispatch_queue, T1NetworkTrafficMappingServicePollingTaskDelegate, TFSTwitterAPICommandContext;

@protocol T1NetworkTrafficMappingServicePollingTask <TFSTwitterRecurringTask>
@property(nonatomic) __weak id <T1NetworkTrafficMappingServicePollingTaskDelegate> delegate;
- (void)invalidate;
- (void)cancel;
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1 apiCommandService:(TFSTwitterAPICommandService *)arg2 apiCommandContext:(id <TFSTwitterAPICommandContext>)arg3;
@end
