//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TwitterNetworkLayer/NSSecureCoding-Protocol.h>

@class NSError, TNLResponseInfo, TNLResponseMetrics;
@protocol TNLRequest;

@interface TNLResponse : NSObject <NSSecureCoding>
{
    NSError *_operationError;
    id <TNLRequest> _originalRequest;
    TNLResponseInfo *_info;
    TNLResponseMetrics *_metrics;
}

+ (_Bool)supportsSecureCoding;
+ (id)responseWithRequest:(id)arg1 operationError:(id)arg2 info:(id)arg3 metrics:(id)arg4;
+ (id)responseWithResponse:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) TNLResponseMetrics *metrics; // @synthesize metrics=_metrics;
@property(readonly, nonatomic) TNLResponseInfo *info; // @synthesize info=_info;
@property(readonly, copy, nonatomic) id <TNLRequest> originalRequest; // @synthesize originalRequest=_originalRequest;
@property(readonly, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)prepare;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initInternalWithRequest:(id)arg1 operationError:(id)arg2 info:(id)arg3 metrics:(id)arg4;

@end

