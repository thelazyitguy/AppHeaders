//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WMLog : NSObject
{
}

+ (void)logHelper:(unsigned long long)arg1 asynchronous:(_Bool)arg2 source:(id)arg3 file:(id)arg4 function:(id)arg5 line:(unsigned long long)arg6 message:(id)arg7;
+ (void)log:(unsigned long long)arg1 asynchronous:(_Bool)arg2 source:(id)arg3 file:(id)arg4 function:(id)arg5 line:(unsigned long long)arg6 format:(id)arg7;
+ (void)log:(unsigned long long)arg1 asynchronous:(_Bool)arg2 source:(id)arg3 file:(id)arg4 function:(id)arg5 line:(unsigned long long)arg6 message:(id)arg7;
+ (void)add:(id)arg1 level:(unsigned long long)arg2;

@end
