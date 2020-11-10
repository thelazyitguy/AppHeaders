//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CSLogNavigationInfo.h"

@class NSNumber, QoeDataProfile;

@interface CSLogNavigationLevel : CSLogNavigationInfo
{
    NSNumber *_sessionId;
    NSNumber *_performanceTraceContextId;
    QoeDataProfile *_qoeProfile;
}

+ (id)levelWithSessionId:(id)arg1 view:(id)arg2 trackingInfo:(id)arg3 traceId:(id)arg4 profile:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) QoeDataProfile *qoeProfile; // @synthesize qoeProfile=_qoeProfile;
@property(retain, nonatomic) NSNumber *performanceTraceContextId; // @synthesize performanceTraceContextId=_performanceTraceContextId;
@property(retain, nonatomic) NSNumber *sessionId; // @synthesize sessionId=_sessionId;

@end

