//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WJ2DiscoveredDevicesViewModel : NSObject
{
    NSArray *_discoveredDevices;
}

@property(readonly) NSArray *discoveredDevices; // @synthesize discoveredDevices=_discoveredDevices;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDiscoveredDevices:(id)arg1;
- (id)toJson;

@end

