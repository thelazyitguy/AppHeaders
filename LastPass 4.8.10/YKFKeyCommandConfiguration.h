//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface YKFKeyCommandConfiguration : NSObject
{
    double _commandTime;
    double _commandTimeout;
    double _commandProbeTime;
}

+ (id)longCommandCofiguration;
+ (id)defaultCommandCofiguration;
+ (id)fastCommandCofiguration;
@property(nonatomic) double commandProbeTime; // @synthesize commandProbeTime=_commandProbeTime;
@property(nonatomic) double commandTimeout; // @synthesize commandTimeout=_commandTimeout;
@property(nonatomic) double commandTime; // @synthesize commandTime=_commandTime;

@end
