//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IBGLog : NSObject
{
}

+ (void)logMessage:(id)arg1 args:(char *)arg2 level:(id)arg3;
+ (void)clearAllLogs;
+ (void)logDebug:(id)arg1;
+ (void)logWarn:(id)arg1;
+ (void)logInfo:(id)arg1;
+ (void)logError:(id)arg1;
+ (void)logVerbose:(id)arg1;
+ (void)log:(id)arg1;
+ (void)setPrintsToConsole:(_Bool)arg1;
+ (_Bool)printsToConsole;

@end
