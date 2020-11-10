//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol SPTLoginLogger;

@interface SPTAuthenticationHandlerLogger : NSObject
{
    id <SPTLoginLogger> _logger;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SPTLoginLogger> logger; // @synthesize logger=_logger;
- (id)requestTypeWithSourceType:(unsigned long long)arg1;
- (id)attributesForReg:(_Bool)arg1 authType:(id)arg2 authMethod:(id)arg3;
- (id)userAuthEventAttributesForType:(unsigned long long)arg1;
- (void)logAuthAttemptCompletedWithSource:(unsigned long long)arg1 error:(id)arg2 attemptId:(id)arg3 result:(id)arg4;
- (id)logAuthAttemptStartedWithSource:(unsigned long long)arg1;
- (void)logUserDidAuthFromScreen:(unsigned long long)arg1;
- (void)logUserDidSignup;
- (id)initWithLogger:(id)arg1;

@end

