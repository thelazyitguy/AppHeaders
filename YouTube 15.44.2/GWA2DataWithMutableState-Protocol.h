//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@protocol GWA2DataWithMutableState <NSObject>
@property(nonatomic) unsigned long long dataExecutionState;
- (void)executionStateUpdatedToFailed;
- (void)executionStateUpdatedToCancelled;
- (void)executionStateUpdatedToCompleted;
- (void)executionStateUpdatedToRunning;
@end

