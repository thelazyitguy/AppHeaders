//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AIMobileAdsDeviceInfo : NSObject
{
    NSMutableDictionary *_deviceInfo;
}

+ (id)deviceInfo;
@property(retain, nonatomic) NSMutableDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void).cxx_destruct;
- (double)getScreenHeight;
- (double)getScreenWidth;
- (id)stringForOrientation:(long long)arg1;
- (id)getCurrentDeviceOrientation;
- (double)getScreenScale;
- (id)deviceModelVersion;
- (void)loadDeviceInfo;
- (id)getDeviceInfo;
- (id)init;

@end
