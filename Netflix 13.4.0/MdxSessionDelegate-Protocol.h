//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MdxLoginTargetResponse, MdxLoginUIRequest, NSDictionary, NSString;

@protocol MdxSessionDelegate
- (void)remoteLoginResponse:(MdxLoginTargetResponse *)arg1;
- (void)remoteLoginUserInteractionRequired:(MdxLoginUIRequest *)arg1 completion:(void (^)(MdxLoginUIRequest *, MdxLoginUIResponse *))arg2;
- (void)didAttemptRemoteLogin;
- (void)didReceiveAppMessage:(NSDictionary *)arg1;
- (void)propertyDidChange:(NSString *)arg1 oldValue:(id)arg2 newValue:(id)arg3;
- (void)appConnectionDidEnd;
- (void)launchStateDidChange:(long long)arg1;
- (void)discoveryStateDidChange:(long long)arg1;
@end

