//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSString;

@protocol SLKEnterpriseTokenHandlerInterface
- (void)handleEnterpriseToken:(NSString *)arg1 enterpriseId:(NSString *)arg2 userId:(NSString *)arg3 teamIds:(NSArray *)arg4 shouldSetCurrentAccount:(_Bool)arg5 teamTokenHandler:(void (^)(NSString *))arg6 acceptedTOS:(_Bool)arg7 completion:(void (^)(id <_TtP7SlackUI40SLKAppDelegateTOSAuthenticationInterface_>, NSString *, NSString *, NSError *))arg8;
@end
