//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TDLTaskRecurrence;

@interface TDLDataMigration5_TaskRecurrenceRowAtV5 : NSObject
{
    NSString *id__;
    NSString *shardId_;
    NSString *taskRecurrenceId_;
    TDLTaskRecurrence *taskRecurrence_;
    TDLTaskRecurrence *effectiveTaskRecurrence_;
    TDLTaskRecurrence *originalTaskRecurrence_;
    _Bool hasDirtyState_;
}

- (void)dealloc;
- (_Bool)hasDirtyState;
- (id)getOriginalTaskRecurrence;
- (id)getEffectiveTaskRecurrence;
- (id)getTaskRecurrence;
- (id)getTaskRecurrenceId;
- (id)getShardId;
- (id)getId;
- (id)copyWithNewIdAndShardIdWithNSString:(id)arg1 withNSString:(id)arg2;

@end

