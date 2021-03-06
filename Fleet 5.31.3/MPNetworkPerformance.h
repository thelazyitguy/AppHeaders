//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <mParticle_Apple_SDK/NSCopying-Protocol.h>

@class NSString, NSURL, NSURLRequest;

@interface MPNetworkPerformance : NSObject <NSCopying>
{
    NSURL *url;
    NSURLRequest *urlRequest;
    NSString *_POSTBody;
    NSString *_urlString;
    NSString *_httpMethod;
    double _startTime;
    double _endTime;
    double _elapsedTime;
    unsigned long long _bytesIn;
    unsigned long long _bytesOut;
    long long _responseCode;
    long long _networkMeasurementMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long networkMeasurementMode; // @synthesize networkMeasurementMode=_networkMeasurementMode;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
@property(nonatomic) unsigned long long bytesOut; // @synthesize bytesOut=_bytesOut;
@property(nonatomic) unsigned long long bytesIn; // @synthesize bytesIn=_bytesIn;
@property(nonatomic) double elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *httpMethod; // @synthesize httpMethod=_httpMethod;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;
- (id)dictionaryRepresentation;
- (void)setEndDate:(id)arg1;
- (void)setStartDate:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *POSTBody; // @synthesize POSTBody=_POSTBody;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLRequest:(id)arg1 networkMeasurementMode:(long long)arg2;

@end

