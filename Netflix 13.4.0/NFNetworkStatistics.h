//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NFURLSession/NSCopying-Protocol.h>

@class NSString;

@interface NFNetworkStatistics : NSObject <NSCopying>
{
    NSString *_hostName;
    unsigned long long _connectionType;
    double _connectionTime;
    unsigned long long _connectionCount;
    double _requestTime;
    unsigned long long _requestCount;
    long long _requestByteCount;
    double _responseTime;
    unsigned long long _responseCount;
    long long _responseByteCount;
}

- (void).cxx_destruct;
@property(nonatomic) long long responseByteCount; // @synthesize responseByteCount=_responseByteCount;
@property(nonatomic) unsigned long long responseCount; // @synthesize responseCount=_responseCount;
@property(nonatomic) double responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) long long requestByteCount; // @synthesize requestByteCount=_requestByteCount;
@property(nonatomic) unsigned long long requestCount; // @synthesize requestCount=_requestCount;
@property(nonatomic) double requestTime; // @synthesize requestTime=_requestTime;
@property(nonatomic) unsigned long long connectionCount; // @synthesize connectionCount=_connectionCount;
@property(nonatomic) double connectionTime; // @synthesize connectionTime=_connectionTime;
@property(nonatomic) unsigned long long connectionType; // @synthesize connectionType=_connectionType;
@property(retain, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long confidenceRank;
- (long long)downloadBytesPerSecond;
- (long long)uploadBytesPerSecond;
- (long long)connectionBytesPerSecond;
- (void)addNetworkStatistics:(id)arg1;
- (void)addResponseTimeInterval:(double)arg1 withByteCount:(long long)arg2;
- (void)addRequestTimeInterval:(double)arg1 withByteCount:(long long)arg2;
- (void)addConnectionTimeInterval:(double)arg1;

@end
