//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSString;

@interface FTLProbeReportPulse : NSObject
{
    double _duration;
    double _dns;
    double _tcp;
    double _tls;
    double _ttfb;
    unsigned long long _status;
    unsigned long long _size;
    NSString *_ip;
    NSString *_via;
    NSString *_cip;
    NSString *_err;
    NSError *_pfError;
}

- (void).cxx_destruct;
@property(readonly) NSError *pfError; // @synthesize pfError=_pfError;
@property(readonly) NSString *err; // @synthesize err=_err;
@property(readonly) NSString *cip; // @synthesize cip=_cip;
@property(readonly) NSString *via; // @synthesize via=_via;
@property(readonly) NSString *ip; // @synthesize ip=_ip;
@property(readonly) unsigned long long size; // @synthesize size=_size;
@property(readonly) unsigned long long status; // @synthesize status=_status;
@property(readonly) double ttfb; // @synthesize ttfb=_ttfb;
@property(readonly) double tls; // @synthesize tls=_tls;
@property(readonly) double tcp; // @synthesize tcp=_tcp;
@property(readonly) double dns; // @synthesize dns=_dns;
@property(readonly) double duration; // @synthesize duration=_duration;
- (id)initWithMetrics:(id)arg1 status:(unsigned long long)arg2 size:(unsigned long long)arg3 ip:(id)arg4 via:(id)arg5 cip:(id)arg6 err:(id)arg7 pfError:(id)arg8;

@end

