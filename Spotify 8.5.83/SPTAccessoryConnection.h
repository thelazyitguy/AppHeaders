//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EAAccessory;

@interface SPTAccessoryConnection : NSObject
{
    EAAccessory *_accessory;
    double _timestamp;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) EAAccessory *accessory; // @synthesize accessory=_accessory;
- (id)initWithAccessory:(id)arg1 timestamp:(double)arg2;

@end
