//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Airship/NSObject-Protocol.h>

@class UAInAppMessage, UAInAppMessageAssets;

@protocol UAInAppMessageAdapterProtocol <NSObject>
+ (id)adapterForMessage:(UAInAppMessage *)arg1;
- (void)display:(void (^)(UAInAppMessageResolution *))arg1;
- (_Bool)isReadyToDisplay;
- (void)prepareWithAssets:(UAInAppMessageAssets *)arg1 completionHandler:(void (^)(unsigned long long))arg2;
@end
