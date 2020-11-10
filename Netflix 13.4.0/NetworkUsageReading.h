//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NetworkUsageReading : NSObject
{
    unsigned long long _wifiBytesRead;
    unsigned long long _wifiBytesWritten;
    unsigned long long _cellularBytesRead;
    unsigned long long _cellularBytesWritten;
    unsigned long long _vpnBytesRead;
    unsigned long long _vpnBytesWritten;
}

+ (id)differenceBetweenReading:(id)arg1 andReading:(id)arg2;
+ (id)sumOfReading:(id)arg1 andReading:(id)arg2;
+ (id)currentReading;
@property(readonly, nonatomic) unsigned long long vpnBytesWritten; // @synthesize vpnBytesWritten=_vpnBytesWritten;
@property(readonly, nonatomic) unsigned long long vpnBytesRead; // @synthesize vpnBytesRead=_vpnBytesRead;
@property(readonly, nonatomic) unsigned long long cellularBytesWritten; // @synthesize cellularBytesWritten=_cellularBytesWritten;
@property(readonly, nonatomic) unsigned long long cellularBytesRead; // @synthesize cellularBytesRead=_cellularBytesRead;
@property(readonly, nonatomic) unsigned long long wifiBytesWritten; // @synthesize wifiBytesWritten=_wifiBytesWritten;
@property(readonly, nonatomic) unsigned long long wifiBytesRead; // @synthesize wifiBytesRead=_wifiBytesRead;
- (id)description;

@end

