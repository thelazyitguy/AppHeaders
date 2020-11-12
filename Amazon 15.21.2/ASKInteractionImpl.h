//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASKInteraction-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol ASKTimeline;

@interface ASKInteractionImpl : NSObject <ASKInteraction>
{
    _Bool _isCompleted;
    NSMutableDictionary *_tags;
    id <ASKTimeline> _timeline;
    NSString *_source;
    NSString *_target;
}

@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
@property(retain, nonatomic) NSString *target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) id <ASKTimeline> timeline; // @synthesize timeline=_timeline;
@property(retain, nonatomic) NSMutableDictionary *tags; // @synthesize tags=_tags;
- (void).cxx_destruct;
- (void)completeInteraction;
- (void)addTagWithKey:(id)arg1 value:(id)arg2;
- (id)initWithTarget:(id)arg1 startDate:(id)arg2;
- (id)initWithTarget:(id)arg1;
- (id)_initWithTarget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
