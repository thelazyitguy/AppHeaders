//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NSObject-Protocol.h>

@class NSString;

@protocol MdxDevice <NSObject>
@property(readonly) NSString *remoteLoginSessionId;
@property(readonly) _Bool isWaitingOnSignin;
@property(readonly) _Bool canRemoteLogin;
@property(readonly) NSString *url;
@property(readonly) NSString *targetType;
@property(readonly) NSString *modelNumber;
@property(readonly) NSString *modelName;
@property(readonly) NSString *manufacturer;
@property(readonly) NSString *friendlyName;
@property(readonly) NSString *mdxUuid;
@property(readonly) NSString *deviceId;
@property(readonly) long long discoveryState;
- (void)startSessionWithIntent:(long long)arg1 callback:(void (^)(MdxSession *, NSError *))arg2;
@end
