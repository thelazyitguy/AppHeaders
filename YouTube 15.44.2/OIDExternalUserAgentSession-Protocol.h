//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class NSError, NSURL;

@protocol OIDExternalUserAgentSession <NSObject>
- (void)failExternalUserAgentFlowWithError:(NSError *)arg1;
- (_Bool)resumeExternalUserAgentFlowWithURL:(NSURL *)arg1;
- (void)cancelWithCompletion:(void (^)(void))arg1;
- (void)cancel;
@end

