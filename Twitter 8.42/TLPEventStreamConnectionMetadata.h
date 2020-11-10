//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol TLPTimeProvider;

@interface TLPEventStreamConnectionMetadata : NSObject
{
    id <TLPTimeProvider> _timeProvider;
    NSString *_sessionID;
    double _startTime;
    double _requestStartTime;
    double _responseStartTime;
    double _firstSystemEventTime;
    double _lastSystemEventTime;
    double _firstNonSystemEventTime;
    double _lastNonSystemEventTime;
    double _endTime;
    long long _maxTimeBetweenEventsMs;
    unsigned long long _systemEventsReceived;
    unsigned long long _nonSystemEventsReceived;
    unsigned long long _bytesReceived;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property(readonly, nonatomic) unsigned long long nonSystemEventsReceived; // @synthesize nonSystemEventsReceived=_nonSystemEventsReceived;
@property(readonly, nonatomic) unsigned long long systemEventsReceived; // @synthesize systemEventsReceived=_systemEventsReceived;
@property(readonly, nonatomic) long long maxTimeBetweenEventsMs; // @synthesize maxTimeBetweenEventsMs=_maxTimeBetweenEventsMs;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double lastNonSystemEventTime; // @synthesize lastNonSystemEventTime=_lastNonSystemEventTime;
@property(readonly, nonatomic) double firstNonSystemEventTime; // @synthesize firstNonSystemEventTime=_firstNonSystemEventTime;
@property(readonly, nonatomic) double lastSystemEventTime; // @synthesize lastSystemEventTime=_lastSystemEventTime;
@property(readonly, nonatomic) double firstSystemEventTime; // @synthesize firstSystemEventTime=_firstSystemEventTime;
@property(readonly, nonatomic) double responseStartTime; // @synthesize responseStartTime=_responseStartTime;
@property(readonly, nonatomic) double requestStartTime; // @synthesize requestStartTime=_requestStartTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)customScribeParametersDictionary;
- (void)didReceiveNonSystemEvent;
- (void)didReceiveSystemEvent;
- (void)didReadBytes:(unsigned long long)arg1;
- (void)didEnd;
- (void)didEstablishSession:(id)arg1;
- (void)didReceiveResponse;
- (void)didSendRequest;
- (void)didStart;
- (long long)meanTimeBetweenEventsMs;
- (id)initWithTimeProvider:(id)arg1;

@end

