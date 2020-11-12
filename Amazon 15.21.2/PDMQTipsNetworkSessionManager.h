//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLSession;

@interface PDMQTipsNetworkSessionManager : NSObject
{
    NSURL *_baseURL;
    NSURLSession *_session;
}

+ (id)errorWithCode:(long long)arg1 description:(id)arg2 failureReason:(id)arg3 recoverySuggestion:(id)arg4;
+ (_Bool)successfulHttpResponse:(id)arg1;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)requestWithMethod:(id)arg1 URLString:(id)arg2 parameters:(struct NSDictionary *)arg3 error:(id *)arg4;
- (id)dataTaskWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(struct NSDictionary *)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(struct NSDictionary *)arg2 data:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)GET:(id)arg1 parameters:(struct NSDictionary *)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;

@end
