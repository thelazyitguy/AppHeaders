//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GCKDBDeviceInfo, GCKDevice;

@interface GCKCastDevicePublisherEntry : NSObject
{
    GCKDevice *_device;
    GCKDBDeviceInfo *_deviceInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GCKDBDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(readonly, nonatomic) GCKDevice *device; // @synthesize device=_device;
- (id)initWithDeviceInfo:(id)arg1 device:(id)arg2;

@end

