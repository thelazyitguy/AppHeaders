//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface CYFOriModel : NSObject
{
    _Bool _touch;
    double _pitch;
    double _roll;
    double _yaw;
    NSDate *_timestamp;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool touch; // @synthesize touch=_touch;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double yaw; // @synthesize yaw=_yaw;
@property(nonatomic) double roll; // @synthesize roll=_roll;
@property(nonatomic) double pitch; // @synthesize pitch=_pitch;

@end
