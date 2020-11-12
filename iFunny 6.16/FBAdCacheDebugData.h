//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBAdCacheDebugData : NSObject
{
    _Bool _hitOrMissLogged;
    _Bool _inMemoryCacheWriteFailureLogged;
    NSString *_requestId;
    NSString *_adFormat;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool inMemoryCacheWriteFailureLogged; // @synthesize inMemoryCacheWriteFailureLogged=_inMemoryCacheWriteFailureLogged;
@property(readonly, nonatomic) _Bool hitOrMissLogged; // @synthesize hitOrMissLogged=_hitOrMissLogged;
@property(readonly, copy, nonatomic) NSString *adFormat; // @synthesize adFormat=_adFormat;
@property(readonly, copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)markInMemoryCacheWriteFailureLogged;
- (void)markHitOrMissLogged;
- (id)initWithRequestId:(id)arg1 adFormat:(id)arg2;

@end
