//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SNPNexusLogger : NSObject
{
}

+ (void)crashBoardRecordError:(id)arg1;
+ (id)safeCheck:(id)arg1;
+ (id)jsonStringFromDict:(id)arg1;
+ (_Bool)isEnabledToPostNexusLogs;
+ (id)getNexusConfig:(id)arg1;
+ (void)recordEventAsync:(id)arg1 forProducerId:(id)arg2;
+ (void)postEvent:(id)arg1;

@end
