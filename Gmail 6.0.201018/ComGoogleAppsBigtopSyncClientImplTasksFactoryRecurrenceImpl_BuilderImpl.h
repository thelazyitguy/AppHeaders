//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JBTRecurrence_Builder-Protocol.h"

@class NSString, TMLRecurrenceProto_RecurRulePart_Builder;
@protocol JBTId;

@interface ComGoogleAppsBigtopSyncClientImplTasksFactoryRecurrenceImpl_BuilderImpl : NSObject <JBTRecurrence_Builder>
{
    id <JBTId> id__;
    TMLRecurrenceProto_RecurRulePart_Builder *builder_;
}

- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)build;
- (id)clearMonthList;
- (id)addMonthWithJBTRecurrence_Month:(id)arg1;
- (id)getMonthList;
- (id)clearMonthdayList;
- (id)addMonthdayWithInt:(int)arg1;
- (id)getMonthdayList;
- (id)clearWeekdayList;
- (id)addWeekdayWithJBTRecurrence_ByDay:(id)arg1;
- (id)getWeekdayList;
- (id)clearUntilSec;
- (id)setUntilSecWithLong:(long long)arg1;
- (_Bool)hasUntilSec;
- (long long)getUntilSec;
- (id)clearCount;
- (id)setCountWithInt:(int)arg1;
- (_Bool)hasCount;
- (int)getCount;
- (id)setIntervalWithInt:(int)arg1;
- (int)getInterval;
- (id)setFrequencyWithJBTRecurrenceFrequency:(id)arg1;
- (id)getFrequency;
- (id)getMasterTaskId;
- (id)getId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

