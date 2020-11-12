//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol GALRPCService <NSObject>
- (void)startLinkingSessionWithSessionID:(int)arg1 providerID:(NSString *)arg2 flows:(NSArray *)arg3 capabilities:(NSArray *)arg4 entryPoint:(long long)arg5 callback:(void (^)(GALLinkingSession *, NSError *))arg6;
- (void)startLinkingSessionWithSessionID:(int)arg1 providerID:(NSString *)arg2 flows:(NSArray *)arg3 scopes:(NSArray *)arg4 entryPoint:(long long)arg5 callback:(void (^)(GALLinkingSession *, NSError *))arg6;
- (void)getLinkWithSessionID:(int)arg1 providerID:(NSString *)arg2 capabilities:(NSArray *)arg3 callback:(void (^)(GALLink *, NSError *))arg4;
- (void)getLinkWithSessionID:(int)arg1 providerID:(NSString *)arg2 scopes:(NSArray *)arg3 callback:(void (^)(GALLink *, NSError *))arg4;
- (void)getLinkWithSessionID:(int)arg1 providerID:(NSString *)arg2 callback:(void (^)(GALLink *, NSError *))arg3;
- (void)finishOAuthWithSessionID:(int)arg1 providerID:(NSString *)arg2 redirectState:(NSString *)arg3 callback:(void (^)(GALLink *, NSError *))arg4;
- (void)depositGoogleCredentialWithSessionID:(int)arg1 providerID:(NSString *)arg2 googleScopes:(NSArray *)arg3 consistencyKey:(NSString *)arg4 callback:(void (^)(NSString *, NSError *))arg5;
- (void)deleteLinkWithSessionID:(int)arg1 providerID:(NSString *)arg2 entryPoint:(long long)arg3 callback:(void (^)(NSError *))arg4;
- (void)createLinkWithSessionID:(int)arg1 providerID:(NSString *)arg2 scopes:(NSArray *)arg3 authCode:(NSString *)arg4 callback:(void (^)(GALLink *, NSError *))arg5;
@end
