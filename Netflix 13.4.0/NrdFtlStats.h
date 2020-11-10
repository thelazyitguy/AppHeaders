//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NSCopying-Protocol.h>

@interface NrdFtlStats : NSObject <NSCopying>
{
    unsigned long long _sessionStartTime;
    unsigned long long _requestCount;
    unsigned long long _errorCount;
    unsigned long long _consecutiveErrorCount;
}

@property(nonatomic) unsigned long long consecutiveErrorCount; // @synthesize consecutiveErrorCount=_consecutiveErrorCount;
@property(nonatomic) unsigned long long errorCount; // @synthesize errorCount=_errorCount;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) unsigned long long sessionStartTime; // @synthesize sessionStartTime=_sessionStartTime;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)incrementResponses:(_Bool)arg1;
- (void)incrementRequestCount;
- (id)init;

@end

