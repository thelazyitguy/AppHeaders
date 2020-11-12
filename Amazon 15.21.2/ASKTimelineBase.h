//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASKTimeline-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString;
@protocol ASKTimelineEvent;

@interface ASKTimelineBase : NSObject <ASKTimeline>
{
    _Bool _shouldParticipateInKdebug;
    NSString *_name;
    NSMutableDictionary *_events;
    NSMutableArray *_reporters;
    NSOperationQueue *_reporterQueue;
    id <ASKTimelineEvent> _mainEvent;
    NSMutableArray *_mutableTags;
}

@property(nonatomic) _Bool shouldParticipateInKdebug; // @synthesize shouldParticipateInKdebug=_shouldParticipateInKdebug;
@property(retain, nonatomic) NSMutableArray *mutableTags; // @synthesize mutableTags=_mutableTags;
@property(retain, nonatomic) id <ASKTimelineEvent> mainEvent; // @synthesize mainEvent=_mainEvent;
@property(retain, nonatomic) NSOperationQueue *reporterQueue; // @synthesize reporterQueue=_reporterQueue;
@property(retain, nonatomic) NSMutableArray *reporters; // @synthesize reporters=_reporters;
@property(retain, nonatomic) NSMutableDictionary *events; // @synthesize events=_events;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)report;
- (void)addEvent:(id)arg1;
- (void)markReadyToReport;
- (void)finishTimeline;
- (void)finishEventWithName:(id)arg1;
- (id)allEvents;
- (void)mergeTimeline:(id)arg1;
- (_Bool)allEventsHaveFinished;
- (void)addTag:(id)arg1;
- (void)addReporter:(id)arg1;
- (id)addEventWithType:(unsigned long long)arg1 dateInterval:(id)arg2 andEventNameFormat:(id)arg3;
- (id)addEventWithName:(id)arg1 type:(unsigned long long)arg2 dateInterval:(id)arg3;
- (void)validateForAlreadyStartedEventWithName:(id)arg1;
- (id)startEventWithName:(id)arg1 type:(unsigned long long)arg2 startTime:(double)arg3;
- (id)startEventWithType:(unsigned long long)arg1 andEventNameFormat:(id)arg2;
- (id)startEventWithName:(id)arg1 type:(unsigned long long)arg2;
- (id)startEventWithName:(id)arg1;
- (void)startWithTime:(double)arg1;
- (void)start;
@property(readonly, nonatomic) NSArray *tags;
@property(readonly, nonatomic) unsigned long long duration;
@property(readonly, nonatomic) double startTime;
- (id)initWithName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
