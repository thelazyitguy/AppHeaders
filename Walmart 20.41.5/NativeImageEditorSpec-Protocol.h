//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ElectrodeContainer/RCTBridgeModule-Protocol.h>
#import <ElectrodeContainer/RCTTurboModule-Protocol.h>

@class NSString;

@protocol NativeImageEditorSpec <RCTBridgeModule, RCTTurboModule>
- (void)cropImage:(NSString *)arg1 cropData:(struct Options *)arg2 successCallback:(void (^)(NSArray *))arg3 errorCallback:(void (^)(NSArray *))arg4;
@end
