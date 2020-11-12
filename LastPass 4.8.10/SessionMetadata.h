//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SessionMetadata : NSObject
{
    unsigned long long _eventsCounter;
    unsigned long long _peopleCounter;
    NSString *_sessionID;
    unsigned long long _sessionStartEpoch;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long sessionStartEpoch; // @synthesize sessionStartEpoch=_sessionStartEpoch;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned long long peopleCounter; // @synthesize peopleCounter=_peopleCounter;
@property(nonatomic) unsigned long long eventsCounter; // @synthesize eventsCounter=_eventsCounter;
- (id)toDictionaryForEvent:(_Bool)arg1;
- (id)randomId;
- (void)reset;
- (id)init;

@end
