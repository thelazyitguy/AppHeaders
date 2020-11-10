//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "_TtP4Argo26HTTPSessionManagerProtocol_-Protocol.h"

@class AFHTTPSessionManager;

@interface HTTPLegacySessionManager : NSObject <_TtP4Argo26HTTPSessionManagerProtocol_>
{
    _Bool _invalidating;
    float defaultPriority;
    AFHTTPSessionManager *_afHTTPSessionManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AFHTTPSessionManager *afHTTPSessionManager; // @synthesize afHTTPSessionManager=_afHTTPSessionManager;
@property _Bool invalidating; // @synthesize invalidating=_invalidating;
@property(nonatomic) float defaultPriority; // @synthesize defaultPriority;
- (_Bool)isErrorFromCapturedNetwork:(id)arg1;
- (void)handleFailure:(id)arg1 error:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)requestUrlWithAutoRetry:(int)arg1 originalRequestCreator:(CDUnknownBlockType)arg2 originalFailure:(CDUnknownBlockType)arg3;
- (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 shouldRetry:(long long)arg5;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4 shouldRetry:(long long)arg5;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)downloadFromURLString:(id)arg1 parameters:(id)arg2 method:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2 responseType:(unsigned long long)arg3;
- (void)invalidateSessionByCancelingTasks:(_Bool)arg1;

@end

