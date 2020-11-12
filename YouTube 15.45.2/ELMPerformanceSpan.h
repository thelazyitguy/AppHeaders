//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ELMPerformanceEventInfo, NSDate, NSNumber;

@interface ELMPerformanceSpan : NSObject
{
    _Bool _isMainThread;
    int _nonce;
    int _beginThreadIdentifier;
    int _endThreadIdentifier;
    long long _type;
    ELMPerformanceEventInfo *_info;
    NSDate *_begin;
    NSDate *_end;
    NSNumber *_parentNonce;
}

+ (id)performanceSpanWithType:(long long)arg1 nonce:(int)arg2 info:(id)arg3 begin:(id)arg4 end:(id)arg5 beginThreadIdentifier:(int)arg6 endThreadIdentifier:(int)arg7 isMainThread:(_Bool)arg8 parentNonce:(id)arg9;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *parentNonce; // @synthesize parentNonce=_parentNonce;
@property(readonly, nonatomic) _Bool isMainThread; // @synthesize isMainThread=_isMainThread;
@property(readonly, nonatomic) int endThreadIdentifier; // @synthesize endThreadIdentifier=_endThreadIdentifier;
@property(readonly, nonatomic) int beginThreadIdentifier; // @synthesize beginThreadIdentifier=_beginThreadIdentifier;
@property(readonly, nonatomic) NSDate *end; // @synthesize end=_end;
@property(readonly, nonatomic) NSDate *begin; // @synthesize begin=_begin;
@property(readonly, nonatomic) ELMPerformanceEventInfo *info; // @synthesize info=_info;
@property(readonly, nonatomic) int nonce; // @synthesize nonce=_nonce;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)description;
- (id)initWithType:(long long)arg1 nonce:(int)arg2 info:(id)arg3 begin:(id)arg4 end:(id)arg5 beginThreadIdentifier:(int)arg6 endThreadIdentifier:(int)arg7 isMainThread:(_Bool)arg8 parentNonce:(id)arg9;

@end
