//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PTVParticipantCountDataPoint : NSObject
{
    double _participantCount;
    double _timeIntoBroadcast;
}

@property(readonly, nonatomic) double timeIntoBroadcast; // @synthesize timeIntoBroadcast=_timeIntoBroadcast;
@property(readonly, nonatomic) double participantCount; // @synthesize participantCount=_participantCount;
- (id)dictionaryForStoring;
- (id)initWithDictionary:(id)arg1;
- (id)initWithParticipantCount:(double)arg1 timeIntoBroadcast:(double)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end
