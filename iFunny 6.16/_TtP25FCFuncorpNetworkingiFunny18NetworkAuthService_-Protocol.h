//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSDictionary, NSString;

@protocol _TtP25FCFuncorpNetworkingiFunny18NetworkAuthService_ <NSObject>
- (void)cancelCheckNicknameAvailableRequest;
- (void)cancelCheckEmailAvailableRequest;
- (void)revokeAuthorizationWithAccessToken:(NSString *)arg1 success:(void (^)(FNRORevoke *))arg2 failure:(void (^)(NSError *))arg3;
- (void)registerWithParameters:(NSDictionary *)arg1 success:(void (^)(FNRORegisterUser *))arg2 failure:(void (^)(NSError *))arg3;
- (void)authorizeWithUsername:(NSString *)arg1 password:(NSString *)arg2 success:(void (^)(IFNetworkAuthInfoResponse *))arg3 failure:(void (^)(NSError *))arg4;
- (void)checkNicknameAvailable:(NSString *)arg1 success:(void (^)(FNRONickAvailable *))arg2 failure:(void (^)(NSError *))arg3;
- (void)checkEmailAvailable:(NSString *)arg1 success:(void (^)(FNROEmailAvailable *))arg2 failure:(void (^)(NSError *))arg3;
@end
