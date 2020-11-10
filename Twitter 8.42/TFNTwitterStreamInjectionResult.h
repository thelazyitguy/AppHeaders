//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <T1Twitter/TFNTwitterStreamInjectionResult-Protocol.h>

@class NSError, NSString;

@interface TFNTwitterStreamInjectionResult : NSObject <TFNTwitterStreamInjectionResult>
{
    _Bool _success;
    NSError *_failureReason;
}

+ (id)failureResultWithReason:(id)arg1;
+ (id)successResult;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *failureReason; // @synthesize failureReason=_failureReason;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id)initFailureResultWithReason:(id)arg1;
- (id)initSuccessResult;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
